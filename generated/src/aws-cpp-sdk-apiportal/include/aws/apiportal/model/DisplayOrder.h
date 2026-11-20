/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/Section.h>
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
namespace APIPortal {
namespace Model {

/**
 * <p>The order of a product's content in the portal navigation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/DisplayOrder">AWS
 * API Reference</a></p>
 */
class DisplayOrder {
 public:
  AWS_APIPORTAL_API DisplayOrder() = default;
  AWS_APIPORTAL_API DisplayOrder(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API DisplayOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the product page shown as the product overview.</p>
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

  ///@{

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
 private:
  Aws::String m_overviewPageArn;

  Aws::Vector<Aws::String> m_productPageArns;

  Aws::Vector<Section> m_contents;
  bool m_overviewPageArnHasBeenSet = false;
  bool m_productPageArnsHasBeenSet = false;
  bool m_contentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
