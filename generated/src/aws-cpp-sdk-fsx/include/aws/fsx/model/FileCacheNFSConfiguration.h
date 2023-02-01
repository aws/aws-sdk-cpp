/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/NfsVersion.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for an NFS data repository association (DRA) created during
   * the creation of the Amazon File Cache resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileCacheNFSConfiguration">AWS
   * API Reference</a></p>
   */
  class FileCacheNFSConfiguration
  {
  public:
    AWS_FSX_API FileCacheNFSConfiguration();
    AWS_FSX_API FileCacheNFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileCacheNFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. The only supported value is <code>NFS3</code>, which indicates that
     * the data repository must support the NFSv3 protocol.</p>
     */
    inline const NfsVersion& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. The only supported value is <code>NFS3</code>, which indicates that
     * the data repository must support the NFSv3 protocol.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. The only supported value is <code>NFS3</code>, which indicates that
     * the data repository must support the NFSv3 protocol.</p>
     */
    inline void SetVersion(const NfsVersion& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. The only supported value is <code>NFS3</code>, which indicates that
     * the data repository must support the NFSv3 protocol.</p>
     */
    inline void SetVersion(NfsVersion&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. The only supported value is <code>NFS3</code>, which indicates that
     * the data repository must support the NFSv3 protocol.</p>
     */
    inline FileCacheNFSConfiguration& WithVersion(const NfsVersion& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the NFS (Network File System) protocol of the NFS data
     * repository. The only supported value is <code>NFS3</code>, which indicates that
     * the data repository must support the NFSv3 protocol.</p>
     */
    inline FileCacheNFSConfiguration& WithVersion(NfsVersion&& value) { SetVersion(std::move(value)); return *this;}


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
    inline FileCacheNFSConfiguration& WithDnsIps(const Aws::Vector<Aws::String>& value) { SetDnsIps(value); return *this;}

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline FileCacheNFSConfiguration& WithDnsIps(Aws::Vector<Aws::String>&& value) { SetDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline FileCacheNFSConfiguration& AddDnsIps(const Aws::String& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline FileCacheNFSConfiguration& AddDnsIps(Aws::String&& value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 2 IP addresses of DNS servers used to resolve the NFS file
     * system domain name. The provided IP addresses can either be the IP addresses of
     * a DNS forwarder or resolver that the customer manages and runs inside the
     * customer VPC, or the IP addresses of the on-premises DNS servers.</p>
     */
    inline FileCacheNFSConfiguration& AddDnsIps(const char* value) { m_dnsIpsHasBeenSet = true; m_dnsIps.push_back(value); return *this; }

  private:

    NfsVersion m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIps;
    bool m_dnsIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
