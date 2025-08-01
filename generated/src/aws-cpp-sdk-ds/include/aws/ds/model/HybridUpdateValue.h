/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the configuration values for a hybrid directory update, including
   * Amazon Web Services System Manager managed node and DNS
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/HybridUpdateValue">AWS
   * API Reference</a></p>
   */
  class HybridUpdateValue
  {
  public:
    AWS_DIRECTORYSERVICE_API HybridUpdateValue() = default;
    AWS_DIRECTORYSERVICE_API HybridUpdateValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API HybridUpdateValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifiers of the self-managed instances with SSM in the hybrid
     * directory configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    HybridUpdateValue& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    HybridUpdateValue& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the DNS servers or domain controllers in the hybrid
     * directory configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const { return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    void SetDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::forward<DnsIpsT>(value); }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    HybridUpdateValue& WithDnsIps(DnsIpsT&& value) { SetDnsIps(std::forward<DnsIpsT>(value)); return *this;}
    template<typename DnsIpsT = Aws::String>
    HybridUpdateValue& AddDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.emplace_back(std::forward<DnsIpsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
