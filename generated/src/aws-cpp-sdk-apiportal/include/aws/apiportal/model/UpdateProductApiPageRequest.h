/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ApiPageDisplayContent.h>
#include <aws/apiportal/model/TryItState.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace APIPortal {
namespace Model {

/**
 */
class UpdateProductApiPageRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API UpdateProductApiPageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateProductApiPage"; }

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
  UpdateProductApiPageRequest& WithProductId(ProductIdT&& value) {
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
  UpdateProductApiPageRequest& WithProductApiPageId(ProductApiPageIdT&& value) {
    SetProductApiPageId(std::forward<ProductApiPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ApiPageDisplayContent& GetDisplayContent() const { return m_displayContent; }
  inline bool DisplayContentHasBeenSet() const { return m_displayContentHasBeenSet; }
  template <typename DisplayContentT = ApiPageDisplayContent>
  void SetDisplayContent(DisplayContentT&& value) {
    m_displayContentHasBeenSet = true;
    m_displayContent = std::forward<DisplayContentT>(value);
  }
  template <typename DisplayContentT = ApiPageDisplayContent>
  UpdateProductApiPageRequest& WithDisplayContent(DisplayContentT&& value) {
    SetDisplayContent(std::forward<DisplayContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new Try-It setting. Omit it to keep the current setting. To enable it,
   * the page's API URL must use HTTPS on a domain that supports Try-It.</p>
   */
  inline TryItState GetTryItState() const { return m_tryItState; }
  inline bool TryItStateHasBeenSet() const { return m_tryItStateHasBeenSet; }
  inline void SetTryItState(TryItState value) {
    m_tryItStateHasBeenSet = true;
    m_tryItState = value;
  }
  inline UpdateProductApiPageRequest& WithTryItState(TryItState value) {
    SetTryItState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_productId;

  Aws::String m_productApiPageId;

  ApiPageDisplayContent m_displayContent;

  TryItState m_tryItState{TryItState::NOT_SET};
  bool m_productIdHasBeenSet = false;
  bool m_productApiPageIdHasBeenSet = false;
  bool m_displayContentHasBeenSet = false;
  bool m_tryItStateHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
