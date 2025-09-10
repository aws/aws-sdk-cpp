/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RestXmlProtocol {
namespace Model {

/**
 */
class AllQueryStringTypesRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API AllQueryStringTypesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AllQueryStringTypes"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTXMLPROTOCOL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{

  inline const Aws::String& GetQueryString() const { return m_queryString; }
  inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  AllQueryStringTypesRequest& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetQueryStringList() const { return m_queryStringList; }
  inline bool QueryStringListHasBeenSet() const { return m_queryStringListHasBeenSet; }
  template <typename QueryStringListT = Aws::Vector<Aws::String>>
  void SetQueryStringList(QueryStringListT&& value) {
    m_queryStringListHasBeenSet = true;
    m_queryStringList = std::forward<QueryStringListT>(value);
  }
  template <typename QueryStringListT = Aws::Vector<Aws::String>>
  AllQueryStringTypesRequest& WithQueryStringList(QueryStringListT&& value) {
    SetQueryStringList(std::forward<QueryStringListT>(value));
    return *this;
  }
  template <typename QueryStringListT = Aws::String>
  AllQueryStringTypesRequest& AddQueryStringList(QueryStringListT&& value) {
    m_queryStringListHasBeenSet = true;
    m_queryStringList.emplace_back(std::forward<QueryStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetQueryStringSet() const { return m_queryStringSet; }
  inline bool QueryStringSetHasBeenSet() const { return m_queryStringSetHasBeenSet; }
  template <typename QueryStringSetT = Aws::Vector<Aws::String>>
  void SetQueryStringSet(QueryStringSetT&& value) {
    m_queryStringSetHasBeenSet = true;
    m_queryStringSet = std::forward<QueryStringSetT>(value);
  }
  template <typename QueryStringSetT = Aws::Vector<Aws::String>>
  AllQueryStringTypesRequest& WithQueryStringSet(QueryStringSetT&& value) {
    SetQueryStringSet(std::forward<QueryStringSetT>(value));
    return *this;
  }
  template <typename QueryStringSetT = Aws::String>
  AllQueryStringTypesRequest& AddQueryStringSet(QueryStringSetT&& value) {
    m_queryStringSetHasBeenSet = true;
    m_queryStringSet.emplace_back(std::forward<QueryStringSetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetQueryByte() const { return m_queryByte; }
  inline bool QueryByteHasBeenSet() const { return m_queryByteHasBeenSet; }
  inline void SetQueryByte(int value) {
    m_queryByteHasBeenSet = true;
    m_queryByte = value;
  }
  inline AllQueryStringTypesRequest& WithQueryByte(int value) {
    SetQueryByte(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetQueryShort() const { return m_queryShort; }
  inline bool QueryShortHasBeenSet() const { return m_queryShortHasBeenSet; }
  inline void SetQueryShort(int value) {
    m_queryShortHasBeenSet = true;
    m_queryShort = value;
  }
  inline AllQueryStringTypesRequest& WithQueryShort(int value) {
    SetQueryShort(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetQueryInteger() const { return m_queryInteger; }
  inline bool QueryIntegerHasBeenSet() const { return m_queryIntegerHasBeenSet; }
  inline void SetQueryInteger(int value) {
    m_queryIntegerHasBeenSet = true;
    m_queryInteger = value;
  }
  inline AllQueryStringTypesRequest& WithQueryInteger(int value) {
    SetQueryInteger(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetQueryIntegerList() const { return m_queryIntegerList; }
  inline bool QueryIntegerListHasBeenSet() const { return m_queryIntegerListHasBeenSet; }
  template <typename QueryIntegerListT = Aws::Vector<int>>
  void SetQueryIntegerList(QueryIntegerListT&& value) {
    m_queryIntegerListHasBeenSet = true;
    m_queryIntegerList = std::forward<QueryIntegerListT>(value);
  }
  template <typename QueryIntegerListT = Aws::Vector<int>>
  AllQueryStringTypesRequest& WithQueryIntegerList(QueryIntegerListT&& value) {
    SetQueryIntegerList(std::forward<QueryIntegerListT>(value));
    return *this;
  }
  inline AllQueryStringTypesRequest& AddQueryIntegerList(int value) {
    m_queryIntegerListHasBeenSet = true;
    m_queryIntegerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetQueryIntegerSet() const { return m_queryIntegerSet; }
  inline bool QueryIntegerSetHasBeenSet() const { return m_queryIntegerSetHasBeenSet; }
  template <typename QueryIntegerSetT = Aws::Vector<int>>
  void SetQueryIntegerSet(QueryIntegerSetT&& value) {
    m_queryIntegerSetHasBeenSet = true;
    m_queryIntegerSet = std::forward<QueryIntegerSetT>(value);
  }
  template <typename QueryIntegerSetT = Aws::Vector<int>>
  AllQueryStringTypesRequest& WithQueryIntegerSet(QueryIntegerSetT&& value) {
    SetQueryIntegerSet(std::forward<QueryIntegerSetT>(value));
    return *this;
  }
  inline AllQueryStringTypesRequest& AddQueryIntegerSet(int value) {
    m_queryIntegerSetHasBeenSet = true;
    m_queryIntegerSet.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetQueryLong() const { return m_queryLong; }
  inline bool QueryLongHasBeenSet() const { return m_queryLongHasBeenSet; }
  inline void SetQueryLong(long long value) {
    m_queryLongHasBeenSet = true;
    m_queryLong = value;
  }
  inline AllQueryStringTypesRequest& WithQueryLong(long long value) {
    SetQueryLong(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetQueryFloat() const { return m_queryFloat; }
  inline bool QueryFloatHasBeenSet() const { return m_queryFloatHasBeenSet; }
  inline void SetQueryFloat(double value) {
    m_queryFloatHasBeenSet = true;
    m_queryFloat = value;
  }
  inline AllQueryStringTypesRequest& WithQueryFloat(double value) {
    SetQueryFloat(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetQueryDouble() const { return m_queryDouble; }
  inline bool QueryDoubleHasBeenSet() const { return m_queryDoubleHasBeenSet; }
  inline void SetQueryDouble(double value) {
    m_queryDoubleHasBeenSet = true;
    m_queryDouble = value;
  }
  inline AllQueryStringTypesRequest& WithQueryDouble(double value) {
    SetQueryDouble(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<double>& GetQueryDoubleList() const { return m_queryDoubleList; }
  inline bool QueryDoubleListHasBeenSet() const { return m_queryDoubleListHasBeenSet; }
  template <typename QueryDoubleListT = Aws::Vector<double>>
  void SetQueryDoubleList(QueryDoubleListT&& value) {
    m_queryDoubleListHasBeenSet = true;
    m_queryDoubleList = std::forward<QueryDoubleListT>(value);
  }
  template <typename QueryDoubleListT = Aws::Vector<double>>
  AllQueryStringTypesRequest& WithQueryDoubleList(QueryDoubleListT&& value) {
    SetQueryDoubleList(std::forward<QueryDoubleListT>(value));
    return *this;
  }
  inline AllQueryStringTypesRequest& AddQueryDoubleList(double value) {
    m_queryDoubleListHasBeenSet = true;
    m_queryDoubleList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetQueryBoolean() const { return m_queryBoolean; }
  inline bool QueryBooleanHasBeenSet() const { return m_queryBooleanHasBeenSet; }
  inline void SetQueryBoolean(bool value) {
    m_queryBooleanHasBeenSet = true;
    m_queryBoolean = value;
  }
  inline AllQueryStringTypesRequest& WithQueryBoolean(bool value) {
    SetQueryBoolean(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetQueryBooleanList() const { return m_queryBooleanList; }
  inline bool QueryBooleanListHasBeenSet() const { return m_queryBooleanListHasBeenSet; }
  template <typename QueryBooleanListT = Aws::Vector<bool>>
  void SetQueryBooleanList(QueryBooleanListT&& value) {
    m_queryBooleanListHasBeenSet = true;
    m_queryBooleanList = std::forward<QueryBooleanListT>(value);
  }
  template <typename QueryBooleanListT = Aws::Vector<bool>>
  AllQueryStringTypesRequest& WithQueryBooleanList(QueryBooleanListT&& value) {
    SetQueryBooleanList(std::forward<QueryBooleanListT>(value));
    return *this;
  }
  inline AllQueryStringTypesRequest& AddQueryBooleanList(bool value) {
    m_queryBooleanListHasBeenSet = true;
    m_queryBooleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetQueryTimestamp() const { return m_queryTimestamp; }
  inline bool QueryTimestampHasBeenSet() const { return m_queryTimestampHasBeenSet; }
  template <typename QueryTimestampT = Aws::Utils::DateTime>
  void SetQueryTimestamp(QueryTimestampT&& value) {
    m_queryTimestampHasBeenSet = true;
    m_queryTimestamp = std::forward<QueryTimestampT>(value);
  }
  template <typename QueryTimestampT = Aws::Utils::DateTime>
  AllQueryStringTypesRequest& WithQueryTimestamp(QueryTimestampT&& value) {
    SetQueryTimestamp(std::forward<QueryTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetQueryTimestampList() const { return m_queryTimestampList; }
  inline bool QueryTimestampListHasBeenSet() const { return m_queryTimestampListHasBeenSet; }
  template <typename QueryTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetQueryTimestampList(QueryTimestampListT&& value) {
    m_queryTimestampListHasBeenSet = true;
    m_queryTimestampList = std::forward<QueryTimestampListT>(value);
  }
  template <typename QueryTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  AllQueryStringTypesRequest& WithQueryTimestampList(QueryTimestampListT&& value) {
    SetQueryTimestampList(std::forward<QueryTimestampListT>(value));
    return *this;
  }
  template <typename QueryTimestampListT = Aws::Utils::DateTime>
  AllQueryStringTypesRequest& AddQueryTimestampList(QueryTimestampListT&& value) {
    m_queryTimestampListHasBeenSet = true;
    m_queryTimestampList.emplace_back(std::forward<QueryTimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetQueryEnum() const { return m_queryEnum; }
  inline bool QueryEnumHasBeenSet() const { return m_queryEnumHasBeenSet; }
  inline void SetQueryEnum(FooEnum value) {
    m_queryEnumHasBeenSet = true;
    m_queryEnum = value;
  }
  inline AllQueryStringTypesRequest& WithQueryEnum(FooEnum value) {
    SetQueryEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetQueryEnumList() const { return m_queryEnumList; }
  inline bool QueryEnumListHasBeenSet() const { return m_queryEnumListHasBeenSet; }
  template <typename QueryEnumListT = Aws::Vector<FooEnum>>
  void SetQueryEnumList(QueryEnumListT&& value) {
    m_queryEnumListHasBeenSet = true;
    m_queryEnumList = std::forward<QueryEnumListT>(value);
  }
  template <typename QueryEnumListT = Aws::Vector<FooEnum>>
  AllQueryStringTypesRequest& WithQueryEnumList(QueryEnumListT&& value) {
    SetQueryEnumList(std::forward<QueryEnumListT>(value));
    return *this;
  }
  inline AllQueryStringTypesRequest& AddQueryEnumList(FooEnum value) {
    m_queryEnumListHasBeenSet = true;
    m_queryEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetQueryIntegerEnum() const { return m_queryIntegerEnum; }
  inline bool QueryIntegerEnumHasBeenSet() const { return m_queryIntegerEnumHasBeenSet; }
  inline void SetQueryIntegerEnum(int value) {
    m_queryIntegerEnumHasBeenSet = true;
    m_queryIntegerEnum = value;
  }
  inline AllQueryStringTypesRequest& WithQueryIntegerEnum(int value) {
    SetQueryIntegerEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetQueryIntegerEnumList() const { return m_queryIntegerEnumList; }
  inline bool QueryIntegerEnumListHasBeenSet() const { return m_queryIntegerEnumListHasBeenSet; }
  template <typename QueryIntegerEnumListT = Aws::Vector<int>>
  void SetQueryIntegerEnumList(QueryIntegerEnumListT&& value) {
    m_queryIntegerEnumListHasBeenSet = true;
    m_queryIntegerEnumList = std::forward<QueryIntegerEnumListT>(value);
  }
  template <typename QueryIntegerEnumListT = Aws::Vector<int>>
  AllQueryStringTypesRequest& WithQueryIntegerEnumList(QueryIntegerEnumListT&& value) {
    SetQueryIntegerEnumList(std::forward<QueryIntegerEnumListT>(value));
    return *this;
  }
  inline AllQueryStringTypesRequest& AddQueryIntegerEnumList(int value) {
    m_queryIntegerEnumListHasBeenSet = true;
    m_queryIntegerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetQueryParamsMapOfStrings() const { return m_queryParamsMapOfStrings; }
  inline bool QueryParamsMapOfStringsHasBeenSet() const { return m_queryParamsMapOfStringsHasBeenSet; }
  template <typename QueryParamsMapOfStringsT = Aws::Map<Aws::String, Aws::String>>
  void SetQueryParamsMapOfStrings(QueryParamsMapOfStringsT&& value) {
    m_queryParamsMapOfStringsHasBeenSet = true;
    m_queryParamsMapOfStrings = std::forward<QueryParamsMapOfStringsT>(value);
  }
  template <typename QueryParamsMapOfStringsT = Aws::Map<Aws::String, Aws::String>>
  AllQueryStringTypesRequest& WithQueryParamsMapOfStrings(QueryParamsMapOfStringsT&& value) {
    SetQueryParamsMapOfStrings(std::forward<QueryParamsMapOfStringsT>(value));
    return *this;
  }
  template <typename QueryParamsMapOfStringsKeyT = Aws::String, typename QueryParamsMapOfStringsValueT = Aws::String>
  AllQueryStringTypesRequest& AddQueryParamsMapOfStrings(QueryParamsMapOfStringsKeyT&& key, QueryParamsMapOfStringsValueT&& value) {
    m_queryParamsMapOfStringsHasBeenSet = true;
    m_queryParamsMapOfStrings.emplace(std::forward<QueryParamsMapOfStringsKeyT>(key), std::forward<QueryParamsMapOfStringsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryString;
  bool m_queryStringHasBeenSet = false;

  Aws::Vector<Aws::String> m_queryStringList;
  bool m_queryStringListHasBeenSet = false;

  Aws::Vector<Aws::String> m_queryStringSet;
  bool m_queryStringSetHasBeenSet = false;

  int m_queryByte{0};
  bool m_queryByteHasBeenSet = false;

  int m_queryShort{0};
  bool m_queryShortHasBeenSet = false;

  int m_queryInteger{0};
  bool m_queryIntegerHasBeenSet = false;

  Aws::Vector<int> m_queryIntegerList;
  bool m_queryIntegerListHasBeenSet = false;

  Aws::Vector<int> m_queryIntegerSet;
  bool m_queryIntegerSetHasBeenSet = false;

  long long m_queryLong{0};
  bool m_queryLongHasBeenSet = false;

  double m_queryFloat{0.0};
  bool m_queryFloatHasBeenSet = false;

  double m_queryDouble{0.0};
  bool m_queryDoubleHasBeenSet = false;

  Aws::Vector<double> m_queryDoubleList;
  bool m_queryDoubleListHasBeenSet = false;

  bool m_queryBoolean{false};
  bool m_queryBooleanHasBeenSet = false;

  Aws::Vector<bool> m_queryBooleanList;
  bool m_queryBooleanListHasBeenSet = false;

  Aws::Utils::DateTime m_queryTimestamp{};
  bool m_queryTimestampHasBeenSet = false;

  Aws::Vector<Aws::Utils::DateTime> m_queryTimestampList;
  bool m_queryTimestampListHasBeenSet = false;

  FooEnum m_queryEnum{FooEnum::NOT_SET};
  bool m_queryEnumHasBeenSet = false;

  Aws::Vector<FooEnum> m_queryEnumList;
  bool m_queryEnumListHasBeenSet = false;

  int m_queryIntegerEnum{0};
  bool m_queryIntegerEnumHasBeenSet = false;

  Aws::Vector<int> m_queryIntegerEnumList;
  bool m_queryIntegerEnumListHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_queryParamsMapOfStrings;
  bool m_queryParamsMapOfStringsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
