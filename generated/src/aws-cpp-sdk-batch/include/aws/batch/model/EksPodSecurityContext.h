/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksSeccompProfile.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>The security context for the pod. The settings apply to all containers in the
 * pod when the container does not specify an overriding value. For more
 * information, see <a
 * href="https://kubernetes.io/docs/tasks/configure-pod-container/security-context/#set-the-security-context-for-a-pod">Set
 * the security context for a Pod</a> in the <i>Kubernetes
 * documentation</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksPodSecurityContext">AWS
 * API Reference</a></p>
 */
class EksPodSecurityContext {
 public:
  AWS_BATCH_API EksPodSecurityContext() = default;
  AWS_BATCH_API EksPodSecurityContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EksPodSecurityContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The user ID that runs containers in the pod when a container does not specify
   * its own user ID. The supported value range is <code>0</code> through
   * <code>2147483647</code>.</p>
   */
  inline long long GetRunAsUser() const { return m_runAsUser; }
  inline bool RunAsUserHasBeenSet() const { return m_runAsUserHasBeenSet; }
  inline void SetRunAsUser(long long value) {
    m_runAsUserHasBeenSet = true;
    m_runAsUser = value;
  }
  inline EksPodSecurityContext& WithRunAsUser(long long value) {
    SetRunAsUser(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The primary group ID that runs containers in the pod when a container does
   * not specify its own group ID. The supported value range is <code>0</code>
   * through <code>2147483647</code>.</p>
   */
  inline long long GetRunAsGroup() const { return m_runAsGroup; }
  inline bool RunAsGroupHasBeenSet() const { return m_runAsGroupHasBeenSet; }
  inline void SetRunAsGroup(long long value) {
    m_runAsGroupHasBeenSet = true;
    m_runAsGroup = value;
  }
  inline EksPodSecurityContext& WithRunAsGroup(long long value) {
    SetRunAsGroup(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether Kubernetes validates that containers in the pod don't run
   * as the root user unless a container specifies an overriding value.</p>
   */
  inline bool GetRunAsNonRoot() const { return m_runAsNonRoot; }
  inline bool RunAsNonRootHasBeenSet() const { return m_runAsNonRootHasBeenSet; }
  inline void SetRunAsNonRoot(bool value) {
    m_runAsNonRootHasBeenSet = true;
    m_runAsNonRoot = value;
  }
  inline EksPodSecurityContext& WithRunAsNonRoot(bool value) {
    SetRunAsNonRoot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default seccomp profile for containers in the pod. A container-level
   * seccomp profile overrides this value.</p>
   */
  inline const EksSeccompProfile& GetSeccompProfile() const { return m_seccompProfile; }
  inline bool SeccompProfileHasBeenSet() const { return m_seccompProfileHasBeenSet; }
  template <typename SeccompProfileT = EksSeccompProfile>
  void SetSeccompProfile(SeccompProfileT&& value) {
    m_seccompProfileHasBeenSet = true;
    m_seccompProfile = std::forward<SeccompProfileT>(value);
  }
  template <typename SeccompProfileT = EksSeccompProfile>
  EksPodSecurityContext& WithSeccompProfile(SeccompProfileT&& value) {
    SetSeccompProfile(std::forward<SeccompProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A special supplemental group that is applied to all containers in the pod.
   * Some volume types allow Kubernetes to change the ownership and permissions of
   * the volume contents to this group when the volume is mounted. The supported
   * value range is <code>0</code> through <code>2147483647</code>.</p>
   */
  inline long long GetFsGroup() const { return m_fsGroup; }
  inline bool FsGroupHasBeenSet() const { return m_fsGroupHasBeenSet; }
  inline void SetFsGroup(long long value) {
    m_fsGroupHasBeenSet = true;
    m_fsGroup = value;
  }
  inline EksPodSecurityContext& WithFsGroup(long long value) {
    SetFsGroup(value);
    return *this;
  }
  ///@}
 private:
  long long m_runAsUser{0};

  long long m_runAsGroup{0};

  bool m_runAsNonRoot{false};

  EksSeccompProfile m_seccompProfile;

  long long m_fsGroup{0};
  bool m_runAsUserHasBeenSet = false;
  bool m_runAsGroupHasBeenSet = false;
  bool m_runAsNonRootHasBeenSet = false;
  bool m_seccompProfileHasBeenSet = false;
  bool m_fsGroupHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
