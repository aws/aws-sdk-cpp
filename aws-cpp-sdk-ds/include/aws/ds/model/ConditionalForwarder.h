/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/ReplicationScope.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Points to a remote domain with which you are setting up a trust relationship.
   * Conditional forwarders are required in order to set up a trust relationship with
   * another domain.</p>
   */
  class AWS_DIRECTORYSERVICE_API ConditionalForwarder
  {
  public:
    ConditionalForwarder();
    ConditionalForwarder(const Aws::Utils::Json::JsonValue& jsonValue);
    ConditionalForwarder& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline const Aws::String& GetRemoteDomainName() const{ return m_remoteDomainName; }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline void SetRemoteDomainName(const Aws::String& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline void SetRemoteDomainName(Aws::String&& value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName = value; }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline void SetRemoteDomainName(const char* value) { m_remoteDomainNameHasBeenSet = true; m_remoteDomainName.assign(value); }

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline ConditionalForwarder& WithRemoteDomainName(const Aws::String& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline ConditionalForwarder& WithRemoteDomainName(Aws::String&& value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The fully qualified domain name (FQDN) of the remote domains pointed to by
     * the conditional forwarder.</p>
     */
    inline ConditionalForwarder& WithRemoteDomainName(const char* value) { SetRemoteDomainName(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline ConditionalForwarder& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline ConditionalForwarder& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline ConditionalForwarder& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline ConditionalForwarder& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the remote DNS server associated with RemoteDomainName.
     * This is the IP address of the DNS server that your conditional forwarder points
     * to.</p>
     */
    inline ConditionalForwarder& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The replication scope of the conditional forwarder. The only allowed value is
     * <code>Domain</code>, which will replicate the conditional forwarder to all of
     * the domain controllers for your AWS directory.</p>
     */
    inline const ReplicationScope& GetReplicationScope() const{ return m_replicationScope; }

    /**
     * <p>The replication scope of the conditional forwarder. The only allowed value is
     * <code>Domain</code>, which will replicate the conditional forwarder to all of
     * the domain controllers for your AWS directory.</p>
     */
    inline void SetReplicationScope(const ReplicationScope& value) { m_replicationScopeHasBeenSet = true; m_replicationScope = value; }

    /**
     * <p>The replication scope of the conditional forwarder. The only allowed value is
     * <code>Domain</code>, which will replicate the conditional forwarder to all of
     * the domain controllers for your AWS directory.</p>
     */
    inline void SetReplicationScope(ReplicationScope&& value) { m_replicationScopeHasBeenSet = true; m_replicationScope = value; }

    /**
     * <p>The replication scope of the conditional forwarder. The only allowed value is
     * <code>Domain</code>, which will replicate the conditional forwarder to all of
     * the domain controllers for your AWS directory.</p>
     */
    inline ConditionalForwarder& WithReplicationScope(const ReplicationScope& value) { SetReplicationScope(value); return *this;}

    /**
     * <p>The replication scope of the conditional forwarder. The only allowed value is
     * <code>Domain</code>, which will replicate the conditional forwarder to all of
     * the domain controllers for your AWS directory.</p>
     */
    inline ConditionalForwarder& WithReplicationScope(ReplicationScope&& value) { SetReplicationScope(value); return *this;}

  private:
    Aws::String m_remoteDomainName;
    bool m_remoteDomainNameHasBeenSet;
    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet;
    ReplicationScope m_replicationScope;
    bool m_replicationScopeHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
