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
    AWS_FSX_API NFSDataRepositoryConfiguration();
    AWS_FSX_API NFSDataRepositoryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API NFSDataRepositoryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline const NfsVersion& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline void SetVersion(const NfsVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline void SetVersion(NfsVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline NFSDataRepositoryConfiguration& WithVersion(const NfsVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. Currently, the only supported value is <code>NFS3</code>, which
     * indicates that the data repository must support the NFSv3 protocol.</p>
     */
    inline NFSDataRepositoryConfiguration& WithVersion(NfsVersion&& value) { SetVersion(std::move(value)); return *this;}


    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIps() const{ return m_dnsIps; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline bool DnsIpsHasBeenSet() const { return m_dnsIpsHasBeenSet; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline void SetDnsIps(const Aws::Vector<Aws::String>& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = value; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline void SetDnsIps(Aws::Vector<Aws::String>&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps = std::move(value); }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline NFSDataRepositoryConfiguration& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline NFSDataRepositoryConfiguration& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline NFSDataRepositoryConfiguration& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline NFSDataRepositoryConfiguration& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline NFSDataRepositoryConfiguration& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }


    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline const AutoExportPolicy& GetAutoExportPolicy() const{ return m_autoExportPolicy; }

    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline bool AutoExportPolicyHasBeenSet() const { return m_autoExportPolicyHasBeenSet; }

    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline void SetAutoExportPolicy(const AutoExportPolicy& value) { m_autoExportPolicyHasBeenSet = true; m_autoExportPolicy = value; }

    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline void SetAutoExportPolicy(AutoExportPolicy&& value) { m_autoExportPolicyHasBeenSet = true; m_autoExportPolicy = std::move(value); }

    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline NFSDataRepositoryConfiguration& WithAutoExportPolicy(const AutoExportPolicy& value) { SetAutoExportPolicy(value); return *this;}

    /**
     * <p>This parameter is not supported for Amazon File Cache.</p>
     */
    inline NFSDataRepositoryConfiguration& WithAutoExportPolicy(AutoExportPolicy&& value) { SetAutoExportPolicy(std::move(value)); return *this;}

  private:

    NfsVersion m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;

    AutoExportPolicy m_autoExportPolicy;
    bool m_autoExportPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
