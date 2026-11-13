/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/RuntimeReleaseLifecycle.h>
#include <aws/lambda-core/model/RuntimeState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LambdaCore {
namespace Model {

/**
 * <p>Summary information about a runtime returned by ListRuntimes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/RuntimeInfo">AWS
 * API Reference</a></p>
 */
class RuntimeInfo {
 public:
  AWS_LAMBDACORE_API RuntimeInfo() = default;
  AWS_LAMBDACORE_API RuntimeInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API RuntimeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RuntimeInfo& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the runtime.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RuntimeInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the runtime.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  RuntimeInfo& WithDescription(DescriptionT&& value) {
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
  RuntimeInfo& WithLicenseInfo(LicenseInfoT&& value) {
    SetLicenseInfo(std::forward<LicenseInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime lifecycle for the runtime. Used to schedule runtime
   * deprecation.</p>
   */
  inline const RuntimeReleaseLifecycle& GetReleaseLifecycle() const { return m_releaseLifecycle; }
  inline bool ReleaseLifecycleHasBeenSet() const { return m_releaseLifecycleHasBeenSet; }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  void SetReleaseLifecycle(ReleaseLifecycleT&& value) {
    m_releaseLifecycleHasBeenSet = true;
    m_releaseLifecycle = std::forward<ReleaseLifecycleT>(value);
  }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  RuntimeInfo& WithReleaseLifecycle(ReleaseLifecycleT&& value) {
    SetReleaseLifecycle(std::forward<ReleaseLifecycleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the runtime.</p>
   */
  inline RuntimeState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RuntimeState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RuntimeInfo& WithState(RuntimeState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present only when State is PENDING_DELETION. The date and time at which the
   * runtime will be permanently deleted.</p>
   */
  inline const Aws::String& GetPendingDeletionAt() const { return m_pendingDeletionAt; }
  inline bool PendingDeletionAtHasBeenSet() const { return m_pendingDeletionAtHasBeenSet; }
  template <typename PendingDeletionAtT = Aws::String>
  void SetPendingDeletionAt(PendingDeletionAtT&& value) {
    m_pendingDeletionAtHasBeenSet = true;
    m_pendingDeletionAt = std::forward<PendingDeletionAtT>(value);
  }
  template <typename PendingDeletionAtT = Aws::String>
  RuntimeInfo& WithPendingDeletionAt(PendingDeletionAtT&& value) {
    SetPendingDeletionAt(std::forward<PendingDeletionAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime was created.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  RuntimeInfo& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  RuntimeInfo& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_licenseInfo;

  RuntimeReleaseLifecycle m_releaseLifecycle;

  RuntimeState m_state{RuntimeState::NOT_SET};

  Aws::String m_pendingDeletionAt;

  Aws::String m_created;

  Aws::String m_lastModified;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_licenseInfoHasBeenSet = false;
  bool m_releaseLifecycleHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_pendingDeletionAtHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
