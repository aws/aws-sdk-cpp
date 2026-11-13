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
class UpdateRuntimeAliasRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API UpdateRuntimeAliasRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRuntimeAlias"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name or ARN of the runtime.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  inline bool RuntimeNameHasBeenSet() const { return m_runtimeNameHasBeenSet; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  UpdateRuntimeAliasRequest& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the runtime alias to update.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateRuntimeAliasRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the runtime version the alias should point to.</p>
   */
  inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
  inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
  template <typename RuntimeVersionT = Aws::String>
  void SetRuntimeVersion(RuntimeVersionT&& value) {
    m_runtimeVersionHasBeenSet = true;
    m_runtimeVersion = std::forward<RuntimeVersionT>(value);
  }
  template <typename RuntimeVersionT = Aws::String>
  UpdateRuntimeAliasRequest& WithRuntimeVersion(RuntimeVersionT&& value) {
    SetRuntimeVersion(std::forward<RuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the runtime alias.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateRuntimeAliasRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle for the alias. By default, this is inherited from the runtime
   * lifecycle. Optionally, you can override the lifecycle information at the alias
   * level, if required. Omitting or providing an empty object removes the existing
   * lifecycle override.</p>
   */
  inline const RuntimeReleaseLifecycle& GetReleaseLifecycle() const { return m_releaseLifecycle; }
  inline bool ReleaseLifecycleHasBeenSet() const { return m_releaseLifecycleHasBeenSet; }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  void SetReleaseLifecycle(ReleaseLifecycleT&& value) {
    m_releaseLifecycleHasBeenSet = true;
    m_releaseLifecycle = std::forward<ReleaseLifecycleT>(value);
  }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  UpdateRuntimeAliasRequest& WithReleaseLifecycle(ReleaseLifecycleT&& value) {
    SetReleaseLifecycle(std::forward<ReleaseLifecycleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeName;

  Aws::String m_name;

  Aws::String m_runtimeVersion;

  Aws::String m_description;

  RuntimeReleaseLifecycle m_releaseLifecycle;
  bool m_runtimeNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_runtimeVersionHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_releaseLifecycleHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
