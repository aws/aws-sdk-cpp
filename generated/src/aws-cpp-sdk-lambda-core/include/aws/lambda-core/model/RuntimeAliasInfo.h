/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/Compatibility.h>
#include <aws/lambda-core/model/RuntimeAliasState.h>
#include <aws/lambda-core/model/RuntimeReleaseLifecycle.h>

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
 * <p>Summary information about a runtime alias returned by
 * ListRuntimeAliases.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/RuntimeAliasInfo">AWS
 * API Reference</a></p>
 */
class RuntimeAliasInfo {
 public:
  AWS_LAMBDACORE_API RuntimeAliasInfo() = default;
  AWS_LAMBDACORE_API RuntimeAliasInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API RuntimeAliasInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the runtime alias.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RuntimeAliasInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime alias.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RuntimeAliasInfo& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the runtime version the alias points to.</p>
   */
  inline const Aws::String& GetRuntimeVersion() const { return m_runtimeVersion; }
  inline bool RuntimeVersionHasBeenSet() const { return m_runtimeVersionHasBeenSet; }
  template <typename RuntimeVersionT = Aws::String>
  void SetRuntimeVersion(RuntimeVersionT&& value) {
    m_runtimeVersionHasBeenSet = true;
    m_runtimeVersion = std::forward<RuntimeVersionT>(value);
  }
  template <typename RuntimeVersionT = Aws::String>
  RuntimeAliasInfo& WithRuntimeVersion(RuntimeVersionT&& value) {
    SetRuntimeVersion(std::forward<RuntimeVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime version the alias points
   * to.</p>
   */
  inline const Aws::String& GetRuntimeVersionArn() const { return m_runtimeVersionArn; }
  inline bool RuntimeVersionArnHasBeenSet() const { return m_runtimeVersionArnHasBeenSet; }
  template <typename RuntimeVersionArnT = Aws::String>
  void SetRuntimeVersionArn(RuntimeVersionArnT&& value) {
    m_runtimeVersionArnHasBeenSet = true;
    m_runtimeVersionArn = std::forward<RuntimeVersionArnT>(value);
  }
  template <typename RuntimeVersionArnT = Aws::String>
  RuntimeAliasInfo& WithRuntimeVersionArn(RuntimeVersionArnT&& value) {
    SetRuntimeVersionArn(std::forward<RuntimeVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the runtime alias.</p>
   */
  inline RuntimeAliasState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RuntimeAliasState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RuntimeAliasInfo& WithState(RuntimeAliasState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present only when State is PENDING_DELETION. The date and time at which the
   * runtime alias will be permanently deleted.</p>
   */
  inline const Aws::String& GetPendingDeletionAt() const { return m_pendingDeletionAt; }
  inline bool PendingDeletionAtHasBeenSet() const { return m_pendingDeletionAtHasBeenSet; }
  template <typename PendingDeletionAtT = Aws::String>
  void SetPendingDeletionAt(PendingDeletionAtT&& value) {
    m_pendingDeletionAtHasBeenSet = true;
    m_pendingDeletionAt = std::forward<PendingDeletionAtT>(value);
  }
  template <typename PendingDeletionAtT = Aws::String>
  RuntimeAliasInfo& WithPendingDeletionAt(PendingDeletionAtT&& value) {
    SetPendingDeletionAt(std::forward<PendingDeletionAtT>(value));
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
  RuntimeAliasInfo& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compatibility matrix of the runtime version the alias points to.</p>
   */
  inline const Compatibility& GetCompatibility() const { return m_compatibility; }
  inline bool CompatibilityHasBeenSet() const { return m_compatibilityHasBeenSet; }
  template <typename CompatibilityT = Compatibility>
  void SetCompatibility(CompatibilityT&& value) {
    m_compatibilityHasBeenSet = true;
    m_compatibility = std::forward<CompatibilityT>(value);
  }
  template <typename CompatibilityT = Compatibility>
  RuntimeAliasInfo& WithCompatibility(CompatibilityT&& value) {
    SetCompatibility(std::forward<CompatibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle for the alias. By default, this is inherited from the runtime
   * lifecycle. Optionally, you can override the lifecycle information at the alias
   * level, if required.</p>
   */
  inline const RuntimeReleaseLifecycle& GetReleaseLifecycle() const { return m_releaseLifecycle; }
  inline bool ReleaseLifecycleHasBeenSet() const { return m_releaseLifecycleHasBeenSet; }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  void SetReleaseLifecycle(ReleaseLifecycleT&& value) {
    m_releaseLifecycleHasBeenSet = true;
    m_releaseLifecycle = std::forward<ReleaseLifecycleT>(value);
  }
  template <typename ReleaseLifecycleT = RuntimeReleaseLifecycle>
  RuntimeAliasInfo& WithReleaseLifecycle(ReleaseLifecycleT&& value) {
    SetReleaseLifecycle(std::forward<ReleaseLifecycleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime alias was created.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  RuntimeAliasInfo& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime alias was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  RuntimeAliasInfo& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_runtimeVersion;

  Aws::String m_runtimeVersionArn;

  RuntimeAliasState m_state{RuntimeAliasState::NOT_SET};

  Aws::String m_pendingDeletionAt;

  Aws::String m_description;

  Compatibility m_compatibility;

  RuntimeReleaseLifecycle m_releaseLifecycle;

  Aws::String m_created;

  Aws::String m_lastModified;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_runtimeVersionHasBeenSet = false;
  bool m_runtimeVersionArnHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_pendingDeletionAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_compatibilityHasBeenSet = false;
  bool m_releaseLifecycleHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
