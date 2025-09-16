/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {
class SimpleScalarPropertiesResult {
 public:
  AWS_JSONPROTOCOL_API SimpleScalarPropertiesResult() = default;
  AWS_JSONPROTOCOL_API SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_JSONPROTOCOL_API SimpleScalarPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  double m_floatValue{0.0};
  bool m_floatValueHasBeenSet = false;

  double m_doubleValue{0.0};
  bool m_doubleValueHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
