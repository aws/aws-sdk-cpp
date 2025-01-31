/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class AllQueryStringTypesRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API AllQueryStringTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllQueryStringTypes"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline AllQueryStringTypesRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetQueryStringList() const{ return m_queryStringList; }
    inline bool QueryStringListHasBeenSet() const { return m_queryStringListHasBeenSet; }
    inline void SetQueryStringList(const Aws::Vector<Aws::String>& value) { m_queryStringListHasBeenSet = true; m_queryStringList = value; }
    inline void SetQueryStringList(Aws::Vector<Aws::String>&& value) { m_queryStringListHasBeenSet = true; m_queryStringList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryStringList(const Aws::Vector<Aws::String>& value) { SetQueryStringList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryStringList(Aws::Vector<Aws::String>&& value) { SetQueryStringList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryStringList(const Aws::String& value) { m_queryStringListHasBeenSet = true; m_queryStringList.push_back(value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryStringList(Aws::String&& value) { m_queryStringListHasBeenSet = true; m_queryStringList.push_back(std::move(value)); return *this; }
    inline AllQueryStringTypesRequest& AddQueryStringList(const char* value) { m_queryStringListHasBeenSet = true; m_queryStringList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetQueryStringSet() const{ return m_queryStringSet; }
    inline bool QueryStringSetHasBeenSet() const { return m_queryStringSetHasBeenSet; }
    inline void SetQueryStringSet(const Aws::Vector<Aws::String>& value) { m_queryStringSetHasBeenSet = true; m_queryStringSet = value; }
    inline void SetQueryStringSet(Aws::Vector<Aws::String>&& value) { m_queryStringSetHasBeenSet = true; m_queryStringSet = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryStringSet(const Aws::Vector<Aws::String>& value) { SetQueryStringSet(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryStringSet(Aws::Vector<Aws::String>&& value) { SetQueryStringSet(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryStringSet(const Aws::String& value) { m_queryStringSetHasBeenSet = true; m_queryStringSet.push_back(value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryStringSet(Aws::String&& value) { m_queryStringSetHasBeenSet = true; m_queryStringSet.push_back(std::move(value)); return *this; }
    inline AllQueryStringTypesRequest& AddQueryStringSet(const char* value) { m_queryStringSetHasBeenSet = true; m_queryStringSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetQueryByte() const{ return m_queryByte; }
    inline bool QueryByteHasBeenSet() const { return m_queryByteHasBeenSet; }
    inline void SetQueryByte(int value) { m_queryByteHasBeenSet = true; m_queryByte = value; }
    inline AllQueryStringTypesRequest& WithQueryByte(int value) { SetQueryByte(value); return *this;}
    ///@}

    ///@{
    
    inline int GetQueryShort() const{ return m_queryShort; }
    inline bool QueryShortHasBeenSet() const { return m_queryShortHasBeenSet; }
    inline void SetQueryShort(int value) { m_queryShortHasBeenSet = true; m_queryShort = value; }
    inline AllQueryStringTypesRequest& WithQueryShort(int value) { SetQueryShort(value); return *this;}
    ///@}

    ///@{
    
    inline int GetQueryInteger() const{ return m_queryInteger; }
    inline bool QueryIntegerHasBeenSet() const { return m_queryIntegerHasBeenSet; }
    inline void SetQueryInteger(int value) { m_queryIntegerHasBeenSet = true; m_queryInteger = value; }
    inline AllQueryStringTypesRequest& WithQueryInteger(int value) { SetQueryInteger(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetQueryIntegerList() const{ return m_queryIntegerList; }
    inline bool QueryIntegerListHasBeenSet() const { return m_queryIntegerListHasBeenSet; }
    inline void SetQueryIntegerList(const Aws::Vector<int>& value) { m_queryIntegerListHasBeenSet = true; m_queryIntegerList = value; }
    inline void SetQueryIntegerList(Aws::Vector<int>&& value) { m_queryIntegerListHasBeenSet = true; m_queryIntegerList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryIntegerList(const Aws::Vector<int>& value) { SetQueryIntegerList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryIntegerList(Aws::Vector<int>&& value) { SetQueryIntegerList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryIntegerList(int value) { m_queryIntegerListHasBeenSet = true; m_queryIntegerList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetQueryIntegerSet() const{ return m_queryIntegerSet; }
    inline bool QueryIntegerSetHasBeenSet() const { return m_queryIntegerSetHasBeenSet; }
    inline void SetQueryIntegerSet(const Aws::Vector<int>& value) { m_queryIntegerSetHasBeenSet = true; m_queryIntegerSet = value; }
    inline void SetQueryIntegerSet(Aws::Vector<int>&& value) { m_queryIntegerSetHasBeenSet = true; m_queryIntegerSet = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryIntegerSet(const Aws::Vector<int>& value) { SetQueryIntegerSet(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryIntegerSet(Aws::Vector<int>&& value) { SetQueryIntegerSet(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryIntegerSet(int value) { m_queryIntegerSetHasBeenSet = true; m_queryIntegerSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline long long GetQueryLong() const{ return m_queryLong; }
    inline bool QueryLongHasBeenSet() const { return m_queryLongHasBeenSet; }
    inline void SetQueryLong(long long value) { m_queryLongHasBeenSet = true; m_queryLong = value; }
    inline AllQueryStringTypesRequest& WithQueryLong(long long value) { SetQueryLong(value); return *this;}
    ///@}

    ///@{
    
    inline double GetQueryFloat() const{ return m_queryFloat; }
    inline bool QueryFloatHasBeenSet() const { return m_queryFloatHasBeenSet; }
    inline void SetQueryFloat(double value) { m_queryFloatHasBeenSet = true; m_queryFloat = value; }
    inline AllQueryStringTypesRequest& WithQueryFloat(double value) { SetQueryFloat(value); return *this;}
    ///@}

    ///@{
    
    inline double GetQueryDouble() const{ return m_queryDouble; }
    inline bool QueryDoubleHasBeenSet() const { return m_queryDoubleHasBeenSet; }
    inline void SetQueryDouble(double value) { m_queryDoubleHasBeenSet = true; m_queryDouble = value; }
    inline AllQueryStringTypesRequest& WithQueryDouble(double value) { SetQueryDouble(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<double>& GetQueryDoubleList() const{ return m_queryDoubleList; }
    inline bool QueryDoubleListHasBeenSet() const { return m_queryDoubleListHasBeenSet; }
    inline void SetQueryDoubleList(const Aws::Vector<double>& value) { m_queryDoubleListHasBeenSet = true; m_queryDoubleList = value; }
    inline void SetQueryDoubleList(Aws::Vector<double>&& value) { m_queryDoubleListHasBeenSet = true; m_queryDoubleList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryDoubleList(const Aws::Vector<double>& value) { SetQueryDoubleList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryDoubleList(Aws::Vector<double>&& value) { SetQueryDoubleList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryDoubleList(double value) { m_queryDoubleListHasBeenSet = true; m_queryDoubleList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline bool GetQueryBoolean() const{ return m_queryBoolean; }
    inline bool QueryBooleanHasBeenSet() const { return m_queryBooleanHasBeenSet; }
    inline void SetQueryBoolean(bool value) { m_queryBooleanHasBeenSet = true; m_queryBoolean = value; }
    inline AllQueryStringTypesRequest& WithQueryBoolean(bool value) { SetQueryBoolean(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<bool>& GetQueryBooleanList() const{ return m_queryBooleanList; }
    inline bool QueryBooleanListHasBeenSet() const { return m_queryBooleanListHasBeenSet; }
    inline void SetQueryBooleanList(const Aws::Vector<bool>& value) { m_queryBooleanListHasBeenSet = true; m_queryBooleanList = value; }
    inline void SetQueryBooleanList(Aws::Vector<bool>&& value) { m_queryBooleanListHasBeenSet = true; m_queryBooleanList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryBooleanList(const Aws::Vector<bool>& value) { SetQueryBooleanList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryBooleanList(Aws::Vector<bool>&& value) { SetQueryBooleanList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryBooleanList(bool value) { m_queryBooleanListHasBeenSet = true; m_queryBooleanList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetQueryTimestamp() const{ return m_queryTimestamp; }
    inline bool QueryTimestampHasBeenSet() const { return m_queryTimestampHasBeenSet; }
    inline void SetQueryTimestamp(const Aws::Utils::DateTime& value) { m_queryTimestampHasBeenSet = true; m_queryTimestamp = value; }
    inline void SetQueryTimestamp(Aws::Utils::DateTime&& value) { m_queryTimestampHasBeenSet = true; m_queryTimestamp = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryTimestamp(const Aws::Utils::DateTime& value) { SetQueryTimestamp(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryTimestamp(Aws::Utils::DateTime&& value) { SetQueryTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::Utils::DateTime>& GetQueryTimestampList() const{ return m_queryTimestampList; }
    inline bool QueryTimestampListHasBeenSet() const { return m_queryTimestampListHasBeenSet; }
    inline void SetQueryTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList = value; }
    inline void SetQueryTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryTimestampList(const Aws::Vector<Aws::Utils::DateTime>& value) { SetQueryTimestampList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryTimestampList(Aws::Vector<Aws::Utils::DateTime>&& value) { SetQueryTimestampList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryTimestampList(const Aws::Utils::DateTime& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList.push_back(value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryTimestampList(Aws::Utils::DateTime&& value) { m_queryTimestampListHasBeenSet = true; m_queryTimestampList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const FooEnum& GetQueryEnum() const{ return m_queryEnum; }
    inline bool QueryEnumHasBeenSet() const { return m_queryEnumHasBeenSet; }
    inline void SetQueryEnum(const FooEnum& value) { m_queryEnumHasBeenSet = true; m_queryEnum = value; }
    inline void SetQueryEnum(FooEnum&& value) { m_queryEnumHasBeenSet = true; m_queryEnum = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryEnum(const FooEnum& value) { SetQueryEnum(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryEnum(FooEnum&& value) { SetQueryEnum(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetQueryEnumList() const{ return m_queryEnumList; }
    inline bool QueryEnumListHasBeenSet() const { return m_queryEnumListHasBeenSet; }
    inline void SetQueryEnumList(const Aws::Vector<FooEnum>& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList = value; }
    inline void SetQueryEnumList(Aws::Vector<FooEnum>&& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryEnumList(const Aws::Vector<FooEnum>& value) { SetQueryEnumList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryEnumList(Aws::Vector<FooEnum>&& value) { SetQueryEnumList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryEnumList(const FooEnum& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList.push_back(value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryEnumList(FooEnum&& value) { m_queryEnumListHasBeenSet = true; m_queryEnumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline int GetQueryIntegerEnum() const{ return m_queryIntegerEnum; }
    inline bool QueryIntegerEnumHasBeenSet() const { return m_queryIntegerEnumHasBeenSet; }
    inline void SetQueryIntegerEnum(int value) { m_queryIntegerEnumHasBeenSet = true; m_queryIntegerEnum = value; }
    inline AllQueryStringTypesRequest& WithQueryIntegerEnum(int value) { SetQueryIntegerEnum(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetQueryIntegerEnumList() const{ return m_queryIntegerEnumList; }
    inline bool QueryIntegerEnumListHasBeenSet() const { return m_queryIntegerEnumListHasBeenSet; }
    inline void SetQueryIntegerEnumList(const Aws::Vector<int>& value) { m_queryIntegerEnumListHasBeenSet = true; m_queryIntegerEnumList = value; }
    inline void SetQueryIntegerEnumList(Aws::Vector<int>&& value) { m_queryIntegerEnumListHasBeenSet = true; m_queryIntegerEnumList = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryIntegerEnumList(const Aws::Vector<int>& value) { SetQueryIntegerEnumList(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryIntegerEnumList(Aws::Vector<int>&& value) { SetQueryIntegerEnumList(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryIntegerEnumList(int value) { m_queryIntegerEnumListHasBeenSet = true; m_queryIntegerEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetQueryParamsMapOfStrings() const{ return m_queryParamsMapOfStrings; }
    inline bool QueryParamsMapOfStringsHasBeenSet() const { return m_queryParamsMapOfStringsHasBeenSet; }
    inline void SetQueryParamsMapOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings = value; }
    inline void SetQueryParamsMapOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings = std::move(value); }
    inline AllQueryStringTypesRequest& WithQueryParamsMapOfStrings(const Aws::Map<Aws::String, Aws::String>& value) { SetQueryParamsMapOfStrings(value); return *this;}
    inline AllQueryStringTypesRequest& WithQueryParamsMapOfStrings(Aws::Map<Aws::String, Aws::String>&& value) { SetQueryParamsMapOfStrings(std::move(value)); return *this;}
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(const Aws::String& key, const Aws::String& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(key, value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(Aws::String&& key, const Aws::String& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(std::move(key), value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(const Aws::String& key, Aws::String&& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(key, std::move(value)); return *this; }
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(Aws::String&& key, Aws::String&& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(std::move(key), std::move(value)); return *this; }
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(const char* key, Aws::String&& value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(key, std::move(value)); return *this; }
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(Aws::String&& key, const char* value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(std::move(key), value); return *this; }
    inline AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(const char* key, const char* value) { m_queryParamsMapOfStringsHasBeenSet = true; m_queryParamsMapOfStrings.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryStringList;
    bool m_queryStringListHasBeenSet = false;

    Aws::Vector<Aws::String> m_queryStringSet;
    bool m_queryStringSetHasBeenSet = false;

    int m_queryByte;
    bool m_queryByteHasBeenSet = false;

    int m_queryShort;
    bool m_queryShortHasBeenSet = false;

    int m_queryInteger;
    bool m_queryIntegerHasBeenSet = false;

    Aws::Vector<int> m_queryIntegerList;
    bool m_queryIntegerListHasBeenSet = false;

    Aws::Vector<int> m_queryIntegerSet;
    bool m_queryIntegerSetHasBeenSet = false;

    long long m_queryLong;
    bool m_queryLongHasBeenSet = false;

    double m_queryFloat;
    bool m_queryFloatHasBeenSet = false;

    double m_queryDouble;
    bool m_queryDoubleHasBeenSet = false;

    Aws::Vector<double> m_queryDoubleList;
    bool m_queryDoubleListHasBeenSet = false;

    bool m_queryBoolean;
    bool m_queryBooleanHasBeenSet = false;

    Aws::Vector<bool> m_queryBooleanList;
    bool m_queryBooleanListHasBeenSet = false;

    Aws::Utils::DateTime m_queryTimestamp;
    bool m_queryTimestampHasBeenSet = false;

    Aws::Vector<Aws::Utils::DateTime> m_queryTimestampList;
    bool m_queryTimestampListHasBeenSet = false;

    FooEnum m_queryEnum;
    bool m_queryEnumHasBeenSet = false;

    Aws::Vector<FooEnum> m_queryEnumList;
    bool m_queryEnumListHasBeenSet = false;

    int m_queryIntegerEnum;
    bool m_queryIntegerEnumHasBeenSet = false;

    Aws::Vector<int> m_queryIntegerEnumList;
    bool m_queryIntegerEnumListHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_queryParamsMapOfStrings;
    bool m_queryParamsMapOfStringsHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
