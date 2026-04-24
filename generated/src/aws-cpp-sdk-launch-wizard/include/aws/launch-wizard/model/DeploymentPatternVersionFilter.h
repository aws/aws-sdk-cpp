/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentPatternVersionFilterKey.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LaunchWizard {
namespace Model {

/**
 * <p>A filter for deployment pattern versions. Use this filter to specify criteria
 * for querying deployment pattern versions in Launch Wizard.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/launch-wizard-2018-05-10/DeploymentPatternVersionFilter">AWS
 * API Reference</a></p>
 */
class DeploymentPatternVersionFilter {
 public:
  AWS_LAUNCHWIZARD_API DeploymentPatternVersionFilter() = default;
  AWS_LAUNCHWIZARD_API DeploymentPatternVersionFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API DeploymentPatternVersionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAUNCHWIZARD_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the filter attribute. Specifies which attribute to filter on when
   * querying deployment pattern versions.</p>
   */
  inline DeploymentPatternVersionFilterKey GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(DeploymentPatternVersionFilterKey value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline DeploymentPatternVersionFilter& WithName(DeploymentPatternVersionFilterKey value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to filter by. Contains the specific values to match against when
   * filtering deployment pattern versions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  DeploymentPatternVersionFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  DeploymentPatternVersionFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  DeploymentPatternVersionFilterKey m_name{DeploymentPatternVersionFilterKey::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace LaunchWizard
}  // namespace Aws
