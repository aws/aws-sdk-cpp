/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace APIPortal {
namespace Model {

/**
 */
class GetProductApiPageRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API GetProductApiPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetProductApiPage"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  AWS_APIPORTAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the product.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  GetProductApiPageRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the API page.</p>
   */
  inline const Aws::String& GetProductApiPageId() const { return m_productApiPageId; }
  inline bool ProductApiPageIdHasBeenSet() const { return m_productApiPageIdHasBeenSet; }
  template <typename ProductApiPageIdT = Aws::String>
  void SetProductApiPageId(ProductApiPageIdT&& value) {
    m_productApiPageIdHasBeenSet = true;
    m_productApiPageId = std::forward<ProductApiPageIdT>(value);
  }
  template <typename ProductApiPageIdT = Aws::String>
  GetProductApiPageRequest& WithProductApiPageId(ProductApiPageIdT&& value) {
    SetProductApiPageId(std::forward<ProductApiPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the product. Supply it to read a product shared
   * with you by another account. Omit it for products in your own account.</p>
   */
  inline const Aws::String& GetResourceOwnerAccountId() const { return m_resourceOwnerAccountId; }
  inline bool ResourceOwnerAccountIdHasBeenSet() const { return m_resourceOwnerAccountIdHasBeenSet; }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  void SetResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    m_resourceOwnerAccountIdHasBeenSet = true;
    m_resourceOwnerAccountId = std::forward<ResourceOwnerAccountIdT>(value);
  }
  template <typename ResourceOwnerAccountIdT = Aws::String>
  GetProductApiPageRequest& WithResourceOwnerAccountId(ResourceOwnerAccountIdT&& value) {
    SetResourceOwnerAccountId(std::forward<ResourceOwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to <code>true</code> to also return the page body in
   * <code>rawDisplayContent</code>.</p>
   */
  inline bool GetIncludeRawDisplayContent() const { return m_includeRawDisplayContent; }
  inline bool IncludeRawDisplayContentHasBeenSet() const { return m_includeRawDisplayContentHasBeenSet; }
  inline void SetIncludeRawDisplayContent(bool value) {
    m_includeRawDisplayContentHasBeenSet = true;
    m_includeRawDisplayContent = value;
  }
  inline GetProductApiPageRequest& WithIncludeRawDisplayContent(bool value) {
    SetIncludeRawDisplayContent(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productApiPageId;

  Aws::String m_resourceOwnerAccountId;

  bool m_includeRawDisplayContent{false};
  bool m_productIdHasBeenSet = false;
  bool m_productApiPageIdHasBeenSet = false;
  bool m_resourceOwnerAccountIdHasBeenSet = false;
  bool m_includeRawDisplayContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
