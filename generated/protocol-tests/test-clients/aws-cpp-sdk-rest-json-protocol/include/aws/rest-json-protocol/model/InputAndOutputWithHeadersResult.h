/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class InputAndOutputWithHeadersResult {
 public:
  AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersResult() = default;
  AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetHeaderString() const { return m_headerString; }
  template <typename HeaderStringT = Aws::String>
  void SetHeaderString(HeaderStringT&& value) {
    m_headerStringHasBeenSet = true;
    m_headerString = std::forward<HeaderStringT>(value);
  }
  template <typename HeaderStringT = Aws::String>
  InputAndOutputWithHeadersResult& WithHeaderString(HeaderStringT&& value) {
    SetHeaderString(std::forward<HeaderStringT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderByte() const { return m_headerByte; }
  inline void SetHeaderByte(int value) {
    m_headerByteHasBeenSet = true;
    m_headerByte = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderByte(int value) {
    SetHeaderByte(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderShort() const { return m_headerShort; }
  inline void SetHeaderShort(int value) {
    m_headerShortHasBeenSet = true;
    m_headerShort = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderShort(int value) {
    SetHeaderShort(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderInteger() const { return m_headerInteger; }
  inline void SetHeaderInteger(int value) {
    m_headerIntegerHasBeenSet = true;
    m_headerInteger = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderInteger(int value) {
    SetHeaderInteger(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetHeaderLong() const { return m_headerLong; }
  inline void SetHeaderLong(long long value) {
    m_headerLongHasBeenSet = true;
    m_headerLong = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderLong(long long value) {
    SetHeaderLong(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetHeaderFloat() const { return m_headerFloat; }
  inline void SetHeaderFloat(double value) {
    m_headerFloatHasBeenSet = true;
    m_headerFloat = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderFloat(double value) {
    SetHeaderFloat(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetHeaderDouble() const { return m_headerDouble; }
  inline void SetHeaderDouble(double value) {
    m_headerDoubleHasBeenSet = true;
    m_headerDouble = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderDouble(double value) {
    SetHeaderDouble(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetHeaderTrueBool() const { return m_headerTrueBool; }
  inline void SetHeaderTrueBool(bool value) {
    m_headerTrueBoolHasBeenSet = true;
    m_headerTrueBool = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderTrueBool(bool value) {
    SetHeaderTrueBool(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetHeaderFalseBool() const { return m_headerFalseBool; }
  inline void SetHeaderFalseBool(bool value) {
    m_headerFalseBoolHasBeenSet = true;
    m_headerFalseBool = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderFalseBool(bool value) {
    SetHeaderFalseBool(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetHeaderStringList() const { return m_headerStringList; }
  template <typename HeaderStringListT = Aws::Vector<Aws::String>>
  void SetHeaderStringList(HeaderStringListT&& value) {
    m_headerStringListHasBeenSet = true;
    m_headerStringList = std::forward<HeaderStringListT>(value);
  }
  template <typename HeaderStringListT = Aws::Vector<Aws::String>>
  InputAndOutputWithHeadersResult& WithHeaderStringList(HeaderStringListT&& value) {
    SetHeaderStringList(std::forward<HeaderStringListT>(value));
    return *this;
  }
  template <typename HeaderStringListT = Aws::String>
  InputAndOutputWithHeadersResult& AddHeaderStringList(HeaderStringListT&& value) {
    m_headerStringListHasBeenSet = true;
    m_headerStringList.emplace_back(std::forward<HeaderStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetHeaderStringSet() const { return m_headerStringSet; }
  template <typename HeaderStringSetT = Aws::Vector<Aws::String>>
  void SetHeaderStringSet(HeaderStringSetT&& value) {
    m_headerStringSetHasBeenSet = true;
    m_headerStringSet = std::forward<HeaderStringSetT>(value);
  }
  template <typename HeaderStringSetT = Aws::Vector<Aws::String>>
  InputAndOutputWithHeadersResult& WithHeaderStringSet(HeaderStringSetT&& value) {
    SetHeaderStringSet(std::forward<HeaderStringSetT>(value));
    return *this;
  }
  template <typename HeaderStringSetT = Aws::String>
  InputAndOutputWithHeadersResult& AddHeaderStringSet(HeaderStringSetT&& value) {
    m_headerStringSetHasBeenSet = true;
    m_headerStringSet.emplace_back(std::forward<HeaderStringSetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetHeaderIntegerList() const { return m_headerIntegerList; }
  template <typename HeaderIntegerListT = Aws::Vector<int>>
  void SetHeaderIntegerList(HeaderIntegerListT&& value) {
    m_headerIntegerListHasBeenSet = true;
    m_headerIntegerList = std::forward<HeaderIntegerListT>(value);
  }
  template <typename HeaderIntegerListT = Aws::Vector<int>>
  InputAndOutputWithHeadersResult& WithHeaderIntegerList(HeaderIntegerListT&& value) {
    SetHeaderIntegerList(std::forward<HeaderIntegerListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersResult& AddHeaderIntegerList(int value) {
    m_headerIntegerListHasBeenSet = true;
    m_headerIntegerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetHeaderBooleanList() const { return m_headerBooleanList; }
  template <typename HeaderBooleanListT = Aws::Vector<bool>>
  void SetHeaderBooleanList(HeaderBooleanListT&& value) {
    m_headerBooleanListHasBeenSet = true;
    m_headerBooleanList = std::forward<HeaderBooleanListT>(value);
  }
  template <typename HeaderBooleanListT = Aws::Vector<bool>>
  InputAndOutputWithHeadersResult& WithHeaderBooleanList(HeaderBooleanListT&& value) {
    SetHeaderBooleanList(std::forward<HeaderBooleanListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersResult& AddHeaderBooleanList(bool value) {
    m_headerBooleanListHasBeenSet = true;
    m_headerBooleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetHeaderTimestampList() const { return m_headerTimestampList; }
  template <typename HeaderTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetHeaderTimestampList(HeaderTimestampListT&& value) {
    m_headerTimestampListHasBeenSet = true;
    m_headerTimestampList = std::forward<HeaderTimestampListT>(value);
  }
  template <typename HeaderTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  InputAndOutputWithHeadersResult& WithHeaderTimestampList(HeaderTimestampListT&& value) {
    SetHeaderTimestampList(std::forward<HeaderTimestampListT>(value));
    return *this;
  }
  template <typename HeaderTimestampListT = Aws::Utils::DateTime>
  InputAndOutputWithHeadersResult& AddHeaderTimestampList(HeaderTimestampListT&& value) {
    m_headerTimestampListHasBeenSet = true;
    m_headerTimestampList.emplace_back(std::forward<HeaderTimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetHeaderEnum() const { return m_headerEnum; }
  inline void SetHeaderEnum(FooEnum value) {
    m_headerEnumHasBeenSet = true;
    m_headerEnum = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderEnum(FooEnum value) {
    SetHeaderEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetHeaderEnumList() const { return m_headerEnumList; }
  template <typename HeaderEnumListT = Aws::Vector<FooEnum>>
  void SetHeaderEnumList(HeaderEnumListT&& value) {
    m_headerEnumListHasBeenSet = true;
    m_headerEnumList = std::forward<HeaderEnumListT>(value);
  }
  template <typename HeaderEnumListT = Aws::Vector<FooEnum>>
  InputAndOutputWithHeadersResult& WithHeaderEnumList(HeaderEnumListT&& value) {
    SetHeaderEnumList(std::forward<HeaderEnumListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersResult& AddHeaderEnumList(FooEnum value) {
    m_headerEnumListHasBeenSet = true;
    m_headerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderIntegerEnum() const { return m_headerIntegerEnum; }
  inline void SetHeaderIntegerEnum(int value) {
    m_headerIntegerEnumHasBeenSet = true;
    m_headerIntegerEnum = value;
  }
  inline InputAndOutputWithHeadersResult& WithHeaderIntegerEnum(int value) {
    SetHeaderIntegerEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetHeaderIntegerEnumList() const { return m_headerIntegerEnumList; }
  template <typename HeaderIntegerEnumListT = Aws::Vector<int>>
  void SetHeaderIntegerEnumList(HeaderIntegerEnumListT&& value) {
    m_headerIntegerEnumListHasBeenSet = true;
    m_headerIntegerEnumList = std::forward<HeaderIntegerEnumListT>(value);
  }
  template <typename HeaderIntegerEnumListT = Aws::Vector<int>>
  InputAndOutputWithHeadersResult& WithHeaderIntegerEnumList(HeaderIntegerEnumListT&& value) {
    SetHeaderIntegerEnumList(std::forward<HeaderIntegerEnumListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersResult& AddHeaderIntegerEnumList(int value) {
    m_headerIntegerEnumListHasBeenSet = true;
    m_headerIntegerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InputAndOutputWithHeadersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_headerString;
  bool m_headerStringHasBeenSet = false;

  int m_headerByte{0};
  bool m_headerByteHasBeenSet = false;

  int m_headerShort{0};
  bool m_headerShortHasBeenSet = false;

  int m_headerInteger{0};
  bool m_headerIntegerHasBeenSet = false;

  long long m_headerLong{0};
  bool m_headerLongHasBeenSet = false;

  double m_headerFloat{0.0};
  bool m_headerFloatHasBeenSet = false;

  double m_headerDouble{0.0};
  bool m_headerDoubleHasBeenSet = false;

  bool m_headerTrueBool{false};
  bool m_headerTrueBoolHasBeenSet = false;

  bool m_headerFalseBool{false};
  bool m_headerFalseBoolHasBeenSet = false;

  Aws::Vector<Aws::String> m_headerStringList;
  bool m_headerStringListHasBeenSet = false;

  Aws::Vector<Aws::String> m_headerStringSet;
  bool m_headerStringSetHasBeenSet = false;

  Aws::Vector<int> m_headerIntegerList;
  bool m_headerIntegerListHasBeenSet = false;

  Aws::Vector<bool> m_headerBooleanList;
  bool m_headerBooleanListHasBeenSet = false;

  Aws::Vector<Aws::Utils::DateTime> m_headerTimestampList;
  bool m_headerTimestampListHasBeenSet = false;

  FooEnum m_headerEnum{FooEnum::NOT_SET};
  bool m_headerEnumHasBeenSet = false;

  Aws::Vector<FooEnum> m_headerEnumList;
  bool m_headerEnumListHasBeenSet = false;

  int m_headerIntegerEnum{0};
  bool m_headerIntegerEnumHasBeenSet = false;

  Aws::Vector<int> m_headerIntegerEnumList;
  bool m_headerIntegerEnumListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
