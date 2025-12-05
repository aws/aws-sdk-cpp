/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2 {
namespace Model {

/**
 * <p>Represents a product page summary without listing any page
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ProductPageSummaryNoBody">AWS
 * API Reference</a></p>
 */
class ProductPageSummaryNoBody {
 public:
  AWS_APIGATEWAYV2_API ProductPageSummaryNoBody() = default;
  AWS_APIGATEWAYV2_API ProductPageSummaryNoBody(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API ProductPageSummaryNoBody& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the product page was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  ProductPageSummaryNoBody& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
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
   * <p>The product page identifier.</p>
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
 private:
  Aws::Utils::DateTime m_lastModified{};

  Aws::String m_pageTitle;

  Aws::String m_productPageArn;

  Aws::String m_productPageId;
  bool m_lastModifiedHasBeenSet = false;
  bool m_pageTitleHasBeenSet = false;
  bool m_productPageArnHasBeenSet = false;
  bool m_productPageIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
