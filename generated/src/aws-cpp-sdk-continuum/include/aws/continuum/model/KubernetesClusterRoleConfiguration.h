/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Complete configuration for the IAM role Continuum assumes to collect
 * Kubernetes cluster metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/KubernetesClusterRoleConfiguration">AWS
 * API Reference</a></p>
 */
class KubernetesClusterRoleConfiguration {
 public:
  AWS_CONTINUUM_API KubernetesClusterRoleConfiguration() = default;
  AWS_CONTINUUM_API KubernetesClusterRoleConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API KubernetesClusterRoleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>IAM role the authenticated caller passes to Continuum.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  KubernetesClusterRoleConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional external ID Continuum supplies when assuming roleArn. This must
   * match the role trust policy when configured and does not replace the caller's
   * iam:PassRole permission.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  KubernetesClusterRoleConfiguration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  Aws::String m_externalId;
  bool m_roleArnHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
