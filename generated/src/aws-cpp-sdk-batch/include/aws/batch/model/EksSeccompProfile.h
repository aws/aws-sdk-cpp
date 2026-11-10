/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/EksSeccompProfileType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>The Linux seccomp profile for a pod or container. For more information, see
 * <a href="https://kubernetes.io/docs/tutorials/security/seccomp/">Restrict a
 * Container's Syscalls with seccomp</a> in the <i>Kubernetes
 * documentation</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksSeccompProfile">AWS
 * API Reference</a></p>
 */
class EksSeccompProfile {
 public:
  AWS_BATCH_API EksSeccompProfile() = default;
  AWS_BATCH_API EksSeccompProfile(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API EksSeccompProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The seccomp profile type can be one of the following values:</p> <dl>
   * <dt>RuntimeDefault</dt> <dd> <p>The <code>RuntimeDefault</code> value uses the
   * container runtime's default seccomp profile.</p> </dd> <dt>Unconfined</dt> <dd>
   * <p>The <code>Unconfined</code> value doesn't filter the container with
   * seccomp.</p> </dd> <dt>Localhost</dt> <dd> <p>The <code>Localhost</code> value
   * uses a custom profile at the path specified by
   * <code>localhostProfile</code>.</p> </dd> </dl>
   */
  inline EksSeccompProfileType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EksSeccompProfileType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EksSeccompProfile& WithType(EksSeccompProfileType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the profile on the node, relative to the configured seccomp
   * profile location. You must specify this parameter when <code>type</code> is
   * <code>Localhost</code>. Don't set this parameter for any other type. You are
   * responsible for ensuring that the profile exists on every eligible worker node.
   * For information about providing files to Amazon EKS nodes, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/eks-launch-templates.html">Use
   * a launch template with Batch on Amazon EKS</a> in the <i>Batch User
   * Guide</i>.</p>
   */
  inline const Aws::String& GetLocalhostProfile() const { return m_localhostProfile; }
  inline bool LocalhostProfileHasBeenSet() const { return m_localhostProfileHasBeenSet; }
  template <typename LocalhostProfileT = Aws::String>
  void SetLocalhostProfile(LocalhostProfileT&& value) {
    m_localhostProfileHasBeenSet = true;
    m_localhostProfile = std::forward<LocalhostProfileT>(value);
  }
  template <typename LocalhostProfileT = Aws::String>
  EksSeccompProfile& WithLocalhostProfile(LocalhostProfileT&& value) {
    SetLocalhostProfile(std::forward<LocalhostProfileT>(value));
    return *this;
  }
  ///@}
 private:
  EksSeccompProfileType m_type{EksSeccompProfileType::NOT_SET};

  Aws::String m_localhostProfile;
  bool m_typeHasBeenSet = false;
  bool m_localhostProfileHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
