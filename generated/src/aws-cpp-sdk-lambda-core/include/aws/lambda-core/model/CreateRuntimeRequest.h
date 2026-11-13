/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/RuntimeReleaseLifecycle.h>

#include <utility>

namespace Aws {
namespace LambdaCore {
namespace Model {

/**
 */
class CreateRuntimeRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API CreateRuntimeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRuntime"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the runtime to create.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRuntimeRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag keys and values to associate with the runtime.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateRuntimeRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateRuntimeRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the runtime.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateRuntimeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The license information for the runtime.</p>
   */
  inline const Aws::String& GetLicenseInfo() const { return m_licenseInfo; }
  inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }
  template <typename LicenseInfoT = Aws::String>
  void SetLicenseInfo(LicenseInfoT&& value) {
    m_licenseInfoHasBeenSet = true;
    m_licenseInfo = std::forward<LicenseInfoT>(value);
  }
  template <typename LicenseInfoT = Aws::String>
  CreateRuntimeRequest& WithLicenseInfo(LicenseInfoT&& value) {
    SetLicenseInfo(std::forward<LicenseInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime lifecycle for the runtime (optional). Use this to schedule
   * runtime deprecation.</p>
   */
  inline const RuntimeReleaseLifecycle& GetReleaseLifecycle() const { return m_releaseLifecycle; }
  inline bool ReleaseLifecycleHasBeenSet() const { return m_releaseLifecycleHasBeenSet; }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  void SetReleaseLifecycle(ReleaseLifecycleT&& value) {
    m_releaseLifecycleHasBeenSet = true;
    m_releaseLifecycle = std::forward<ReleaseLifecycleT>(value);
  }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  CreateRuntimeRequest& WithReleaseLifecycle(ReleaseLifecycleT&& value) {
    SetReleaseLifecycle(std::forward<ReleaseLifecycleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_description;

  Aws::String m_licenseInfo;

  RuntimeReleaseLifecycle m_releaseLifecycle;
  bool m_nameHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_licenseInfoHasBeenSet = false;
  bool m_releaseLifecycleHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
