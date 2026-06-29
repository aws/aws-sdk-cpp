/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Optional deployment parameters for an experiment run, including extension
 * parameters and tags.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeploymentParameters">AWS
 * API Reference</a></p>
 */
class DeploymentParameters {
 public:
  AWS_APPCONFIG_API DeploymentParameters() = default;
  AWS_APPCONFIG_API DeploymentParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API DeploymentParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of extension parameters for the deployment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDynamicExtensionParameters() const { return m_dynamicExtensionParameters; }
  inline bool DynamicExtensionParametersHasBeenSet() const { return m_dynamicExtensionParametersHasBeenSet; }
  template <typename DynamicExtensionParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetDynamicExtensionParameters(DynamicExtensionParametersT&& value) {
    m_dynamicExtensionParametersHasBeenSet = true;
    m_dynamicExtensionParameters = std::forward<DynamicExtensionParametersT>(value);
  }
  template <typename DynamicExtensionParametersT = Aws::Map<Aws::String, Aws::String>>
  DeploymentParameters& WithDynamicExtensionParameters(DynamicExtensionParametersT&& value) {
    SetDynamicExtensionParameters(std::forward<DynamicExtensionParametersT>(value));
    return *this;
  }
  template <typename DynamicExtensionParametersKeyT = Aws::String, typename DynamicExtensionParametersValueT = Aws::String>
  DeploymentParameters& AddDynamicExtensionParameters(DynamicExtensionParametersKeyT&& key, DynamicExtensionParametersValueT&& value) {
    m_dynamicExtensionParametersHasBeenSet = true;
    m_dynamicExtensionParameters.emplace(std::forward<DynamicExtensionParametersKeyT>(key),
                                         std::forward<DynamicExtensionParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to assign to the deployment.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DeploymentParameters& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DeploymentParameters& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_dynamicExtensionParameters;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_dynamicExtensionParametersHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
