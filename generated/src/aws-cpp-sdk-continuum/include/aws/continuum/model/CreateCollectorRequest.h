/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/CollectorType.h>
#include <aws/continuum/model/KubernetesClusterRoleConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Creates a Collector for the authenticated caller.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateCollectorInput">AWS
 * API Reference</a></p>
 */
class CreateCollectorRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API CreateCollectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCollector"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Source to collect. Defaults to AWS_COLLECTOR when omitted.</p>
   */
  inline CollectorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CollectorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateCollectorRequest& WithType(CollectorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role configuration used to collect Kubernetes cluster metadata. The
   * authenticated caller must be allowed to pass its exact roleArn to Continuum.</p>
   */
  inline const KubernetesClusterRoleConfiguration& GetKubernetesClusterRole() const { return m_kubernetesClusterRole; }
  inline bool KubernetesClusterRoleHasBeenSet() const { return m_kubernetesClusterRoleHasBeenSet; }
  template <typename KubernetesClusterRoleT = KubernetesClusterRoleConfiguration>
  void SetKubernetesClusterRole(KubernetesClusterRoleT&& value) {
    m_kubernetesClusterRoleHasBeenSet = true;
    m_kubernetesClusterRole = std::forward<KubernetesClusterRoleT>(value);
  }
  template <typename KubernetesClusterRoleT = KubernetesClusterRoleConfiguration>
  CreateCollectorRequest& WithKubernetesClusterRole(KubernetesClusterRoleT&& value) {
    SetKubernetesClusterRole(std::forward<KubernetesClusterRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller-provided token that makes retried create requests return the original
   * Collector rather than creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCollectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  CollectorType m_type{CollectorType::NOT_SET};

  KubernetesClusterRoleConfiguration m_kubernetesClusterRole;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_typeHasBeenSet = false;
  bool m_kubernetesClusterRoleHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
