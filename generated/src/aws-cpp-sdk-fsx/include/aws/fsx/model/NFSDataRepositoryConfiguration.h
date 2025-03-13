/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/NfsVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/AutoExportPolicy.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for a data repository association that links an Amazon File
   * Cache resource to an NFS data repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/NFSDataRepositoryConfiguration">AWS
   * API Reference</a></p>
   */
  class NFSDataRepositoryConfiguration
  {
  public:
    AWS_FSX_API NFSDataRepositoryConfiguration() = default;
    AWS_FSX_API NFSDataRepositoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API NFSDataRepositoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline NfsVersion GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(NfsVersion value) { m_versionHasBeenSet = true; m_version = value; }
    inline NFSDataRepositoryConfiguration& WithVersion(NfsVersion value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const { return m_dnsIps; }
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    void SetDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::forward<DnsIpsT>(value); }
    template<typename DnsIpsT = Aws::Vector<Aws::String>>
    NFSDataRepositoryConfiguration& WithDnsIps(DnsIpsT&& value) { SetDnsIps(std::forward<DnsIpsT>(value)); return *this;}
    template<typename DnsIpsT = Aws::String>
    NFSDataRepositoryConfiguration& AddDnsIps(DnsIpsT&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.emplace_back(std::forward<DnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline const AutoExportPolicy& GetAutoExportPolicy() const { return m_autoExportPolicy; }
    inline bool AutoExportPolicyHasBeenSet() const { return m_autoExportPolicyHasBeenSet; }
    template<typename AutoExportPolicyT = AutoExportPolicy>
    void SetAutoExportPolicy(AutoExportPolicyT&& value) { m_autoExportPolicyHasBeenSet = true; m_autoExportPolicy = std::forward<AutoExportPolicyT>(value); }
    template<typename AutoExportPolicyT = AutoExportPolicy>
    NFSDataRepositoryConfiguration& WithAutoExportPolicy(AutoExportPolicyT&& value) { SetAutoExportPolicy(std::forward<AutoExportPolicyT>(value)); return *this;}
    ///@}
  private:

    NfsVersion m_version{NfsVersion::NOT_SET};
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;

    AutoExportPolicy m_autoExportPolicy;
    bool m_autoExportPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
