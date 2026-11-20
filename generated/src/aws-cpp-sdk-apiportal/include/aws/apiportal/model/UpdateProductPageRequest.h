/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DisplayContent.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class UpdateProductPageRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API UpdateProductPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProductPage"; }

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
  UpdateProductPageRequest& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the product page.</p>
   */
  inline const Aws::String& GetProductPageId() const { return m_productPageId; }
  inline bool ProductPageIdHasBeenSet() const { return m_productPageIdHasBeenSet; }
  template <typename ProductPageIdT = Aws::String>
  void SetProductPageId(ProductPageIdT&& value) {
    m_productPageIdHasBeenSet = true;
    m_productPageId = std::forward<ProductPageIdT>(value);
  }
  template <typename ProductPageIdT = Aws::String>
  UpdateProductPageRequest& WithProductPageId(ProductPageIdT&& value) {
    SetProductPageId(std::forward<ProductPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new title and body of the page. Omit it to keep the current content.</p>
   */
  inline const DisplayContent& GetDisplayContent() const { return m_displayContent; }
  inline bool DisplayContentHasBeenSet() const { return m_displayContentHasBeenSet; }
  template <typename DisplayContentT = DisplayContent>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = DisplayContent>
  UpdateProductPageRequest& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productPageId;

  DisplayContent m_displayContent;
  bool m_productIdHasBeenSet = false;
  bool m_productPageIdHasBeenSet = false;
  bool m_displayContentHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
