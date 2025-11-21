/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>The request body for the put operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/PutPortalProductSharingPolicyRequest">AWS
 * API Reference</a></p>
 */
class PutPortalProductSharingPolicyRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API PutPortalProductSharingPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutPortalProductSharingPolicy"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The product sharing policy.</p>
   */
  inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
  inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
  template <typename PolicyDocumentT = Aws::String>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::String>
  PutPortalProductSharingPolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The portal product identifier.</p>
   */
  inline const Aws::String& GetPortalProductId() const { return m_portalProductId; }
  inline bool PortalProductIdHasBeenSet() const { return m_portalProductIdHasBeenSet; }
  template <typename PortalProductIdT = Aws::String>
  void SetPortalProductId(PortalProductIdT&& value) {
    m_portalProductIdHasBeenSet = true;
    m_portalProductId = std::forward<PortalProductIdT>(value);
  }
  template <typename PortalProductIdT = Aws::String>
  PutPortalProductSharingPolicyRequest& WithPortalProductId(PortalProductIdT&& value) {
    SetPortalProductId(std::forward<PortalProductIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyDocument;
  bool m_policyDocumentHasBeenSet = false;

  Aws::String m_portalProductId;
  bool m_portalProductIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
