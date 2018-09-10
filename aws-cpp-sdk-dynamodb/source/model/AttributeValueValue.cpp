﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/dynamodb/model/AttributeValueValue.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;

const Aws::String AttributeValueValue::DEFAULT_STRING;
const Aws::Utils::ByteBuffer AttributeValueValue::DEFAULT_BYTEBUFFER;
const Aws::Vector<Aws::String> AttributeValueValue::DEFAULT_STRING_SET;
const Aws::Vector<Aws::Utils::ByteBuffer> AttributeValueValue::DEFAULT_BYTEBUFFER_SET;
const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>> AttributeValueValue::DEFAULT_ATTRIBUTE_MAP;
const Aws::Vector<std::shared_ptr<AttributeValue>> AttributeValueValue::DEFAULT_ATTRIBUTE_LIST;

//
// Strings
//

JsonValue AttributeValueString::Jsonize() const
{
    JsonValue value;

    if (!m_s.empty())
    {
        value.WithString("S", m_s);
    }

    return value;
}

//
// Numerics
//

JsonValue AttributeValueNumeric::Jsonize() const
{
    JsonValue value;

    if (!m_n.empty())
    {
        value.WithString("N", m_n);
    }

    return value;
}

//
// ByteBuffers
//

AttributeValueByteBuffer::AttributeValueByteBuffer(JsonView jsonValue)
{
    m_b = HashingUtils::Base64Decode(jsonValue.GetString("B"));
}

JsonValue AttributeValueByteBuffer::Jsonize() const
{
    JsonValue value;

    if (m_b.GetLength() > 0)
    {
        value.WithString("B", HashingUtils::Base64Encode(m_b));
    }

    return value;
}

//
// String Sets
//

AttributeValueStringSet::AttributeValueStringSet(JsonView jsonValue)
{
    Array<JsonView> ss = jsonValue.GetArray("SS");

    for (unsigned i = 0; i < ss.GetLength(); ++i)
    {
        m_sS.push_back(ss[i].AsString());
    }
}

bool AttributeValueStringSet::operator == (const AttributeValueValue& other) const
{
    const Aws::Vector<Aws::String>& other_sS(other.GetSS());

    if (GetType() != other.GetType() || m_sS.size() != other_sS.size())
        return false;

    for (unsigned i = 0; i < m_sS.size(); ++i)
        if (m_sS[i] != other_sS[i])
            return false;

    return true;
}

JsonValue AttributeValueStringSet::Jsonize() const
{
    JsonValue value;

    if (m_sS.size() > 0)
    {
        Array<JsonValue> array(m_sS.size());
        for (unsigned i = 0; i < m_sS.size(); ++i)
        {
            array[i].AsString(m_sS[i]);
        }
        value.WithArray("SS", std::move(array));
    }

    return value;
}

//
// Number Sets
//

AttributeValueNumberSet::AttributeValueNumberSet(JsonView jsonValue)
{
    const Array<JsonView> ns = jsonValue.GetArray("NS");

    for (unsigned i = 0; i < ns.GetLength(); ++i)
    {
        m_nS.push_back(ns[i].AsString());
    }
}

bool AttributeValueNumberSet::operator == (const AttributeValueValue& other) const
{
    const Aws::Vector<Aws::String>& other_nS(other.GetNS());

    if (GetType() != other.GetType() || m_nS.size() != other_nS.size())
        return false;

    for (unsigned i = 0; i < m_nS.size(); ++i)
        if (m_nS[i] != other_nS[i])
            return false;

    return true;
}

JsonValue AttributeValueNumberSet::Jsonize() const
{
    JsonValue value;

    if (m_nS.size() > 0)
    {
        Array<JsonValue> array(m_nS.size());
        for (unsigned i = 0; i < m_nS.size(); ++i)
        {
            array[i].AsString(m_nS[i]);
        }
        value.WithArray("NS", std::move(array));
    }

    return value;
}

//
// ByteBuffer Sets
//

AttributeValueByteBufferSet::AttributeValueByteBufferSet(JsonView jsonValue)
{
    const Array<JsonView> bs = jsonValue.GetArray("BS");

    for (unsigned i = 0; i < bs.GetLength(); ++i)
    {
        m_bS.push_back(HashingUtils::Base64Decode(bs[i].AsString()));
    }
}

bool AttributeValueByteBufferSet::operator == (const AttributeValueValue& other) const
{
    const Aws::Vector<Aws::Utils::ByteBuffer>& other_bS(other.GetBS());

    if (GetType() != other.GetType() || m_bS.size() != other_bS.size())
        return false;

    for (unsigned i = 0; i < m_bS.size(); ++i)
        if (m_bS[i] != other_bS[i])
            return false;

    return true;
}

JsonValue AttributeValueByteBufferSet::Jsonize() const
{
    JsonValue value;

    if (m_bS.size() > 0)
    {
        Array<JsonValue> array(m_bS.size());
        for (unsigned i = 0; i < m_bS.size(); ++i)
        {
            array[i].AsString(HashingUtils::Base64Encode(m_bS[i]));
        }
        value.WithArray("BS", std::move(array));
    }

    return value;
}

//
// AttributeValue Map
//

AttributeValueMap::AttributeValueMap(JsonView jsonValue)
{
    const Aws::Map<Aws::String, JsonView> map = jsonValue.GetObject("M").GetAllObjects();

    for (auto& item : map)
    {
        std::shared_ptr<AttributeValue> attributeValue = Aws::MakeShared<AttributeValue>("AttributeValue");
        JsonView itemValue = item.second;
        *attributeValue = itemValue;

        m_m.emplace(item.first, std::move(attributeValue));
    }
}

void AttributeValueMap::AddMEntry(const Aws::String& key, const std::shared_ptr<AttributeValue>& value)
{
    m_m.insert(m_m.begin(), std::pair<Aws::String, const std::shared_ptr<AttributeValue>>(key, value));
}

bool AttributeValueMap::operator == (const AttributeValueValue& other) const
{
    const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>>& other_m(other.GetM());

    if (GetType() != other.GetType() || m_m.size() != other_m.size())
        return false;

    if (m_m.size() > 0)
    {
        for (auto& mapItem : m_m)
        {
            auto foundItem = other_m.find(mapItem.first);
            if (foundItem == other_m.end())
                return false;

            if (*foundItem->second != *mapItem.second)
                return false;
        }
    }

    return true;
}

JsonValue AttributeValueMap::Jsonize() const
{
    JsonValue value;

    JsonValue mapValue;
    for (auto& mapItem : m_m)
    {
        JsonValue mapEntry = mapItem.second->Jsonize();
        mapValue.WithObject(mapItem.first, std::move(mapEntry));
    }
    value.WithObject("M", std::move(mapValue));

    return value;
}

//
// AttributeValue List
//

AttributeValueList::AttributeValueList(JsonView jsonValue)
{
    const Array<JsonView> array = jsonValue.GetArray("L");

    for (unsigned i = 0; i < array.GetLength(); ++i)
    {
        std::shared_ptr<AttributeValue> attributeValue = Aws::MakeShared<AttributeValue>("AttributeValue");
        JsonView itemValue = array[i];
        *attributeValue = itemValue;
        m_l.push_back(attributeValue);
    }

}

bool AttributeValueList::operator == (const AttributeValueValue& other) const
{
    const Aws::Vector<std::shared_ptr<AttributeValue>>& other_l(other.GetL());

    if (GetType() != other.GetType() || m_l.size() != other_l.size())
        return false;

    if (m_l.size() > 0)
    {
        for (unsigned i = 0; i < m_l.size(); ++i)
        {
            if (*m_l[i] != *other_l[i])
                return false;
        }
    }

    return true;
}

JsonValue AttributeValueList::Jsonize() const
{
    JsonValue value;

    Array<JsonValue> list(m_l.size());

    for (unsigned i = 0; i < m_l.size(); ++i)
    {
        list[i] = m_l[i]->Jsonize();
    }

    value.WithArray("L", std::move(list));

    return value;
}

//
// Bool type
//

JsonValue AttributeValueBool::Jsonize() const
{
    JsonValue value;

    value.WithBool("BOOL", m_bool);

    return value;
}

//
// Null type
//

JsonValue AttributeValueNull::Jsonize() const
{
    JsonValue value;

    value.WithBool("NULL", m_null);

    return value;
}
