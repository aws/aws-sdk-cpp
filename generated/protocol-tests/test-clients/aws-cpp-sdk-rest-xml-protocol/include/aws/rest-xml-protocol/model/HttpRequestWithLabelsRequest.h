/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class HttpRequestWithLabelsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API HttpRequestWithLabelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "HttpRequestWithLabels"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetString() const { return m_string; }
  inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
  template <typename StringT = Aws::String>
  void SetString(StringT&& value) {
    m_stringHasBeenSet = true;
    m_string = std::forward<StringT>(value);
  }
  template <typename StringT = Aws::String>
  HttpRequestWithLabelsRequest& WithString(StringT&& value) {
    SetString(std::forward<StringT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetShort() const { return m_short; }
  inline bool ShortHasBeenSet() const { return m_shortHasBeenSet; }
  inline void SetShort(int value) {
    m_shortHasBeenSet = true;
    m_short = value;
  }
  inline HttpRequestWithLabelsRequest& WithShort(int value) {
    SetShort(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetInteger() const { return m_integer; }
  inline bool IntegerHasBeenSet() const { return m_integerHasBeenSet; }
  inline void SetInteger(int value) {
    m_integerHasBeenSet = true;
    m_integer = value;
  }
  inline HttpRequestWithLabelsRequest& WithInteger(int value) {
    SetInteger(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLong() const { return m_long; }
  inline bool LongHasBeenSet() const { return m_longHasBeenSet; }
  inline void SetLong(long long value) {
    m_longHasBeenSet = true;
    m_long = value;
  }
  inline HttpRequestWithLabelsRequest& WithLong(long long value) {
    SetLong(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloat() const { return m_float; }
  inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
  inline void SetFloat(double value) {
    m_floatHasBeenSet = true;
    m_float = value;
  }
  inline HttpRequestWithLabelsRequest& WithFloat(double value) {
    SetFloat(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDouble() const { return m_double; }
  inline bool DoubleHasBeenSet() const { return m_doubleHasBeenSet; }
  inline void SetDouble(double value) {
    m_doubleHasBeenSet = true;
    m_double = value;
  }
  inline HttpRequestWithLabelsRequest& WithDouble(double value) {
    SetDouble(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Serialized in the path as true or false.</p>
   */
  inline bool GetBoolean() const { return m_boolean; }
  inline bool BooleanHasBeenSet() const { return m_booleanHasBeenSet; }
  inline void SetBoolean(bool value) {
    m_booleanHasBeenSet = true;
    m_boolean = value;
  }
  inline HttpRequestWithLabelsRequest& WithBoolean(bool value) {
    SetBoolean(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Note that this member has no format, so it's serialized as an RFC 3399
   * date-time.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  HttpRequestWithLabelsRequest& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_string;
  bool m_stringHasBeenSet = false;

  int m_short{0};
  bool m_shortHasBeenSet = false;

  int m_integer{0};
  bool m_integerHasBeenSet = false;

  long long m_long{0};
  bool m_longHasBeenSet = false;

  double m_float{0.0};
  bool m_floatHasBeenSet = false;

  double m_double{0.0};
  bool m_doubleHasBeenSet = false;

  bool m_boolean{false};
  bool m_booleanHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
