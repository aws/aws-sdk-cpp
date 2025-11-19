/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/Section.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The display order.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DisplayOrder">AWS
 * API Reference</a></p>
 */
class DisplayOrder {
 public:
  AWS_APIGATEWAYV2_API DisplayOrder() = default;
  AWS_APIGATEWAYV2_API DisplayOrder(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API DisplayOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Represents a list of sections which include section name and list of product
   * REST endpoints for a product.</p>
   */
  inline const Aws::Vector<Section>& GetContents() const { return m_contents; }
  inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
  template <typename ContentsT = Aws::Vector<Section>>
  void SetContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents = std::forward<ContentsT>(value);
  }
  template <typename ContentsT = Aws::Vector<Section>>
  DisplayOrder& WithContents(ContentsT&& value) {
    SetContents(std::forward<ContentsT>(value));
    return *this;
  }
  template <typename ContentsT = Section>
  DisplayOrder& AddContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents.emplace_back(std::forward<ContentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the overview page.</p>
   */
  inline const Aws::String& GetOverviewPageArn() const { return m_overviewPageArn; }
  inline bool OverviewPageArnHasBeenSet() const { return m_overviewPageArnHasBeenSet; }
  template <typename OverviewPageArnT = Aws::String>
  void SetOverviewPageArn(OverviewPageArnT&& value) {
    m_overviewPageArnHasBeenSet = true;
    m_overviewPageArn = std::forward<OverviewPageArnT>(value);
  }
  template <typename OverviewPageArnT = Aws::String>
  DisplayOrder& WithOverviewPageArn(OverviewPageArnT&& value) {
    SetOverviewPageArn(std::forward<OverviewPageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The product page ARNs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProductPageArns() const { return m_productPageArns; }
  inline bool ProductPageArnsHasBeenSet() const { return m_productPageArnsHasBeenSet; }
  template <typename ProductPageArnsT = Aws::Vector<Aws::String>>
  void SetProductPageArns(ProductPageArnsT&& value) {
    m_productPageArnsHasBeenSet = true;
    m_productPageArns = std::forward<ProductPageArnsT>(value);
  }
  template <typename ProductPageArnsT = Aws::Vector<Aws::String>>
  DisplayOrder& WithProductPageArns(ProductPageArnsT&& value) {
    SetProductPageArns(std::forward<ProductPageArnsT>(value));
    return *this;
  }
  template <typename ProductPageArnsT = Aws::String>
  DisplayOrder& AddProductPageArns(ProductPageArnsT&& value) {
    m_productPageArnsHasBeenSet = true;
    m_productPageArns.emplace_back(std::forward<ProductPageArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Section> m_contents;
  bool m_contentsHasBeenSet = false;

  Aws::String m_overviewPageArn;
  bool m_overviewPageArnHasBeenSet = false;

  Aws::Vector<Aws::String> m_productPageArns;
  bool m_productPageArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApiGatewayV2
}  // namespace Aws
