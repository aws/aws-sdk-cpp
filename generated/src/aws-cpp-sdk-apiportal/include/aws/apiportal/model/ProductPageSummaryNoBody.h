/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>A summary of a product page, without its body.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ProductPageSummaryNoBody">AWS
 * API Reference</a></p>
 */
class ProductPageSummaryNoBody {
 public:
  AWS_APIPORTAL_API ProductPageSummaryNoBody() = default;
  AWS_APIPORTAL_API ProductPageSummaryNoBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ProductPageSummaryNoBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ProductPageSummaryNoBody& WithProductPageId(ProductPageIdT&& value) {
    SetProductPageId(std::forward<ProductPageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the product page.</p>
   */
  inline const Aws::String& GetProductPageArn() const { return m_productPageArn; }
  inline bool ProductPageArnHasBeenSet() const { return m_productPageArnHasBeenSet; }
  template <typename ProductPageArnT = Aws::String>
  void SetProductPageArn(ProductPageArnT&& value) {
    m_productPageArnHasBeenSet = true;
    m_productPageArn = std::forward<ProductPageArnT>(value);
  }
  template <typename ProductPageArnT = Aws::String>
  ProductPageSummaryNoBody& WithProductPageArn(ProductPageArnT&& value) {
    SetProductPageArn(std::forward<ProductPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The page title.</p>
   */
  inline const Aws::String& GetPageTitle() const { return m_pageTitle; }
  inline bool PageTitleHasBeenSet() const { return m_pageTitleHasBeenSet; }
  template <typename PageTitleT = Aws::String>
  void SetPageTitle(PageTitleT&& value) {
    m_pageTitleHasBeenSet = true;
    m_pageTitle = std::forward<PageTitleT>(value);
  }
  template <typename PageTitleT = Aws::String>
  ProductPageSummaryNoBody& WithPageTitle(PageTitleT&& value) {
    SetPageTitle(std::forward<PageTitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ProductPageSummaryNoBody& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productPageId;

  Aws::String m_productPageArn;

  Aws::String m_pageTitle;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_productPageIdHasBeenSet = false;
  bool m_productPageArnHasBeenSet = false;
  bool m_pageTitleHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
