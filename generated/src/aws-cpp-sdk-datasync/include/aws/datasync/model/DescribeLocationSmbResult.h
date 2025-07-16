/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/SmbMountOptions.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/SmbAuthenticationType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationSmbResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationSmbResponse">AWS
   * API Reference</a></p>
   */
  class DescribeLocationSmbResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationSmbResult() = default;
    AWS_DATASYNC_API DescribeLocationSmbResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationSmbResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the SMB location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationSmbResult& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the SMB location.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationSmbResult& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your SMB file
     * server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    DescribeLocationSmbResult& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    DescribeLocationSmbResult& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user that can mount and access the files, folders, and file metadata in
     * your SMB file server. This element applies only if
     * <code>AuthenticationType</code> is set to <code>NTLM</code>.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    DescribeLocationSmbResult& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Windows domain that the SMB file server belongs to. This
     * element applies only if <code>AuthenticationType</code> is set to
     * <code>NTLM</code>.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DescribeLocationSmbResult& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SMB protocol version that DataSync uses to access your SMB file
     * server.</p>
     */
    inline const SmbMountOptions& GetMountOptions() const { return m_mountOptions; }
    template<typename MountOptionsT = SmbMountOptions>
    void SetMountOptions(MountOptionsT&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::forward<MountOptionsT>(value); }
    template<typename MountOptionsT = SmbMountOptions>
    DescribeLocationSmbResult& WithMountOptions(MountOptionsT&& value) { SetMountOptions(std::forward<MountOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the SMB location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationSmbResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 or IPv6 addresses for the DNS servers that your SMB file server
     * belongs to. This element applies only if <code>AuthenticationType</code> is set
     * to <code>KERBEROS</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const { return m_dnsIpAddresses; }
    template<typename DnsIpAddressesT = Aws::Vector<Aws::String>>
    void SetDnsIpAddresses(DnsIpAddressesT&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = std::forward<DnsIpAddressesT>(value); }
    template<typename DnsIpAddressesT = Aws::Vector<Aws::String>>
    DescribeLocationSmbResult& WithDnsIpAddresses(DnsIpAddressesT&& value) { SetDnsIpAddresses(std::forward<DnsIpAddressesT>(value)); return *this;}
    template<typename DnsIpAddressesT = Aws::String>
    DescribeLocationSmbResult& AddDnsIpAddresses(DnsIpAddressesT&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.emplace_back(std::forward<DnsIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Kerberos principal that has permission to access the files, folders, and
     * file metadata in your SMB file server.</p>
     */
    inline const Aws::String& GetKerberosPrincipal() const { return m_kerberosPrincipal; }
    template<typename KerberosPrincipalT = Aws::String>
    void SetKerberosPrincipal(KerberosPrincipalT&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::forward<KerberosPrincipalT>(value); }
    template<typename KerberosPrincipalT = Aws::String>
    DescribeLocationSmbResult& WithKerberosPrincipal(KerberosPrincipalT&& value) { SetKerberosPrincipal(std::forward<KerberosPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication protocol that DataSync uses to connect to your SMB file
     * server.</p>
     */
    inline SmbAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline void SetAuthenticationType(SmbAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline DescribeLocationSmbResult& WithAuthenticationType(SmbAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationSmbResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    SmbMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddresses;
    bool m_dnsIpAddressesHasBeenSet = false;

    Aws::String m_kerberosPrincipal;
    bool m_kerberosPrincipalHasBeenSet = false;

    SmbAuthenticationType m_authenticationType{SmbAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
