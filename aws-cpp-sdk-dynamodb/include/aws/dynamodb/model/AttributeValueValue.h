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

#pragma once

#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/AttributeValue.h>

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <cassert>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

class AttributeValue;

class AttributeValueValue
{
public:
    virtual const Aws::String& GetS() const { return DEFAULT_STRING; }

    virtual const Aws::String& GetN() const { return DEFAULT_STRING; }

    virtual const Aws::Utils::ByteBuffer& GetB() const { return DEFAULT_BYTEBUFFER; }

    virtual const Aws::Vector<Aws::String>& GetSS() const { return DEFAULT_STRING_SET; }

    virtual void AddSItem(const Aws::String& ) { assert(false); }

    virtual const Aws::Vector<Aws::String>& GetNS() const { return DEFAULT_STRING_SET; }

    virtual void AddNItem(const Aws::String& ) { assert(false); }

    virtual const Aws::Vector<Aws::Utils::ByteBuffer>& GetBS() const { return DEFAULT_BYTEBUFFER_SET; }

    virtual void AddBItem(const Aws::Utils::ByteBuffer&) { assert(false); }

    virtual const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>>& GetM() const { return DEFAULT_ATTRIBUTE_MAP; }

    virtual void AddMEntry(const Aws::String& , const std::shared_ptr<AttributeValue>& ) { assert(false); }

    virtual const Aws::Vector<std::shared_ptr<AttributeValue>>& GetL() const { return DEFAULT_ATTRIBUTE_LIST; }

    virtual void AddLItem(const std::shared_ptr<AttributeValue>& ) { assert(false); }

    virtual bool GetBool() const { return false; }

    virtual bool GetNull() const { return false; }

    virtual bool IsDefault() const = 0;

    virtual bool operator == (const AttributeValueValue& other) const = 0;

    virtual Aws::Utils::Json::JsonValue Jsonize() const = 0;

    const static Aws::String DEFAULT_STRING;
    const static Aws::Utils::ByteBuffer DEFAULT_BYTEBUFFER;
    const static Aws::Vector<Aws::String> DEFAULT_STRING_SET;
    const static Aws::Vector<Aws::Utils::ByteBuffer> DEFAULT_BYTEBUFFER_SET;
    const static Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>> DEFAULT_ATTRIBUTE_MAP;
    const static Aws::Vector<std::shared_ptr<AttributeValue>> DEFAULT_ATTRIBUTE_LIST;

    enum class ValueType {STRING, NUMBER, BYTEBUFFER, STRING_SET, NUMBER_SET, BYTEBUFFER_SET, ATTRIBUTE_MAP, ATTRIBUTE_LIST, BOOL, NULLVALUE};
    virtual ValueType GetType() const = 0;
};

/// String data type
class AttributeValueString final : public AttributeValueValue
{
public:
    explicit AttributeValueString(const Aws::String& value) : m_s(value) {}
    explicit AttributeValueString(Aws::Utils::Json::JsonView jsonValue) : m_s(jsonValue.GetString("S")) {}
    const Aws::String& GetS() const override { return m_s; }
    bool IsDefault() const override { return m_s == DEFAULT_STRING; }
    bool operator == (const AttributeValueValue& other) const override { return GetType() == other.GetType() && m_s == other.GetS(); }
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::STRING; }

private:
    Aws::String m_s;
};

/// Numeric data type
class AttributeValueNumeric final : public AttributeValueValue
{
public:
    explicit AttributeValueNumeric(const Aws::String& value) : m_n(value) {}
    explicit AttributeValueNumeric(Aws::Utils::Json::JsonView jsonValue) : m_n(jsonValue.GetString("N")) {}
    const Aws::String& GetN() const override { return m_n; }
    bool IsDefault() const override { return m_n == DEFAULT_STRING; }
    bool operator == (const AttributeValueValue& other) const override { return GetType() == other.GetType() && m_n == other.GetN(); };
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::NUMBER; }

private:
    Aws::String m_n;
};

/// Binary data type
class AttributeValueByteBuffer final : public AttributeValueValue
{
public:
    explicit AttributeValueByteBuffer(const Aws::Utils::ByteBuffer& value) : m_b(value) {}
    explicit AttributeValueByteBuffer(Aws::Utils::Json::JsonView jsonValue);
    const Aws::Utils::ByteBuffer& GetB() const override { return m_b; }
    bool IsDefault() const override { return m_b == DEFAULT_BYTEBUFFER; }
    bool operator == (const AttributeValueValue& other) const override { return GetType() == other.GetType() && m_b == other.GetB(); }
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::BYTEBUFFER; }

private:
    Aws::Utils::ByteBuffer m_b;
};

/// String set data type
class AttributeValueStringSet final : public AttributeValueValue
{
public:
    explicit AttributeValueStringSet(const Aws::Vector<Aws::String>& value) : m_sS(value) {}
    explicit AttributeValueStringSet(Aws::Utils::Json::JsonView jsonValue);
    const Aws::Vector<Aws::String>& GetSS() const override { return m_sS; }
    void AddSItem(const Aws::String& sItem) override { m_sS.push_back(sItem); }
    bool IsDefault() const override { return m_sS == DEFAULT_STRING_SET; }
    bool operator == (const AttributeValueValue& other) const override;
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::STRING_SET; }

private:
    Aws::Vector<Aws::String> m_sS;
};

/// Number set data type
class AttributeValueNumberSet final : public AttributeValueValue
{
public:
    explicit AttributeValueNumberSet(const Aws::Vector<Aws::String>& value) : m_nS(value) {}
    explicit AttributeValueNumberSet(Aws::Utils::Json::JsonView jsonValue);
    const Aws::Vector<Aws::String>& GetNS() const override { return m_nS; }
    void AddNItem(const Aws::String& nItem) override { m_nS.push_back(nItem); }
    bool IsDefault() const override { return m_nS == DEFAULT_STRING_SET; }
    bool operator == (const AttributeValueValue& other) const override;
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::NUMBER_SET; }

private:
    Aws::Vector<Aws::String> m_nS;
};

/// ByteByffer set data type
class AttributeValueByteBufferSet final : public AttributeValueValue
{
public:
    explicit AttributeValueByteBufferSet(const Aws::Vector<Aws::Utils::ByteBuffer>& value) : m_bS(value) {}
    explicit AttributeValueByteBufferSet(Aws::Utils::Json::JsonView jsonValue);
    const Aws::Vector<Aws::Utils::ByteBuffer>& GetBS() const override { return m_bS; }
    void AddBItem(const Aws::Utils::ByteBuffer& bItem) override { m_bS.push_back(bItem); }
    bool IsDefault() const override { return m_bS == DEFAULT_BYTEBUFFER_SET; }
    bool operator == (const AttributeValueValue& other) const override;
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::BYTEBUFFER_SET; }

private:
    Aws::Vector<Aws::Utils::ByteBuffer> m_bS;
};

/// Map Attribute Type
class AttributeValueMap final : public AttributeValueValue
{
public:
    explicit AttributeValueMap(const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>>& value) : m_m(value) {}
    explicit AttributeValueMap(Aws::Utils::Json::JsonView jsonValue);
    const Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>>& GetM() const override{ return m_m; }
    void AddMEntry(const Aws::String& key, const std::shared_ptr<AttributeValue>& value) override;
    bool IsDefault() const override { return m_m == DEFAULT_ATTRIBUTE_MAP; }
    bool operator == (const AttributeValueValue& other) const override;
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::ATTRIBUTE_MAP; }

private:
    Aws::Map<Aws::String, const std::shared_ptr<AttributeValue>> m_m;
};

/// List Attribute Type
class AttributeValueList final : public AttributeValueValue
{
public:
    explicit AttributeValueList(const Aws::Vector<std::shared_ptr<AttributeValue>>& value) : m_l(value) {}
    explicit AttributeValueList(Aws::Utils::Json::JsonView jsonValue);
    const Aws::Vector<std::shared_ptr<AttributeValue>>& GetL() const override { return m_l; }
    void AddLItem(const std::shared_ptr<AttributeValue>& listItem) override { m_l.push_back(listItem); }
    bool IsDefault() const override { return m_l == DEFAULT_ATTRIBUTE_LIST; }
    bool operator == (const AttributeValueValue& other) const override;
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::ATTRIBUTE_LIST; }

private:
    Aws::Vector<std::shared_ptr<AttributeValue>> m_l;
};

/// Bool type
class AttributeValueBool final : public AttributeValueValue
{
public:
    explicit AttributeValueBool(bool value) : m_bool(value) {}
    explicit AttributeValueBool(Aws::Utils::Json::JsonView jsonValue) : m_bool(jsonValue.GetBool("BOOL")) {}
    bool GetBool() const override { return m_bool; }
    bool IsDefault() const override { return m_bool == false; }
    bool operator == (const AttributeValueValue& other) const override { return GetType() == other.GetType() && m_bool == other.GetBool(); }
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::BOOL; }

private:
    bool m_bool;
};

/// NULL type
class AttributeValueNull final : public AttributeValueValue
{
public:
    explicit AttributeValueNull(bool value) : m_null(value) {}
    explicit AttributeValueNull(Aws::Utils::Json::JsonView jsonValue) : m_null(jsonValue.GetBool("NULL")) {}
    bool GetNull() const override { return m_null; }
    bool IsDefault() const override { return m_null == false; }
    bool operator == (const AttributeValueValue& other) const override { return GetType() == other.GetType() && m_null == other.GetNull(); }
    Aws::Utils::Json::JsonValue Jsonize() const override;
    ValueType GetType() const override { return ValueType::NULLVALUE; }

private:
    bool m_null;
};

} // Model
} // DynamoDB
} // Aws
