/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/FirewallDeploymentModel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace FMS {
namespace Model {

/**
 * <p>Configures the deployment model for the third-party firewall.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/ThirdPartyFirewallPolicy">AWS
 * API Reference</a></p>
 */
class ThirdPartyFirewallPolicy {
 public:
  AWS_FMS_API ThirdPartyFirewallPolicy() = default;
  AWS_FMS_API ThirdPartyFirewallPolicy(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_FMS_API ThirdPartyFirewallPolicy& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_FMS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Defines the deployment model to use for the third-party firewall policy.</p>
   */
  inline FirewallDeploymentModel GetFirewallDeploymentModel() const { return m_firewallDeploymentModel; }
  inline bool FirewallDeploymentModelHasBeenSet() const { return m_firewallDeploymentModelHasBeenSet; }
  inline void SetFirewallDeploymentModel(FirewallDeploymentModel value) {
    m_firewallDeploymentModelHasBeenSet = true;
    m_firewallDeploymentModel = value;
  }
  inline ThirdPartyFirewallPolicy& WithFirewallDeploymentModel(FirewallDeploymentModel value) {
    SetFirewallDeploymentModel(value);
    return *this;
  }
  ///@}
 private:
  FirewallDeploymentModel m_firewallDeploymentModel{FirewallDeploymentModel::NOT_SET};
  bool m_firewallDeploymentModelHasBeenSet = false;
};

}  // namespace Model
}  // namespace FMS
}  // namespace Aws
