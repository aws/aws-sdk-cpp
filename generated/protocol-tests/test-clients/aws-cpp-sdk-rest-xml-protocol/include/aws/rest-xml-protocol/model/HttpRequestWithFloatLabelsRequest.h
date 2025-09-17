/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

namespace Aws {
namespace RestXmlProtocol {
namespace Model {

/**
 */
class HttpRequestWithFloatLabelsRequest : public RestXmlProtocolRequest {
 public:
  AWS_RESTXMLPROTOCOL_API HttpRequestWithFloatLabelsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "HttpRequestWithFloatLabels"; }

  AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline double GetFloat() const { return m_float; }
  inline bool FloatHasBeenSet() const { return m_floatHasBeenSet; }
  inline void SetFloat(double value) {
    m_floatHasBeenSet = true;
    m_float = value;
  }
  inline HttpRequestWithFloatLabelsRequest& WithFloat(double value) {
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
  inline HttpRequestWithFloatLabelsRequest& WithDouble(double value) {
    SetDouble(value);
    return *this;
  }
  ///@}
 private:
  double m_float{0.0};
  bool m_floatHasBeenSet = false;

  double m_double{0.0};
  bool m_doubleHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
