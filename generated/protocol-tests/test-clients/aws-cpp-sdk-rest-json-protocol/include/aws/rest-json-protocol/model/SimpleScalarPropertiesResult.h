/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

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
class SimpleScalarPropertiesResult {
 public:
  AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesResult() = default;
  AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API SimpleScalarPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  SimpleScalarPropertiesResult& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  SimpleScalarPropertiesResult& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetTrueBooleanValue() const { return m_trueBooleanValue; }
  inline void SetTrueBooleanValue(bool value) {
    m_trueBooleanValueHasBeenSet = true;
    m_trueBooleanValue = value;
  }
  inline SimpleScalarPropertiesResult& WithTrueBooleanValue(bool value) {
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
  inline SimpleScalarPropertiesResult& WithFalseBooleanValue(bool value) {
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
  inline SimpleScalarPropertiesResult& WithByteValue(int value) {
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
  inline SimpleScalarPropertiesResult& WithShortValue(int value) {
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
  inline SimpleScalarPropertiesResult& WithIntegerValue(int value) {
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
  inline SimpleScalarPropertiesResult& WithLongValue(long long value) {
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
  inline SimpleScalarPropertiesResult& WithFloatValue(double value) {
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
  inline SimpleScalarPropertiesResult& WithDoubleValue(double value) {
    SetDoubleValue(value);
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
  SimpleScalarPropertiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::String m_stringValue;
  bool m_stringValueHasBeenSet = false;

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

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
