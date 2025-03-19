/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ManagedGrafana
{
namespace Model
{

  /**
   * <p>The configuration settings for in-bound network access to your workspace.</p>
   * <p>When this is configured, only listed IP addresses and VPC endpoints will be
   * able to access your workspace. Standard Grafana authentication and authorization
   * are still required.</p> <p>Access is granted to a caller that is in either the
   * IP address list or the VPC endpoint list - they do not need to be in both.</p>
   * <p>If this is not configured, or is removed, then all IP addresses and VPC
   * endpoints are allowed. Standard Grafana authentication and authorization are
   * still required.</p>  <p>While both <code>prefixListIds</code> and
   * <code>vpceIds</code> are required, you can pass in an empty array of strings for
   * either parameter if you do not want to allow any of that type.</p> <p>If both
   * are passed as empty arrays, no traffic is allowed to the workspace, because only
   * <i>explicitly</i> allowed connections are accepted.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/grafana-2020-08-18/NetworkAccessConfiguration">AWS
   * API Reference</a></p>
   */
  class NetworkAccessConfiguration
  {
  public:
    AWS_MANAGEDGRAFANA_API NetworkAccessConfiguration() = default;
    AWS_MANAGEDGRAFANA_API NetworkAccessConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API NetworkAccessConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDGRAFANA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of prefix list IDs. A prefix list is a list of CIDR ranges of IP
     * addresses. The IP addresses specified are allowed to access your workspace. If
     * the list is not included in the configuration (passed an empty array) then no IP
     * addresses are allowed to access the workspace. You create a prefix list using
     * the Amazon VPC console.</p> <p>Prefix list IDs have the format
     * <code>pl-<i>1a2b3c4d</i> </code>.</p> <p>For more information about prefix
     * lists, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/managed-prefix-lists.html">Group
     * CIDR blocks using managed prefix lists</a>in the <i>Amazon Virtual Private Cloud
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrefixListIds() const { return m_prefixListIds; }
    inline bool PrefixListIdsHasBeenSet() const { return m_prefixListIdsHasBeenSet; }
    template<typename PrefixListIdsT = Aws::Vector<Aws::String>>
    void SetPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds = std::forward<PrefixListIdsT>(value); }
    template<typename PrefixListIdsT = Aws::Vector<Aws::String>>
    NetworkAccessConfiguration& WithPrefixListIds(PrefixListIdsT&& value) { SetPrefixListIds(std::forward<PrefixListIdsT>(value)); return *this;}
    template<typename PrefixListIdsT = Aws::String>
    NetworkAccessConfiguration& AddPrefixListIds(PrefixListIdsT&& value) { m_prefixListIdsHasBeenSet = true; m_prefixListIds.emplace_back(std::forward<PrefixListIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of Amazon VPC endpoint IDs for the workspace. You can create VPC
     * endpoints to your Amazon Managed Grafana workspace for access from within a VPC.
     * If a <code>NetworkAccessConfiguration</code> is specified then only VPC
     * endpoints specified here are allowed to access the workspace. If you pass in an
     * empty array of strings, then no VPCs are allowed to access the workspace.</p>
     * <p>VPC endpoint IDs have the format <code>vpce-<i>1a2b3c4d</i> </code>.</p>
     * <p>For more information about creating an interface VPC endpoint, see <a
     * href="https://docs.aws.amazon.com/grafana/latest/userguide/VPC-endpoints">Interface
     * VPC endpoints</a> in the <i>Amazon Managed Grafana User Guide</i>.</p> 
     * <p>The only VPC endpoints that can be specified here are interface VPC endpoints
     * for Grafana workspaces (using the
     * <code>com.amazonaws.[region].grafana-workspace</code> service endpoint). Other
     * VPC endpoints are ignored.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetVpceIds() const { return m_vpceIds; }
    inline bool VpceIdsHasBeenSet() const { return m_vpceIdsHasBeenSet; }
    template<typename VpceIdsT = Aws::Vector<Aws::String>>
    void SetVpceIds(VpceIdsT&& value) { m_vpceIdsHasBeenSet = true; m_vpceIds = std::forward<VpceIdsT>(value); }
    template<typename VpceIdsT = Aws::Vector<Aws::String>>
    NetworkAccessConfiguration& WithVpceIds(VpceIdsT&& value) { SetVpceIds(std::forward<VpceIdsT>(value)); return *this;}
    template<typename VpceIdsT = Aws::String>
    NetworkAccessConfiguration& AddVpceIds(VpceIdsT&& value) { m_vpceIdsHasBeenSet = true; m_vpceIds.emplace_back(std::forward<VpceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_prefixListIds;
    bool m_prefixListIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpceIds;
    bool m_vpceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
