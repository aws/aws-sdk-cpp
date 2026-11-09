/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the Collector ARN and data-access role to associate with this
 * Environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/AssociateCollectorInput">AWS
 * API Reference</a></p>
 */
class AssociateCollectorRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API AssociateCollectorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateCollector"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the Environment making the association.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  AssociateCollectorRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller-provided token that makes retried association requests idempotent. The
   * first successful request binds the token to the complete Collector ARN, supplied
   * role, and result for at least 24 hours. During that retry window, reusing it
   * with a different request fails with ConflictException. A matching replay still
   * requires the supplied role to have current Collector access. Once authorized, a
   * matching replay returns the stored result without changing association state.
   * Revocation can deny a replay; it does not remove the stored association or its
   * original result.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AssociateCollectorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Collector to associate with this Environment.</p>
   */
  inline const Aws::String& GetCollectorArn() const { return m_collectorArn; }
  inline bool CollectorArnHasBeenSet() const { return m_collectorArnHasBeenSet; }
  template <typename CollectorArnT = Aws::String>
  void SetCollectorArn(CollectorArnT&& value) {
    m_collectorArnHasBeenSet = true;
    m_collectorArn = std::forward<CollectorArnT>(value);
  }
  template <typename CollectorArnT = Aws::String>
  AssociateCollectorRequest& WithCollectorArn(CollectorArnT&& value) {
    SetCollectorArn(std::forward<CollectorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>IAM role in the Environment account that Continuum assumes before authorizing
   * access to associated Collector inventory. Every association, including a
   * same-account association, requires this role. The supplied ARN replaces the
   * Environment's previously stored role. The customer is responsible for granting
   * the role access to every Collector that should contribute data.</p>
   */
  inline const Aws::String& GetCollectorDataAccessRoleArn() const { return m_collectorDataAccessRoleArn; }
  inline bool CollectorDataAccessRoleArnHasBeenSet() const { return m_collectorDataAccessRoleArnHasBeenSet; }
  template <typename CollectorDataAccessRoleArnT = Aws::String>
  void SetCollectorDataAccessRoleArn(CollectorDataAccessRoleArnT&& value) {
    m_collectorDataAccessRoleArnHasBeenSet = true;
    m_collectorDataAccessRoleArn = std::forward<CollectorDataAccessRoleArnT>(value);
  }
  template <typename CollectorDataAccessRoleArnT = Aws::String>
  AssociateCollectorRequest& WithCollectorDataAccessRoleArn(CollectorDataAccessRoleArnT&& value) {
    SetCollectorDataAccessRoleArn(std::forward<CollectorDataAccessRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_collectorArn;

  Aws::String m_collectorDataAccessRoleArn;
  bool m_environmentIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_collectorArnHasBeenSet = false;
  bool m_collectorDataAccessRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
