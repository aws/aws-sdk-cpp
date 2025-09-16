/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/FooEnum.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class InputAndOutputWithHeadersRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API InputAndOutputWithHeadersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InputAndOutputWithHeaders"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetHeaderString() const { return m_headerString; }
  inline bool HeaderStringHasBeenSet() const { return m_headerStringHasBeenSet; }
  template <typename HeaderStringT = Aws::String>
  void SetHeaderString(HeaderStringT&& value) {
    m_headerStringHasBeenSet = true;
    m_headerString = std::forward<HeaderStringT>(value);
  }
  template <typename HeaderStringT = Aws::String>
  InputAndOutputWithHeadersRequest& WithHeaderString(HeaderStringT&& value) {
    SetHeaderString(std::forward<HeaderStringT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderByte() const { return m_headerByte; }
  inline bool HeaderByteHasBeenSet() const { return m_headerByteHasBeenSet; }
  inline void SetHeaderByte(int value) {
    m_headerByteHasBeenSet = true;
    m_headerByte = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderByte(int value) {
    SetHeaderByte(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderShort() const { return m_headerShort; }
  inline bool HeaderShortHasBeenSet() const { return m_headerShortHasBeenSet; }
  inline void SetHeaderShort(int value) {
    m_headerShortHasBeenSet = true;
    m_headerShort = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderShort(int value) {
    SetHeaderShort(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderInteger() const { return m_headerInteger; }
  inline bool HeaderIntegerHasBeenSet() const { return m_headerIntegerHasBeenSet; }
  inline void SetHeaderInteger(int value) {
    m_headerIntegerHasBeenSet = true;
    m_headerInteger = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderInteger(int value) {
    SetHeaderInteger(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetHeaderLong() const { return m_headerLong; }
  inline bool HeaderLongHasBeenSet() const { return m_headerLongHasBeenSet; }
  inline void SetHeaderLong(long long value) {
    m_headerLongHasBeenSet = true;
    m_headerLong = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderLong(long long value) {
    SetHeaderLong(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetHeaderFloat() const { return m_headerFloat; }
  inline bool HeaderFloatHasBeenSet() const { return m_headerFloatHasBeenSet; }
  inline void SetHeaderFloat(double value) {
    m_headerFloatHasBeenSet = true;
    m_headerFloat = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderFloat(double value) {
    SetHeaderFloat(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetHeaderDouble() const { return m_headerDouble; }
  inline bool HeaderDoubleHasBeenSet() const { return m_headerDoubleHasBeenSet; }
  inline void SetHeaderDouble(double value) {
    m_headerDoubleHasBeenSet = true;
    m_headerDouble = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderDouble(double value) {
    SetHeaderDouble(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetHeaderTrueBool() const { return m_headerTrueBool; }
  inline bool HeaderTrueBoolHasBeenSet() const { return m_headerTrueBoolHasBeenSet; }
  inline void SetHeaderTrueBool(bool value) {
    m_headerTrueBoolHasBeenSet = true;
    m_headerTrueBool = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderTrueBool(bool value) {
    SetHeaderTrueBool(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetHeaderFalseBool() const { return m_headerFalseBool; }
  inline bool HeaderFalseBoolHasBeenSet() const { return m_headerFalseBoolHasBeenSet; }
  inline void SetHeaderFalseBool(bool value) {
    m_headerFalseBoolHasBeenSet = true;
    m_headerFalseBool = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderFalseBool(bool value) {
    SetHeaderFalseBool(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetHeaderStringList() const { return m_headerStringList; }
  inline bool HeaderStringListHasBeenSet() const { return m_headerStringListHasBeenSet; }
  template <typename HeaderStringListT = Aws::Vector<Aws::String>>
  void SetHeaderStringList(HeaderStringListT&& value) {
    m_headerStringListHasBeenSet = true;
    m_headerStringList = std::forward<HeaderStringListT>(value);
  }
  template <typename HeaderStringListT = Aws::Vector<Aws::String>>
  InputAndOutputWithHeadersRequest& WithHeaderStringList(HeaderStringListT&& value) {
    SetHeaderStringList(std::forward<HeaderStringListT>(value));
    return *this;
  }
  template <typename HeaderStringListT = Aws::String>
  InputAndOutputWithHeadersRequest& AddHeaderStringList(HeaderStringListT&& value) {
    m_headerStringListHasBeenSet = true;
    m_headerStringList.emplace_back(std::forward<HeaderStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetHeaderStringSet() const { return m_headerStringSet; }
  inline bool HeaderStringSetHasBeenSet() const { return m_headerStringSetHasBeenSet; }
  template <typename HeaderStringSetT = Aws::Vector<Aws::String>>
  void SetHeaderStringSet(HeaderStringSetT&& value) {
    m_headerStringSetHasBeenSet = true;
    m_headerStringSet = std::forward<HeaderStringSetT>(value);
  }
  template <typename HeaderStringSetT = Aws::Vector<Aws::String>>
  InputAndOutputWithHeadersRequest& WithHeaderStringSet(HeaderStringSetT&& value) {
    SetHeaderStringSet(std::forward<HeaderStringSetT>(value));
    return *this;
  }
  template <typename HeaderStringSetT = Aws::String>
  InputAndOutputWithHeadersRequest& AddHeaderStringSet(HeaderStringSetT&& value) {
    m_headerStringSetHasBeenSet = true;
    m_headerStringSet.emplace_back(std::forward<HeaderStringSetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetHeaderIntegerList() const { return m_headerIntegerList; }
  inline bool HeaderIntegerListHasBeenSet() const { return m_headerIntegerListHasBeenSet; }
  template <typename HeaderIntegerListT = Aws::Vector<int>>
  void SetHeaderIntegerList(HeaderIntegerListT&& value) {
    m_headerIntegerListHasBeenSet = true;
    m_headerIntegerList = std::forward<HeaderIntegerListT>(value);
  }
  template <typename HeaderIntegerListT = Aws::Vector<int>>
  InputAndOutputWithHeadersRequest& WithHeaderIntegerList(HeaderIntegerListT&& value) {
    SetHeaderIntegerList(std::forward<HeaderIntegerListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersRequest& AddHeaderIntegerList(int value) {
    m_headerIntegerListHasBeenSet = true;
    m_headerIntegerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetHeaderBooleanList() const { return m_headerBooleanList; }
  inline bool HeaderBooleanListHasBeenSet() const { return m_headerBooleanListHasBeenSet; }
  template <typename HeaderBooleanListT = Aws::Vector<bool>>
  void SetHeaderBooleanList(HeaderBooleanListT&& value) {
    m_headerBooleanListHasBeenSet = true;
    m_headerBooleanList = std::forward<HeaderBooleanListT>(value);
  }
  template <typename HeaderBooleanListT = Aws::Vector<bool>>
  InputAndOutputWithHeadersRequest& WithHeaderBooleanList(HeaderBooleanListT&& value) {
    SetHeaderBooleanList(std::forward<HeaderBooleanListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersRequest& AddHeaderBooleanList(bool value) {
    m_headerBooleanListHasBeenSet = true;
    m_headerBooleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetHeaderTimestampList() const { return m_headerTimestampList; }
  inline bool HeaderTimestampListHasBeenSet() const { return m_headerTimestampListHasBeenSet; }
  template <typename HeaderTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetHeaderTimestampList(HeaderTimestampListT&& value) {
    m_headerTimestampListHasBeenSet = true;
    m_headerTimestampList = std::forward<HeaderTimestampListT>(value);
  }
  template <typename HeaderTimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  InputAndOutputWithHeadersRequest& WithHeaderTimestampList(HeaderTimestampListT&& value) {
    SetHeaderTimestampList(std::forward<HeaderTimestampListT>(value));
    return *this;
  }
  template <typename HeaderTimestampListT = Aws::Utils::DateTime>
  InputAndOutputWithHeadersRequest& AddHeaderTimestampList(HeaderTimestampListT&& value) {
    m_headerTimestampListHasBeenSet = true;
    m_headerTimestampList.emplace_back(std::forward<HeaderTimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetHeaderEnum() const { return m_headerEnum; }
  inline bool HeaderEnumHasBeenSet() const { return m_headerEnumHasBeenSet; }
  inline void SetHeaderEnum(FooEnum value) {
    m_headerEnumHasBeenSet = true;
    m_headerEnum = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderEnum(FooEnum value) {
    SetHeaderEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetHeaderEnumList() const { return m_headerEnumList; }
  inline bool HeaderEnumListHasBeenSet() const { return m_headerEnumListHasBeenSet; }
  template <typename HeaderEnumListT = Aws::Vector<FooEnum>>
  void SetHeaderEnumList(HeaderEnumListT&& value) {
    m_headerEnumListHasBeenSet = true;
    m_headerEnumList = std::forward<HeaderEnumListT>(value);
  }
  template <typename HeaderEnumListT = Aws::Vector<FooEnum>>
  InputAndOutputWithHeadersRequest& WithHeaderEnumList(HeaderEnumListT&& value) {
    SetHeaderEnumList(std::forward<HeaderEnumListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersRequest& AddHeaderEnumList(FooEnum value) {
    m_headerEnumListHasBeenSet = true;
    m_headerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetHeaderIntegerEnum() const { return m_headerIntegerEnum; }
  inline bool HeaderIntegerEnumHasBeenSet() const { return m_headerIntegerEnumHasBeenSet; }
  inline void SetHeaderIntegerEnum(int value) {
    m_headerIntegerEnumHasBeenSet = true;
    m_headerIntegerEnum = value;
  }
  inline InputAndOutputWithHeadersRequest& WithHeaderIntegerEnum(int value) {
    SetHeaderIntegerEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int>& GetHeaderIntegerEnumList() const { return m_headerIntegerEnumList; }
  inline bool HeaderIntegerEnumListHasBeenSet() const { return m_headerIntegerEnumListHasBeenSet; }
  template <typename HeaderIntegerEnumListT = Aws::Vector<int>>
  void SetHeaderIntegerEnumList(HeaderIntegerEnumListT&& value) {
    m_headerIntegerEnumListHasBeenSet = true;
    m_headerIntegerEnumList = std::forward<HeaderIntegerEnumListT>(value);
  }
  template <typename HeaderIntegerEnumListT = Aws::Vector<int>>
  InputAndOutputWithHeadersRequest& WithHeaderIntegerEnumList(HeaderIntegerEnumListT&& value) {
    SetHeaderIntegerEnumList(std::forward<HeaderIntegerEnumListT>(value));
    return *this;
  }
  inline InputAndOutputWithHeadersRequest& AddHeaderIntegerEnumList(int value) {
    m_headerIntegerEnumListHasBeenSet = true;
    m_headerIntegerEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InputAndOutputWithHeadersRequest& WithRequestId(RequestIdT&& value) {
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
