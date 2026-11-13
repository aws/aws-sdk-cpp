/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCoreRequest.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LambdaCore {
namespace Model {

/**
 */
class CreateRuntimeVersionRequest : public LambdaCoreRequest {
 public:
  AWS_LAMBDACORE_API CreateRuntimeVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRuntimeVersion"; }

  AWS_LAMBDACORE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name or ARN of the runtime to create a version for.</p>
   */
  inline const Aws::String& GetRuntimeName() const { return m_runtimeName; }
  inline bool RuntimeNameHasBeenSet() const { return m_runtimeNameHasBeenSet; }
  template <typename RuntimeNameT = Aws::String>
  void SetRuntimeName(RuntimeNameT&& value) {
    m_runtimeNameHasBeenSet = true;
    m_runtimeName = std::forward<RuntimeNameT>(value);
  }
  template <typename RuntimeNameT = Aws::String>
  CreateRuntimeVersionRequest& WithRuntimeName(RuntimeNameT&& value) {
    SetRuntimeName(std::forward<RuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the container image used to define the function execution
   * environment for this runtime version.</p>
   */
  inline const Aws::String& GetImageUri() const { return m_imageUri; }
  inline bool ImageUriHasBeenSet() const { return m_imageUriHasBeenSet; }
  template <typename ImageUriT = Aws::String>
  void SetImageUri(ImageUriT&& value) {
    m_imageUriHasBeenSet = true;
    m_imageUri = std::forward<ImageUriT>(value);
  }
  template <typename ImageUriT = Aws::String>
  CreateRuntimeVersionRequest& WithImageUri(ImageUriT&& value) {
    SetImageUri(std::forward<ImageUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name to assign to the new runtime version.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateRuntimeVersionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The release notes to associate with the runtime version.</p>
   */
  inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
  inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
  template <typename ReleaseNotesT = Aws::String>
  void SetReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes = std::forward<ReleaseNotesT>(value);
  }
  template <typename ReleaseNotesT = Aws::String>
  CreateRuntimeVersionRequest& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When set to true, the request is validated without creating a new runtime
   * version. Use this to check that the request would succeed. No runtime version is
   * created and no changes are made.</p>
   */
  inline bool GetDryRun() const { return m_dryRun; }
  inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
  inline void SetDryRun(bool value) {
    m_dryRunHasBeenSet = true;
    m_dryRun = value;
  }
  inline CreateRuntimeVersionRequest& WithDryRun(bool value) {
    SetDryRun(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeName;

  Aws::String m_imageUri;

  Aws::String m_name;

  Aws::String m_releaseNotes;

  bool m_dryRun{false};
  bool m_runtimeNameHasBeenSet = false;
  bool m_imageUriHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_dryRunHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
