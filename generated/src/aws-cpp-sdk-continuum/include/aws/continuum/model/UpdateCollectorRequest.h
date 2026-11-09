/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/KubernetesClusterRoleUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the mutable Collector properties. At least one property must be
 * supplied. k8ClusterRole models an atomic set-or-remove mutation, so roleArn and
 * externalId are replaced or removed together.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/UpdateCollectorInput">AWS
 * API Reference</a></p>
 */
class UpdateCollectorRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API UpdateCollectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateCollector"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Collector to update.</p>
   */
  inline const Aws::String& GetCollectorId() const { return m_collectorId; }
  inline bool CollectorIdHasBeenSet() const { return m_collectorIdHasBeenSet; }
  template <typename CollectorIdT = Aws::String>
  void SetCollectorId(CollectorIdT&& value) {
    m_collectorIdHasBeenSet = true;
    m_collectorId = std::forward<CollectorIdT>(value);
  }
  template <typename CollectorIdT = Aws::String>
  UpdateCollectorRequest& WithCollectorId(CollectorIdT&& value) {
    SetCollectorId(std::forward<CollectorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new customer-visible name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateCollectorRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Atomic update to the IAM role configuration used to collect Kubernetes
   * cluster metadata. The set variant requires a complete configuration; the
   * authenticated caller must be allowed to pass its exact roleArn to Continuum. The
   * remove variant clears both the role and external ID.</p>
   */
  inline const KubernetesClusterRoleUpdate& GetKubernetesClusterRole() const { return m_kubernetesClusterRole; }
  inline bool KubernetesClusterRoleHasBeenSet() const { return m_kubernetesClusterRoleHasBeenSet; }
  template <typename KubernetesClusterRoleT = KubernetesClusterRoleUpdate>
  void SetKubernetesClusterRole(KubernetesClusterRoleT&& value) {
    m_kubernetesClusterRoleHasBeenSet = true;
    m_kubernetesClusterRole = std::forward<KubernetesClusterRoleT>(value);
  }
  template <typename KubernetesClusterRoleT = KubernetesClusterRoleUpdate>
  UpdateCollectorRequest& WithKubernetesClusterRole(KubernetesClusterRoleT&& value) {
    SetKubernetesClusterRole(std::forward<KubernetesClusterRoleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_collectorId;

  Aws::String m_name;

  KubernetesClusterRoleUpdate m_kubernetesClusterRole;
  bool m_collectorIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_kubernetesClusterRoleHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
