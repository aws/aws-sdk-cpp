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
namespace APIPortal {
namespace Model {

/**
 */
class DeleteProductApiPageRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API DeleteProductApiPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteProductApiPage"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

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
  DeleteProductApiPageRequest& WithProductId(ProductIdT&& value) {
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
  DeleteProductApiPageRequest& WithProductApiPageId(ProductApiPageIdT&& value) {
    SetProductApiPageId(std::forward<ProductApiPageIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productApiPageId;
  bool m_productIdHasBeenSet = false;
  bool m_productApiPageIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
