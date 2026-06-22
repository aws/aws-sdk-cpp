/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/Product.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains metadata about the product and version that produced an
 * investigation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationMetadata">AWS
 * API Reference</a></p>
 */
class InvestigationMetadata {
 public:
  AWS_GUARDDUTY_API InvestigationMetadata() = default;
  AWS_GUARDDUTY_API InvestigationMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the investigation engine that produced the results.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  InvestigationMetadata& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about the product that produced the investigation.</p>
   */
  inline const Product& GetProduct() const { return m_product; }
  inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
  template <typename ProductT = Product>
  void SetProduct(ProductT&& value) {
    m_productHasBeenSet = true;
    m_product = std::forward<ProductT>(value);
  }
  template <typename ProductT = Product>
  InvestigationMetadata& WithProduct(ProductT&& value) {
    SetProduct(std::forward<ProductT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_version;

  Product m_product;
  bool m_versionHasBeenSet = false;
  bool m_productHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
