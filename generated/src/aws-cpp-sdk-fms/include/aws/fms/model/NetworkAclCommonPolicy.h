/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/fms/model/NetworkAclEntrySet.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FMS
{
namespace Model
{

  /**
   * <p>Defines a Firewall Manager network ACL policy. This is used in the
   * <code>PolicyOption</code> of a <code>SecurityServicePolicyData</code> for a
   * <code>Policy</code>, when the <code>SecurityServicePolicyData</code> type is set
   * to <code>NETWORK_ACL_COMMON</code>. </p> <p>For information about network ACLs,
   * see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-network-acls.html">Control
   * traffic to subnets using network ACLs</a> in the <i>Amazon Virtual Private Cloud
   * User Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/NetworkAclCommonPolicy">AWS
   * API Reference</a></p>
   */
  class NetworkAclCommonPolicy
  {
  public:
    AWS_FMS_API NetworkAclCommonPolicy() = default;
    AWS_FMS_API NetworkAclCommonPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API NetworkAclCommonPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The definition of the first and last rules for the network ACL policy. </p>
     */
    inline const NetworkAclEntrySet& GetNetworkAclEntrySet() const { return m_networkAclEntrySet; }
    inline bool NetworkAclEntrySetHasBeenSet() const { return m_networkAclEntrySetHasBeenSet; }
    template<typename NetworkAclEntrySetT = NetworkAclEntrySet>
    void SetNetworkAclEntrySet(NetworkAclEntrySetT&& value) { m_networkAclEntrySetHasBeenSet = true; m_networkAclEntrySet = std::forward<NetworkAclEntrySetT>(value); }
    template<typename NetworkAclEntrySetT = NetworkAclEntrySet>
    NetworkAclCommonPolicy& WithNetworkAclEntrySet(NetworkAclEntrySetT&& value) { SetNetworkAclEntrySet(std::forward<NetworkAclEntrySetT>(value)); return *this;}
    ///@}
  private:

    NetworkAclEntrySet m_networkAclEntrySet;
    bool m_networkAclEntrySetHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
