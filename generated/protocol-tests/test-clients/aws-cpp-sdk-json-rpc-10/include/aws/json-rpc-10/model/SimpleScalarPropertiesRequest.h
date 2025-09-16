/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-rpc-10/JSONRPC10Request.h>
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>

namespace Aws {
namespace JSONRPC10 {
namespace Model {

/**
 */
class SimpleScalarPropertiesRequest : public JSONRPC10Request {
 public:
  AWS_JSONRPC10_API SimpleScalarPropertiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SimpleScalarProperties"; }

  AWS_JSONRPC10_API Aws::String SerializePayload() const override;

  AWS_JSONRPC10_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithFloatValue(double value) {
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
  inline SimpleScalarPropertiesRequest& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}
 private:
  double m_floatValue{0.0};
  bool m_floatValueHasBeenSet = false;

  double m_doubleValue{0.0};
  bool m_doubleValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws
