/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace QueryProtocol {
namespace Model {
class SimpleScalarXmlPropertiesResult {
 public:
  AWS_QUERYPROTOCOL_API SimpleScalarXmlPropertiesResult() = default;
  AWS_QUERYPROTOCOL_API SimpleScalarXmlPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_QUERYPROTOCOL_API SimpleScalarXmlPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  SimpleScalarXmlPropertiesResult& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetEmptyStringValue() const { return m_emptyStringValue; }
  template <typename EmptyStringValueT = Aws::String>
  void SetEmptyStringValue(EmptyStringValueT&& value) {
    m_emptyStringValueHasBeenSet = true;
    m_emptyStringValue = std::forward<EmptyStringValueT>(value);
  }
  template <typename EmptyStringValueT = Aws::String>
  SimpleScalarXmlPropertiesResult& WithEmptyStringValue(EmptyStringValueT&& value) {
    SetEmptyStringValue(std::forward<EmptyStringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetTrueBooleanValue() const { return m_trueBooleanValue; }
  inline void SetTrueBooleanValue(bool value) {
    m_trueBooleanValueHasBeenSet = true;
    m_trueBooleanValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithTrueBooleanValue(bool value) {
    SetTrueBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetFalseBooleanValue() const { return m_falseBooleanValue; }
  inline void SetFalseBooleanValue(bool value) {
    m_falseBooleanValueHasBeenSet = true;
    m_falseBooleanValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithFalseBooleanValue(bool value) {
    SetFalseBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetByteValue() const { return m_byteValue; }
  inline void SetByteValue(int value) {
    m_byteValueHasBeenSet = true;
    m_byteValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithByteValue(int value) {
    SetByteValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetShortValue() const { return m_shortValue; }
  inline void SetShortValue(int value) {
    m_shortValueHasBeenSet = true;
    m_shortValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithShortValue(int value) {
    SetShortValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerValue() const { return m_integerValue; }
  inline void SetIntegerValue(int value) {
    m_integerValueHasBeenSet = true;
    m_integerValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithIntegerValue(int value) {
    SetIntegerValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongValue() const { return m_longValue; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithFloatValue(double value) {
    SetFloatValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDoubleValue() const { return m_doubleValue; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline SimpleScalarXmlPropertiesResult& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  SimpleScalarXmlPropertiesResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;
  bool m_stringValueHasBeenSet = false;

  Aws::String m_emptyStringValue;
  bool m_emptyStringValueHasBeenSet = false;

  bool m_trueBooleanValue{false};
  bool m_trueBooleanValueHasBeenSet = false;

  bool m_falseBooleanValue{false};
  bool m_falseBooleanValueHasBeenSet = false;

  int m_byteValue{0};
  bool m_byteValueHasBeenSet = false;

  int m_shortValue{0};
  bool m_shortValueHasBeenSet = false;

  int m_integerValue{0};
  bool m_integerValueHasBeenSet = false;

  long long m_longValue{0};
  bool m_longValueHasBeenSet = false;

  double m_floatValue{0.0};
  bool m_floatValueHasBeenSet = false;

  double m_doubleValue{0.0};
  bool m_doubleValueHasBeenSet = false;

  ResponseMetadata m_responseMetadata;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryProtocol
}  // namespace Aws
