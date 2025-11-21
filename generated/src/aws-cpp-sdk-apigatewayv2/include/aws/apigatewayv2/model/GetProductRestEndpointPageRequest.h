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
namespace Http {
class URI;
}  // namespace Http
namespace ApiGatewayV2 {
namespace Model {

/**
 */
class GetProductRestEndpointPageRequest : public ApiGatewayV2Request {
 public:
  AWS_APIGATEWAYV2_API GetProductRestEndpointPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProductRestEndpointPage"; }

  AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

  AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The query parameter to include raw display content.</p>
   */
  inline const Aws::String& GetIncludeRawDisplayContent() const { return m_includeRawDisplayContent; }
  inline bool IncludeRawDisplayContentHasBeenSet() const { return m_includeRawDisplayContentHasBeenSet; }
  template <typename IncludeRawDisplayContentT = Aws::String>
  void SetIncludeRawDisplayContent(IncludeRawDisplayContentT&& value) {
    m_includeRawDisplayContentHasBeenSet = true;
    m_includeRawDisplayContent = std::forward<IncludeRawDisplayContentT>(value);
  }
  template <typename IncludeRawDisplayContentT = Aws::String>
  GetProductRestEndpointPageRequest& WithIncludeRawDisplayContent(IncludeRawDisplayContentT&& value) {
    SetIncludeRawDisplayContent(std::forward<IncludeRawDisplayContentT>(value));
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
  GetProductRestEndpointPageRequest& WithPortalProductId(PortalProductIdT&& value) {
    SetPortalProductId(std::forward<PortalProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product REST endpoint identifier.</p>
   */
  inline const Aws::String& GetProductRestEndpointPageId() const { return m_productRestEndpointPageId; }
  inline bool ProductRestEndpointPageIdHasBeenSet() const { return m_productRestEndpointPageIdHasBeenSet; }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  void SetProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    m_productRestEndpointPageIdHasBeenSet = true;
    m_productRestEndpointPageId = std::forward<ProductRestEndpointPageIdT>(value);
  }
  template <typename ProductRestEndpointPageIdT = Aws::String>
  GetProductRestEndpointPageRequest& WithProductRestEndpointPageId(ProductRestEndpointPageIdT&& value) {
    SetProductRestEndpointPageId(std::forward<ProductRestEndpointPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the resource owner of the portal product.</p>
   */
  inline const Aws::String& GetResourceOwnerAccountId() const { return m_resourceOwnerAccountId; }
  inline bool ResourceOwnerAccountIdHasBeenSet() const { return m_resourceOwnerAccountIdHasBeenSet; }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  void SetResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    m_resourceOwnerAccountIdHasBeenSet = true;
    m_resourceOwnerAccountId = std::forward<ResourceOwnerAccountIdT>(value);
  }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  GetProductRestEndpointPageRequest& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    SetResourceOwnerAccountId(std::forward<ResourceOwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_includeRawDisplayContent;
  bool m_includeRawDisplayContentHasBeenSet = false;

  Aws::String m_portalProductId;
  bool m_portalProductIdHasBeenSet = false;

  Aws::String m_productRestEndpointPageId;
  bool m_productRestEndpointPageIdHasBeenSet = false;

  Aws::String m_resourceOwnerAccountId;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
