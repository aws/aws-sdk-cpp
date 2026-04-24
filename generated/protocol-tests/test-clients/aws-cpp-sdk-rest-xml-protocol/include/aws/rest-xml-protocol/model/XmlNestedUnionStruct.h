/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {

class XmlNestedUnionStruct {
 public:
  AWS_RESTXMLPROTOCOL_API XmlNestedUnionStruct() = default;
  AWS_RESTXMLPROTOCOL_API XmlNestedUnionStruct(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API XmlNestedUnionStruct& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  XmlNestedUnionStruct& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetBooleanValue() const { return m_booleanValue; }
  inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
  inline void SetBooleanValue(bool value) {
    m_booleanValueHasBeenSet = true;
    m_booleanValue = value;
  }
  inline XmlNestedUnionStruct& WithBooleanValue(bool value) {
    SetBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetByteValue() const { return m_byteValue; }
  inline bool ByteValueHasBeenSet() const { return m_byteValueHasBeenSet; }
  inline void SetByteValue(int value) {
    m_byteValueHasBeenSet = true;
    m_byteValue = value;
  }
  inline XmlNestedUnionStruct& WithByteValue(int value) {
    SetByteValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetShortValue() const { return m_shortValue; }
  inline bool ShortValueHasBeenSet() const { return m_shortValueHasBeenSet; }
  inline void SetShortValue(int value) {
    m_shortValueHasBeenSet = true;
    m_shortValue = value;
  }
  inline XmlNestedUnionStruct& WithShortValue(int value) {
    SetShortValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerValue() const { return m_integerValue; }
  inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
  inline void SetIntegerValue(int value) {
    m_integerValueHasBeenSet = true;
    m_integerValue = value;
  }
  inline XmlNestedUnionStruct& WithIntegerValue(int value) {
    SetIntegerValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongValue() const { return m_longValue; }
  inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline XmlNestedUnionStruct& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline XmlNestedUnionStruct& WithFloatValue(double value) {
    SetFloatValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDoubleValue() const { return m_doubleValue; }
  inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline XmlNestedUnionStruct& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;
  bool m_stringValueHasBeenSet = false;

  bool m_booleanValue{false};
  bool m_booleanValueHasBeenSet = false;

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
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
