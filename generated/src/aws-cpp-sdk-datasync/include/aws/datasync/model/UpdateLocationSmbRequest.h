/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/SmbMountOptions.h>
#include <aws/datasync/model/SmbAuthenticationType.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationSmbRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationSmbRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationSmb"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    UpdateLocationSmbRequest& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">Providing
     * DataSync access to SMB file servers</a>.</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    UpdateLocationSmbRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the domain name or IP address (IPv4 or IPv6) of the SMB file server
     * that your DataSync agent connects to.</p>  <p>If you're using Kerberos
     * authentication, you must specify a domain name.</p> 
     */
    inline const Aws::String& GetServerHostname() const { return m_serverHostname; }
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }
    template<typename ServerHostnameT = Aws::String>
    void SetServerHostname(ServerHostnameT&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::forward<ServerHostnameT>(value); }
    template<typename ServerHostnameT = Aws::String>
    UpdateLocationSmbRequest& WithServerHostname(ServerHostnameT&& value) { SetServerHostname(std::forward<ServerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer. This
     * parameter applies only if <code>AuthenticationType</code> is set to
     * <code>NTLM</code>.</p> <p>For information about choosing a user with the right
     * level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">Providing
     * DataSync access to SMB file servers</a>.</p>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    UpdateLocationSmbRequest& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. This
     * parameter applies only if <code>AuthenticationType</code> is set to
     * <code>NTLM</code>.</p> <p>If you have multiple domains in your environment,
     * configuring this parameter makes sure that DataSync connects to the right file
     * server.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    UpdateLocationSmbRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer. This
     * parameter applies only if <code>AuthenticationType</code> is set to
     * <code>NTLM</code>.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    UpdateLocationSmbRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DataSync agent (or agents) that can connect to your SMB file
     * server. You specify an agent by using its Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    UpdateLocationSmbRequest& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    UpdateLocationSmbRequest& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const SmbMountOptions& GetMountOptions() const { return m_mountOptions; }
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
    template<typename MountOptionsT = SmbMountOptions>
    void SetMountOptions(MountOptionsT&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::forward<MountOptionsT>(value); }
    template<typename MountOptionsT = SmbMountOptions>
    UpdateLocationSmbRequest& WithMountOptions(MountOptionsT&& value) { SetMountOptions(std::forward<MountOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication protocol that DataSync uses to connect to your
     * SMB file server. DataSync supports <code>NTLM</code> (default) and
     * <code>KERBEROS</code> authentication.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">Providing
     * DataSync access to SMB file servers</a>.</p>
     */
    inline SmbAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(SmbAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline UpdateLocationSmbRequest& WithAuthenticationType(SmbAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IP addresses (IPv4 or IPv6) for the DNS servers that your SMB
     * file server belongs to. This parameter applies only if
     * <code>AuthenticationType</code> is set to <code>KERBEROS</code>.</p> <p>If you
     * have multiple domains in your environment, configuring this parameter makes sure
     * that DataSync connects to the right SMB file server. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const { return m_dnsIpAddresses; }
    inline bool DnsIpAddressesHasBeenSet() const { return m_dnsIpAddressesHasBeenSet; }
    template<typename DnsIpAddressesT = Aws::Vector<Aws::String>>
    void SetDnsIpAddresses(DnsIpAddressesT&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = std::forward<DnsIpAddressesT>(value); }
    template<typename DnsIpAddressesT = Aws::Vector<Aws::String>>
    UpdateLocationSmbRequest& WithDnsIpAddresses(DnsIpAddressesT&& value) { SetDnsIpAddresses(std::forward<DnsIpAddressesT>(value)); return *this;}
    template<typename DnsIpAddressesT = Aws::String>
    UpdateLocationSmbRequest& AddDnsIpAddresses(DnsIpAddressesT&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.emplace_back(std::forward<DnsIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a Kerberos prinicpal, which is an identity in your Kerberos realm
     * that has permission to access the files, folders, and file metadata in your SMB
     * file server.</p> <p>A Kerberos principal might look like
     * <code>HOST/kerberosuser@MYDOMAIN.ORG</code>.</p> <p>Principal names are case
     * sensitive. Your DataSync task execution will fail if the principal that you
     * specify for this parameter doesn’t exactly match the principal that you use to
     * create the keytab file.</p>
     */
    inline const Aws::String& GetKerberosPrincipal() const { return m_kerberosPrincipal; }
    inline bool KerberosPrincipalHasBeenSet() const { return m_kerberosPrincipalHasBeenSet; }
    template<typename KerberosPrincipalT = Aws::String>
    void SetKerberosPrincipal(KerberosPrincipalT&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::forward<KerberosPrincipalT>(value); }
    template<typename KerberosPrincipalT = Aws::String>
    UpdateLocationSmbRequest& WithKerberosPrincipal(KerberosPrincipalT&& value) { SetKerberosPrincipal(std::forward<KerberosPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your Kerberos key table (keytab) file, which includes mappings
     * between your Kerberos principal and encryption keys.</p> <p>To avoid task
     * execution errors, make sure that the Kerberos principal that you use to create
     * the keytab file matches exactly what you specify for
     * <code>KerberosPrincipal</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKeytab() const { return m_kerberosKeytab; }
    inline bool KerberosKeytabHasBeenSet() const { return m_kerberosKeytabHasBeenSet; }
    template<typename KerberosKeytabT = Aws::Utils::ByteBuffer>
    void SetKerberosKeytab(KerberosKeytabT&& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = std::forward<KerberosKeytabT>(value); }
    template<typename KerberosKeytabT = Aws::Utils::ByteBuffer>
    UpdateLocationSmbRequest& WithKerberosKeytab(KerberosKeytabT&& value) { SetKerberosKeytab(std::forward<KerberosKeytabT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Kerberos configuration file (<code>krb5.conf</code>) that defines
     * your Kerberos realm configuration.</p> <p>The file must be base64 encoded. If
     * you're using the CLI, the encoding is done for you.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKrb5Conf() const { return m_kerberosKrb5Conf; }
    inline bool KerberosKrb5ConfHasBeenSet() const { return m_kerberosKrb5ConfHasBeenSet; }
    template<typename KerberosKrb5ConfT = Aws::Utils::ByteBuffer>
    void SetKerberosKrb5Conf(KerberosKrb5ConfT&& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = std::forward<KerberosKrb5ConfT>(value); }
    template<typename KerberosKrb5ConfT = Aws::Utils::ByteBuffer>
    UpdateLocationSmbRequest& WithKerberosKrb5Conf(KerberosKrb5ConfT&& value) { SetKerberosKrb5Conf(std::forward<KerberosKrb5ConfT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    SmbMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;

    SmbAuthenticationType m_authenticationType{SmbAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddresses;
    bool m_dnsIpAddressesHasBeenSet = false;

    Aws::String m_kerberosPrincipal;
    bool m_kerberosPrincipalHasBeenSet = false;

    Aws::Utils::ByteBuffer m_kerberosKeytab{};
    bool m_kerberosKeytabHasBeenSet = false;

    Aws::Utils::ByteBuffer m_kerberosKrb5Conf{};
    bool m_kerberosKrb5ConfHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
