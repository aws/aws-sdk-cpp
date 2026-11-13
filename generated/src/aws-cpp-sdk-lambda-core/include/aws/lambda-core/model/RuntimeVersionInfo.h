/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-core/LambdaCore_EXPORTS.h>
#include <aws/lambda-core/model/Compatibility.h>
#include <aws/lambda-core/model/RuntimeVersionState.h>

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
 * <p>Summary information about a runtime version returned by
 * ListRuntimeVersions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-core-2026-04-30/RuntimeVersionInfo">AWS
 * API Reference</a></p>
 */
class RuntimeVersionInfo {
 public:
  AWS_LAMBDACORE_API RuntimeVersionInfo() = default;
  AWS_LAMBDACORE_API RuntimeVersionInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API RuntimeVersionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDACORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the runtime version.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RuntimeVersionInfo& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the runtime version.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  RuntimeVersionInfo& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resolved image URI of the runtime version.</p>
   */
  inline const Aws::String& GetResolvedUri() const { return m_resolvedUri; }
  inline bool ResolvedUriHasBeenSet() const { return m_resolvedUriHasBeenSet; }
  template <typename ResolvedUriT = Aws::String>
  void SetResolvedUri(ResolvedUriT&& value) {
    m_resolvedUriHasBeenSet = true;
    m_resolvedUri = std::forward<ResolvedUriT>(value);
  }
  template <typename ResolvedUriT = Aws::String>
  RuntimeVersionInfo& WithResolvedUri(ResolvedUriT&& value) {
    SetResolvedUri(std::forward<ResolvedUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the runtime version.</p>
   */
  inline RuntimeVersionState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(RuntimeVersionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline RuntimeVersionInfo& WithState(RuntimeVersionState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Present only when State is PENDING_DELETION. The date and time at which the
   * runtime version will be permanently deleted.</p>
   */
  inline const Aws::String& GetPendingDeletionAt() const { return m_pendingDeletionAt; }
  inline bool PendingDeletionAtHasBeenSet() const { return m_pendingDeletionAtHasBeenSet; }
  template <typename PendingDeletionAtT = Aws::String>
  void SetPendingDeletionAt(PendingDeletionAtT&& value) {
    m_pendingDeletionAtHasBeenSet = true;
    m_pendingDeletionAt = std::forward<PendingDeletionAtT>(value);
  }
  template <typename PendingDeletionAtT = Aws::String>
  RuntimeVersionInfo& WithPendingDeletionAt(PendingDeletionAtT&& value) {
    SetPendingDeletionAt(std::forward<PendingDeletionAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The release notes associated with the runtime version.</p>
   */
  inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
  inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
  template <typename ReleaseNotesT = Aws::String>
  void SetReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes = std::forward<ReleaseNotesT>(value);
  }
  template <typename ReleaseNotesT = Aws::String>
  RuntimeVersionInfo& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compatibility matrix of the runtime version.</p>
   */
  inline const Compatibility& GetCompatibility() const { return m_compatibility; }
  inline bool CompatibilityHasBeenSet() const { return m_compatibilityHasBeenSet; }
  template <typename CompatibilityT = Compatibility>
  void SetCompatibility(CompatibilityT&& value) {
    m_compatibilityHasBeenSet = true;
    m_compatibility = std::forward<CompatibilityT>(value);
  }
  template <typename CompatibilityT = Compatibility>
  RuntimeVersionInfo& WithCompatibility(CompatibilityT&& value) {
    SetCompatibility(std::forward<CompatibilityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime version was created.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  RuntimeVersionInfo& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the runtime version was last modified.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  RuntimeVersionInfo& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_resolvedUri;

  RuntimeVersionState m_state{RuntimeVersionState::NOT_SET};

  Aws::String m_pendingDeletionAt;

  Aws::String m_releaseNotes;

  Compatibility m_compatibility;

  Aws::String m_created;

  Aws::String m_lastModified;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_resolvedUriHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_pendingDeletionAtHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_compatibilityHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
