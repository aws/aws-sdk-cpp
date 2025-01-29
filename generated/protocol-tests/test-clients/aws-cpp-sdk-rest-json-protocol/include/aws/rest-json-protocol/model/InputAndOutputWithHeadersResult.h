/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/model/FooEnum.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RestJsonProtocol
{
namespace Model
{
  class InputAndOutputWithHeadersResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersResult();
    AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetHeaderString() const{ return m_headerString; }
    inline void SetHeaderString(const Aws::String& value) { m_headerString = value; }
    inline void SetHeaderString(Aws::String&& value) { m_headerString = std::move(value); }
    inline void SetHeaderString(const char* value) { m_headerString.assign(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderString(const Aws::String& value) { SetHeaderString(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderString(Aws::String&& value) { SetHeaderString(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderString(const char* value) { SetHeaderString(value); return *this;}
    ///@}

    ///@{
    
    inline int GetHeaderByte() const{ return m_headerByte; }
    inline void SetHeaderByte(int value) { m_headerByte = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderByte(int value) { SetHeaderByte(value); return *this;}
    ///@}

    ///@{
    
    inline int GetHeaderShort() const{ return m_headerShort; }
    inline void SetHeaderShort(int value) { m_headerShort = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderShort(int value) { SetHeaderShort(value); return *this;}
    ///@}

    ///@{
    
    inline int GetHeaderInteger() const{ return m_headerInteger; }
    inline void SetHeaderInteger(int value) { m_headerInteger = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderInteger(int value) { SetHeaderInteger(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetHeaderLong() const{ return m_headerLong; }
    inline void SetHeaderLong(long long value) { m_headerLong = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderLong(long long value) { SetHeaderLong(value); return *this;}
    ///@}

    ///@{
    
    inline double GetHeaderFloat() const{ return m_headerFloat; }
    inline void SetHeaderFloat(double value) { m_headerFloat = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderFloat(double value) { SetHeaderFloat(value); return *this;}
    ///@}

    ///@{
    
    inline double GetHeaderDouble() const{ return m_headerDouble; }
    inline void SetHeaderDouble(double value) { m_headerDouble = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderDouble(double value) { SetHeaderDouble(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetHeaderTrueBool() const{ return m_headerTrueBool; }
    inline void SetHeaderTrueBool(bool value) { m_headerTrueBool = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderTrueBool(bool value) { SetHeaderTrueBool(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetHeaderFalseBool() const{ return m_headerFalseBool; }
    inline void SetHeaderFalseBool(bool value) { m_headerFalseBool = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderFalseBool(bool value) { SetHeaderFalseBool(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetHeaderStringList() const{ return m_headerStringList; }
    inline void SetHeaderStringList(const Aws::Vector<Aws::String>& value) { m_headerStringList = value; }
    inline void SetHeaderStringList(Aws::Vector<Aws::String>&& value) { m_headerStringList = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderStringList(const Aws::Vector<Aws::String>& value) { SetHeaderStringList(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderStringList(Aws::Vector<Aws::String>&& value) { SetHeaderStringList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderStringList(const Aws::String& value) { m_headerStringList.push_back(value); return *this; }
    inline InputAndOutputWithHeadersResult& AddHeaderStringList(Aws::String&& value) { m_headerStringList.push_back(std::move(value)); return *this; }
    inline InputAndOutputWithHeadersResult& AddHeaderStringList(const char* value) { m_headerStringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetHeaderStringSet() const{ return m_headerStringSet; }
    inline void SetHeaderStringSet(const Aws::Vector<Aws::String>& value) { m_headerStringSet = value; }
    inline void SetHeaderStringSet(Aws::Vector<Aws::String>&& value) { m_headerStringSet = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderStringSet(const Aws::Vector<Aws::String>& value) { SetHeaderStringSet(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderStringSet(Aws::Vector<Aws::String>&& value) { SetHeaderStringSet(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderStringSet(const Aws::String& value) { m_headerStringSet.push_back(value); return *this; }
    inline InputAndOutputWithHeadersResult& AddHeaderStringSet(Aws::String&& value) { m_headerStringSet.push_back(std::move(value)); return *this; }
    inline InputAndOutputWithHeadersResult& AddHeaderStringSet(const char* value) { m_headerStringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetHeaderIntegerList() const{ return m_headerIntegerList; }
    inline void SetHeaderIntegerList(const Aws::Vector<int>& value) { m_headerIntegerList = value; }
    inline void SetHeaderIntegerList(Aws::Vector<int>&& value) { m_headerIntegerList = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderIntegerList(const Aws::Vector<int>& value) { SetHeaderIntegerList(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderIntegerList(Aws::Vector<int>&& value) { SetHeaderIntegerList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderIntegerList(int value) { m_headerIntegerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetHeaderBooleanList() const{ return m_headerBooleanList; }
    inline void SetHeaderBooleanList(const Aws::Vector<bool>& value) { m_headerBooleanList = value; }
    inline void SetHeaderBooleanList(Aws::Vector<bool>&& value) { m_headerBooleanList = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderBooleanList(const Aws::Vector<bool>& value) { SetHeaderBooleanList(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderBooleanList(Aws::Vector<bool>&& value) { SetHeaderBooleanList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderBooleanList(bool value) { m_headerBooleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetHeaderTimestampList() const{ return m_headerTimestampList; }
    inline void SetHeaderTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_headerTimestampList = value; }
    inline void SetHeaderTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_headerTimestampList = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetHeaderTimestampList(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetHeaderTimestampList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderTimestampList(const Aws::Utils::DateTime& value) { m_headerTimestampList.push_back(value); return *this; }
    inline InputAndOutputWithHeadersResult& AddHeaderTimestampList(Aws::Utils::DateTime&& value) { m_headerTimestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const FooEnum& GetHeaderEnum() const{ return m_headerEnum; }
    inline void SetHeaderEnum(const FooEnum& value) { m_headerEnum = value; }
    inline void SetHeaderEnum(FooEnum&& value) { m_headerEnum = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderEnum(const FooEnum& value) { SetHeaderEnum(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderEnum(FooEnum&& value) { SetHeaderEnum(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetHeaderEnumList() const{ return m_headerEnumList; }
    inline void SetHeaderEnumList(const Aws::Vector<FooEnum>& value) { m_headerEnumList = value; }
    inline void SetHeaderEnumList(Aws::Vector<FooEnum>&& value) { m_headerEnumList = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderEnumList(const Aws::Vector<FooEnum>& value) { SetHeaderEnumList(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderEnumList(Aws::Vector<FooEnum>&& value) { SetHeaderEnumList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderEnumList(const FooEnum& value) { m_headerEnumList.push_back(value); return *this; }
    inline InputAndOutputWithHeadersResult& AddHeaderEnumList(FooEnum&& value) { m_headerEnumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetHeaderIntegerEnum() const{ return m_headerIntegerEnum; }
    inline void SetHeaderIntegerEnum(int value) { m_headerIntegerEnum = value; }
    inline InputAndOutputWithHeadersResult& WithHeaderIntegerEnum(int value) { SetHeaderIntegerEnum(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetHeaderIntegerEnumList() const{ return m_headerIntegerEnumList; }
    inline void SetHeaderIntegerEnumList(const Aws::Vector<int>& value) { m_headerIntegerEnumList = value; }
    inline void SetHeaderIntegerEnumList(Aws::Vector<int>&& value) { m_headerIntegerEnumList = std::move(value); }
    inline InputAndOutputWithHeadersResult& WithHeaderIntegerEnumList(const Aws::Vector<int>& value) { SetHeaderIntegerEnumList(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithHeaderIntegerEnumList(Aws::Vector<int>&& value) { SetHeaderIntegerEnumList(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& AddHeaderIntegerEnumList(int value) { m_headerIntegerEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InputAndOutputWithHeadersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InputAndOutputWithHeadersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InputAndOutputWithHeadersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_headerString;

    int m_headerByte;

    int m_headerShort;

    int m_headerInteger;

    long long m_headerLong;

    double m_headerFloat;

    double m_headerDouble;

    bool m_headerTrueBool;

    bool m_headerFalseBool;

    Aws::Vector<Aws::String> m_headerStringList;

    Aws::Vector<Aws::String> m_headerStringSet;

    Aws::Vector<int> m_headerIntegerList;

    Aws::Vector<bool> m_headerBooleanList;

    Aws::Vector<Aws::Utils::DateTime> m_headerTimestampList;

    FooEnum m_headerEnum;

    Aws::Vector<FooEnum> m_headerEnumList;

    int m_headerIntegerEnum;

    Aws::Vector<int> m_headerIntegerEnumList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
