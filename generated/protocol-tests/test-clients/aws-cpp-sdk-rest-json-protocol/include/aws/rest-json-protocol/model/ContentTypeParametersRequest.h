/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class ContentTypeParametersRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API ContentTypeParametersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ContentTypeParameters"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  ///@{

  inline int GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(int value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline ContentTypeParametersRequest& WithValue(int value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  int m_value{0};
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
