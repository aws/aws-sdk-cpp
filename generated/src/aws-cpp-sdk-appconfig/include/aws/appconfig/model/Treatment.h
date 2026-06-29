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
 * <p>Describes a treatment in an experiment, including its traffic allocation
 * weight and feature flag value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/Treatment">AWS
 * API Reference</a></p>
 */
class Treatment {
 public:
  AWS_APPCONFIG_API Treatment() = default;
  AWS_APPCONFIG_API Treatment(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Treatment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique key that identifies this treatment.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  Treatment& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

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
  inline Treatment& WithWeight(double value) {
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
  Treatment& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The feature flag value served to users assigned to this treatment.</p>
   */
  inline const FlagValue& GetFlagValue() const { return m_flagValue; }
  inline bool FlagValueHasBeenSet() const { return m_flagValueHasBeenSet; }
  template <typename FlagValueT = FlagValue>
  void SetFlagValue(FlagValueT&& value) {
    m_flagValueHasBeenSet = true;
    m_flagValue = std::forward<FlagValueT>(value);
  }
  template <typename FlagValueT = FlagValue>
  Treatment& WithFlagValue(FlagValueT&& value) {
    SetFlagValue(std::forward<FlagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  double m_weight{0.0};

  Aws::String m_description;

  FlagValue m_flagValue;
  bool m_keyHasBeenSet = false;
  bool m_weightHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_flagValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
