/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/FlagValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>Input structure for defining a treatment when creating or updating an
 * experiment definition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/TreatmentInput">AWS
 * API Reference</a></p>
 */
class TreatmentInput {
 public:
  AWS_APPCONFIG_API TreatmentInput() = default;
  AWS_APPCONFIG_API TreatmentInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API TreatmentInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The traffic allocation weight for this treatment.</p>
   */
  inline double GetWeight() const { return m_weight; }
  inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
  inline void SetWeight(double value) {
    m_weightHasBeenSet = true;
    m_weight = value;
  }
  inline TreatmentInput& WithWeight(double value) {
    SetWeight(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the treatment.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  TreatmentInput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The feature flag value to serve to users assigned to this treatment.</p>
   */
  inline const FlagValue& GetFlagValue() const { return m_flagValue; }
  inline bool FlagValueHasBeenSet() const { return m_flagValueHasBeenSet; }
  template <typename FlagValueT = FlagValue>
  void SetFlagValue(FlagValueT&& value) {
    m_flagValueHasBeenSet = true;
    m_flagValue = std::forward<FlagValueT>(value);
  }
  template <typename FlagValueT = FlagValue>
  TreatmentInput& WithFlagValue(FlagValueT&& value) {
    SetFlagValue(std::forward<FlagValueT>(value));
    return *this;
  }
  ///@}
 private:
  double m_weight{0.0};

  Aws::String m_description;

  FlagValue m_flagValue;
  bool m_weightHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_flagValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
