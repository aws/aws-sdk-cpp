/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/TemplateGroup.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>A type of OutputConfig, used when the output in a feed is for the crop
 * feature.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/CroppingConfig">AWS
 * API Reference</a></p>
 */
class CroppingConfig {
 public:
  AWS_ELEMENTALINFERENCE_API CroppingConfig() = default;
  AWS_ELEMENTALINFERENCE_API CroppingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API CroppingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An array of template groups for the crop output. Each template group provides
   * the graphics-compositing templates that Elemental Inference applies to the
   * cropped video. You can specify from 1 to 4 template groups. </p>
   */
  inline const Aws::Vector<TemplateGroup>& GetTemplateGroups() const { return m_templateGroups; }
  inline bool TemplateGroupsHasBeenSet() const { return m_templateGroupsHasBeenSet; }
  template <typename TemplateGroupsT = Aws::Vector<TemplateGroup>>
  void SetTemplateGroups(TemplateGroupsT&& value) {
    m_templateGroupsHasBeenSet = true;
    m_templateGroups = std::forward<TemplateGroupsT>(value);
  }
  template <typename TemplateGroupsT = Aws::Vector<TemplateGroup>>
  CroppingConfig& WithTemplateGroups(TemplateGroupsT&& value) {
    SetTemplateGroups(std::forward<TemplateGroupsT>(value));
    return *this;
  }
  template <typename TemplateGroupsT = TemplateGroup>
  CroppingConfig& AddTemplateGroups(TemplateGroupsT&& value) {
    m_templateGroupsHasBeenSet = true;
    m_templateGroups.emplace_back(std::forward<TemplateGroupsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TemplateGroup> m_templateGroups;
  bool m_templateGroupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
