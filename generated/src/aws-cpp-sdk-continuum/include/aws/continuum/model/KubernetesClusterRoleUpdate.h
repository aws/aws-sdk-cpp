/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/KubernetesClusterRoleConfiguration.h>
#include <aws/continuum/model/RemoveKubernetesClusterRole.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>One complete mutation of the Collector's Kubernetes IAM role
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/KubernetesClusterRoleUpdate">AWS
 * API Reference</a></p>
 */
class KubernetesClusterRoleUpdate {
 public:
  AWS_CONTINUUM_API KubernetesClusterRoleUpdate() = default;
  AWS_CONTINUUM_API KubernetesClusterRoleUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API KubernetesClusterRoleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Replace the complete role configuration.</p>
   */
  inline const KubernetesClusterRoleConfiguration& GetSet() const { return m_set; }
  inline bool SetHasBeenSet() const { return m_setHasBeenSet; }
  template <typename SetT = KubernetesClusterRoleConfiguration>
  void SetSet(SetT&& value) {
    m_setHasBeenSet = true;
    m_set = std::forward<SetT>(value);
  }
  template <typename SetT = KubernetesClusterRoleConfiguration>
  KubernetesClusterRoleUpdate& WithSet(SetT&& value) {
    SetSet(std::forward<SetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Remove the configured role and external ID.</p>
   */
  inline const RemoveKubernetesClusterRole& GetRemove() const { return m_remove; }
  inline bool RemoveHasBeenSet() const { return m_removeHasBeenSet; }
  template <typename RemoveT = RemoveKubernetesClusterRole>
  void SetRemove(RemoveT&& value) {
    m_removeHasBeenSet = true;
    m_remove = std::forward<RemoveT>(value);
  }
  template <typename RemoveT = RemoveKubernetesClusterRole>
  KubernetesClusterRoleUpdate& WithRemove(RemoveT&& value) {
    SetRemove(std::forward<RemoveT>(value));
    return *this;
  }
  ///@}
 private:
  KubernetesClusterRoleConfiguration m_set;

  RemoveKubernetesClusterRole m_remove;
  bool m_setHasBeenSet = false;
  bool m_removeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
