﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/AttributeValueValue.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils;
using namespace Aws::Utils::Json;

const Aws::String AttributeValue::GetS() const
{
    if (m_value)
    {
        return m_value->GetS();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetS(const Aws::String& s)
{
    m_value = Aws::MakeShared<AttributeValueString>("AttributeValue", s);
    return *this;
}

const Aws::String AttributeValue::GetN() const
{
    if (m_value)
    {
        return m_value->GetN();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetN(const Aws::String& n)
{
    m_value = Aws::MakeShared<AttributeValueNumeric>("AttributeValue", n);
    return *this;
}

const ByteBuffer AttributeValue::GetB() const
{
    if (m_value)
    {
        return m_value->GetB();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetB(const ByteBuffer& b)
{
    m_value = Aws::MakeShared<AttributeValueByteBuffer>("AttributeValue", b);
    return *this;
}

const ByteBuffer& AttributeValue::AccessB() const
{
    if (m_value)
    {
       return m_value->AccessB();
    }
    else
    {
        static const ByteBuffer empty;
        return empty;
    }
}

const Aws::Vector<Aws::String> AttributeValue::GetSS() const
{
    if (m_value)
    {
        return m_value->GetSS();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetSS(const Aws::Vector<Aws::String>& ss)
{
    m_value = Aws::MakeShared<AttributeValueStringSet>("AttributeValue", ss);
    return *this;
}

AttributeValue& AttributeValue::AddSItem(const Aws::String& sItem)
{
    if (!m_value)
    {
        Aws::Vector<Aws::String> ss;
        ss.push_back(sItem);
        m_value = Aws::MakeShared<AttributeValueStringSet>("AttributeValue", ss);
    }
    else
    {
        m_value->AddSItem(sItem);
    }
    return *this;
}

const Aws::Vector<Aws::String> AttributeValue::GetNS() const
{
    if (m_value)
    {
        return m_value->GetNS();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetNS(const Aws::Vector<Aws::String>& ns)
{
    m_value = Aws::MakeShared<AttributeValueNumberSet>("AttributeValue", ns);
    return *this;
}

AttributeValue& AttributeValue::AddNItem(const Aws::String& nItem)
{
    if (!m_value)
    {
        Aws::Vector<Aws::String> ns;
        ns.push_back(nItem);
        m_value = Aws::MakeShared<AttributeValueNumberSet>("AttributeValue", ns);
    }
    else
    {
        m_value->AddNItem(nItem);
    }
    return *this;
}

const Aws::Vector<ByteBuffer> AttributeValue::GetBS() const
{
    if (m_value)
    {
        return m_value->GetBS();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetBS(const Aws::Vector<ByteBuffer>& bs)
{
    m_value = Aws::MakeShared<AttributeValueByteBufferSet>("AttributeValue", bs);
    return *this;
}

AttributeValue& AttributeValue::AddBItem(const ByteBuffer& bItem)
{
    if (!m_value)
    {
        Aws::Vector<ByteBuffer> bs;
        bs.push_back(bItem);
        m_value = Aws::MakeShared<AttributeValueByteBufferSet>("AttributeValue", bs);
    }
    else
    {
        m_value->AddBItem(bItem);
    }
    return *this;
}

AttributeValue& AttributeValue::AddBItem(const unsigned char* bItem, size_t size)
{
    return AddBItem(ByteBuffer(bItem, size));
}

const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>> AttributeValue::GetM() const
{
    if (m_value)
    {
        return m_value->GetM();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetM(const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>>& map)
{
    m_value = Aws::MakeShared<AttributeValueMap>("AttributeValue", map);
    return *this;
}

AttributeValue& AttributeValue::AddMEntry(const Aws::String& key, const std::shared_ptr<AttributeValue>& value)
{
    if (!m_value)
    {
        Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>> map;
        auto kvp = std::pair<Aws::String, const std::shared_ptr<AttributeValue>>(key, value);
        map.insert(map.begin(), kvp);
        m_value = Aws::MakeShared<AttributeValueMap>("AttributeValue", map);
    }
    else
    {
        m_value->AddMEntry(key, value);
    }

    return *this;
}

const Aws::Vector<std::shared_ptr<AttributeValue>> AttributeValue::GetL() const
{
    if (m_value)
    {
        return m_value->GetL();
    }
    else
    {
        return {};
    }
}

AttributeValue& AttributeValue::SetL(const Aws::Vector<std::shared_ptr<AttributeValue>>& list)
{
    m_value = Aws::MakeShared<AttributeValueList>("AttributeValue", list);
    return *this;
}

AttributeValue& AttributeValue::AddLItem(const std::shared_ptr<AttributeValue>& listItem)
{
    if (!m_value)
    {
        Aws::Vector<std::shared_ptr<AttributeValue>> list;
        list.push_back(listItem);
        m_value = Aws::MakeShared<AttributeValueList>("AttributeValue", list);
    }
    else
    {
        m_value->AddLItem(listItem);
    }

    return *this;
}

bool AttributeValue::GetBool() const
{
    if (m_value)
    {
        return m_value->GetBool();
    }
    else
    {
        return false;
    }
}

AttributeValue& AttributeValue::SetBool(bool value)
{
    m_value = Aws::MakeShared<AttributeValueBool>("AttributeValue", value);
    return *this;
}

bool AttributeValue::GetNull() const
{
    if (m_value)
    {
        return m_value->GetNull();
    }
    else
    {
        return false;
    }
}

AttributeValue& AttributeValue::SetNull(bool value)
{
    m_value = Aws::MakeShared<AttributeValueNull>("AttributeValue", value);
    return *this;
}

AttributeValue& AttributeValue::operator =(JsonView jsonValue)
{
    if (jsonValue.ValueExists("S"))
    {
        m_value = Aws::MakeShared<AttributeValueString>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("N"))
    {
        m_value = Aws::MakeShared<AttributeValueNumeric>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("B"))
    {
        m_value = Aws::MakeShared<AttributeValueByteBuffer>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("SS"))
    {
        m_value = Aws::MakeShared<AttributeValueStringSet>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("NS"))
    {
        m_value = Aws::MakeShared<AttributeValueNumberSet>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("BS"))
    {
        m_value = Aws::MakeShared<AttributeValueByteBufferSet>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("M"))
    {
        m_value = Aws::MakeShared<AttributeValueMap>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("L"))
    {
        m_value = Aws::MakeShared<AttributeValueList>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("BOOL"))
    {
        m_value = Aws::MakeShared<AttributeValueBool>("AttributeValue", jsonValue);
        return *this;
    }

    if (jsonValue.ValueExists("NULL"))
    {
        m_value = Aws::MakeShared<AttributeValueNull>("AttributeValue", jsonValue);
        return *this;
    }

    return *this;
}

bool AttributeValue::operator ==(const AttributeValue& other) const
{
    if (this == &other)
        return true;

    if (m_value)
    {
        if (other.m_value)
        {
            return *m_value == *other.m_value;
        }
        else
        {
            return m_value->IsDefault();
        }
    }
    else if (other.m_value)
    {
        return other.m_value->IsDefault();
    }

    return true;
}

JsonValue AttributeValue::Jsonize() const
{
    if (m_value)
    {
        return m_value->Jsonize();
    }
    else
    {
        return JsonValue();
    }
}

Aws::String AttributeValue::SerializeAttribute() const
{
    JsonValue value = Jsonize();
    return value.View().WriteReadable();
}

Aws::DynamoDB::Model::ValueType AttributeValue::GetType() const
{
    return m_value->GetType();
}
