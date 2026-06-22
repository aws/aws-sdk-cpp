/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains information about the product that produced an
 * investigation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Product">AWS
 * API Reference</a></p>
 */
class Product {
 public:
  AWS_GUARDDUTY_API Product() = default;
  AWS_GUARDDUTY_API Product(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Product& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the product.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Product& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific feature within the product that produced the investigation.</p>
   */
  inline const Aws::String& GetFeature() const { return m_feature; }
  inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
  template <typename FeatureT = Aws::String>
  void SetFeature(FeatureT&& value) {
    m_featureHasBeenSet = true;
    m_feature = std::forward<FeatureT>(value);
  }
  template <typename FeatureT = Aws::String>
  Product& WithFeature(FeatureT&& value) {
    SetFeature(std::forward<FeatureT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_feature;
  bool m_nameHasBeenSet = false;
  bool m_featureHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
