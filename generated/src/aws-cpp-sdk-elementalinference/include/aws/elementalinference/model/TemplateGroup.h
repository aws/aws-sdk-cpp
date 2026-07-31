/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

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
 * <p>A named set of graphics-compositing templates used by the crop feature,
 * specified in the templateGroups array of a CroppingConfig. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/TemplateGroup">AWS
 * API Reference</a></p>
 */
class TemplateGroup {
 public:
  AWS_ELEMENTALINFERENCE_API TemplateGroup() = default;
  AWS_ELEMENTALINFERENCE_API TemplateGroup(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API TemplateGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A name for the template group.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TemplateGroup& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of Amazon S3 URIs that point to the graphics-compositing templates
   * for this group. You can specify 1 or 2 URIs. Each URI must be in the form
   * <code>s3://bucket-name/key</code>. Elemental Inference reads these templates
   * using the IAM role that you specify in accessRoleArn. </p>
   */
  inline const Aws::Vector<Aws::String>& GetTemplateUris() const { return m_templateUris; }
  inline bool TemplateUrisHasBeenSet() const { return m_templateUrisHasBeenSet; }
  template <typename TemplateUrisT = Aws::Vector<Aws::String>>
  void SetTemplateUris(TemplateUrisT&& value) {
    m_templateUrisHasBeenSet = true;
    m_templateUris = std::forward<TemplateUrisT>(value);
  }
  template <typename TemplateUrisT = Aws::Vector<Aws::String>>
  TemplateGroup& WithTemplateUris(TemplateUrisT&& value) {
    SetTemplateUris(std::forward<TemplateUrisT>(value));
    return *this;
  }
  template <typename TemplateUrisT = Aws::String>
  TemplateGroup& AddTemplateUris(TemplateUrisT&& value) {
    m_templateUrisHasBeenSet = true;
    m_templateUris.emplace_back(std::forward<TemplateUrisT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Aws::String> m_templateUris;
  bool m_nameHasBeenSet = false;
  bool m_templateUrisHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
