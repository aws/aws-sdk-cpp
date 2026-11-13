/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class UpdateRuntimeRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API UpdateRuntimeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRuntime"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name or ARN of the runtime to update.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  inline bool RuntimeNameHasBeenSet() const { return m_runtimeNameHasBeenSet; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  UpdateRuntimeRequest& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated description of the runtime.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRuntimeRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated license information for the runtime.</p>
   */
  inline const Aws::String& GetLicenseInfo() const { return m_licenseInfo; }
  inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }
  template <typename LicenseInfoT = Aws::String>
  void SetLicenseInfo(LicenseInfoT&& value) {
    m_licenseInfoHasBeenSet = true;
    m_licenseInfo = std::forward<LicenseInfoT>(value);
  }
  template <typename LicenseInfoT = Aws::String>
  UpdateRuntimeRequest& WithLicenseInfo(LicenseInfoT&& value) {
    SetLicenseInfo(std::forward<LicenseInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime lifecycle for the runtime. Optional. Used to schedule runtime
   * deprecation. Omitting or providing an empty object removes the existing
   * lifecycle.</p>
   */
  inline const RuntimeReleaseLifecycle& GetReleaseLifecycle() const { return m_releaseLifecycle; }
  inline bool ReleaseLifecycleHasBeenSet() const { return m_releaseLifecycleHasBeenSet; }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  void SetReleaseLifecycle(ReleaseLifecycleT&& value) {
    m_releaseLifecycleHasBeenSet = true;
    m_releaseLifecycle = std::forward<ReleaseLifecycleT>(value);
  }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  UpdateRuntimeRequest& WithReleaseLifecycle(ReleaseLifecycleT&& value) {
    SetReleaseLifecycle(std::forward<ReleaseLifecycleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeName;

  Aws::String m_description;

  Aws::String m_licenseInfo;

  RuntimeReleaseLifecycle m_releaseLifecycle;
  bool m_runtimeNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_licenseInfoHasBeenSet = false;
  bool m_releaseLifecycleHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
