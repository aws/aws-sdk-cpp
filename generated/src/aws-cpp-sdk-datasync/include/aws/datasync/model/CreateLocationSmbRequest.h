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
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateLocationSmbRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationSmbRequest">AWS
   * API Reference</a></p>
   */
  class CreateLocationSmbRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationSmbRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationSmb"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">Providing
     * DataSync access to SMB file servers</a>.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline CreateLocationSmbRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline CreateLocationSmbRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the domain name or IP address of the SMB file server that your
     * DataSync agent will mount.</p> <p>Remember the following when configuring this
     * parameter:</p> <ul> <li> <p>You can't specify an IP version 6 (IPv6)
     * address.</p> </li> <li> <p>If you're using Kerberos authentication, you must
     * specify a domain name.</p> </li> </ul>
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }
    inline CreateLocationSmbRequest& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}
    inline CreateLocationSmbRequest& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server. This parameter applies only if
     * <code>AuthenticationType</code> is set to <code>NTLM</code>.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">Providing
     * DataSync access to SMB file servers</a>.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline CreateLocationSmbRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline CreateLocationSmbRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. This
     * parameter applies only if <code>AuthenticationType</code> is set to
     * <code>NTLM</code>.</p> <p>If you have multiple domains in your environment,
     * configuring this parameter makes sure that DataSync connects to the right file
     * server.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreateLocationSmbRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreateLocationSmbRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer. This
     * parameter applies only if <code>AuthenticationType</code> is set to
     * <code>NTLM</code>.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateLocationSmbRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateLocationSmbRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DataSync agent (or agents) that can connect to your SMB file
     * server. You specify an agent by using its Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }
    inline CreateLocationSmbRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline CreateLocationSmbRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline CreateLocationSmbRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline CreateLocationSmbRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }
    inline CreateLocationSmbRequest& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}
    inline CreateLocationSmbRequest& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateLocationSmbRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}
    inline CreateLocationSmbRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateLocationSmbRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication protocol that DataSync uses to connect to your
     * SMB file server. DataSync supports <code>NTLM</code> (default) and
     * <code>KERBEROS</code> authentication.</p>
     */
    inline const SmbAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const SmbAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(SmbAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline CreateLocationSmbRequest& WithAuthenticationType(const SmbAuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline CreateLocationSmbRequest& WithAuthenticationType(SmbAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IPv4 addresses for the DNS servers that your SMB file server
     * belongs to. This parameter applies only if <code>AuthenticationType</code> is
     * set to <code>KERBEROS</code>.</p> <p>If you have multiple domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right SMB file server.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddresses() const{ return m_dnsIpAddresses; }
    inline bool DnsIpAddressesHasBeenSet() const { return m_dnsIpAddressesHasBeenSet; }
    inline void SetDnsIpAddresses(const Aws::Vector<Aws::String>& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = value; }
    inline void SetDnsIpAddresses(Aws::Vector<Aws::String>&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses = std::move(value); }
    inline CreateLocationSmbRequest& WithDnsIpAddresses(const Aws::Vector<Aws::String>& value) { SetDnsIpAddresses(value); return *this;}
    inline CreateLocationSmbRequest& WithDnsIpAddresses(Aws::Vector<Aws::String>&& value) { SetDnsIpAddresses(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& AddDnsIpAddresses(const Aws::String& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }
    inline CreateLocationSmbRequest& AddDnsIpAddresses(Aws::String&& value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(std::move(value)); return *this; }
    inline CreateLocationSmbRequest& AddDnsIpAddresses(const char* value) { m_dnsIpAddressesHasBeenSet = true; m_dnsIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies a Kerberos prinicpal, which is an identity in your Kerberos realm
     * that has permission to access the files, folders, and file metadata in your SMB
     * file server.</p> <p>A Kerberos principal might look like
     * <code>HOST/kerberosuser@EXAMPLE.COM</code>.</p> <p>Principal names are case
     * sensitive. Your DataSync task execution will fail if the principal that you
     * specify for this parameter doesn’t exactly match the principal that you use to
     * create the keytab file.</p>
     */
    inline const Aws::String& GetKerberosPrincipal() const{ return m_kerberosPrincipal; }
    inline bool KerberosPrincipalHasBeenSet() const { return m_kerberosPrincipalHasBeenSet; }
    inline void SetKerberosPrincipal(const Aws::String& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = value; }
    inline void SetKerberosPrincipal(Aws::String&& value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal = std::move(value); }
    inline void SetKerberosPrincipal(const char* value) { m_kerberosPrincipalHasBeenSet = true; m_kerberosPrincipal.assign(value); }
    inline CreateLocationSmbRequest& WithKerberosPrincipal(const Aws::String& value) { SetKerberosPrincipal(value); return *this;}
    inline CreateLocationSmbRequest& WithKerberosPrincipal(Aws::String&& value) { SetKerberosPrincipal(std::move(value)); return *this;}
    inline CreateLocationSmbRequest& WithKerberosPrincipal(const char* value) { SetKerberosPrincipal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies your Kerberos key table (keytab) file, which includes mappings
     * between your Kerberos principal and encryption keys.</p> <p>The file must be
     * base64 encoded. If you're using the CLI, the encoding is done for you.</p> <p>To
     * avoid task execution errors, make sure that the Kerberos principal that you use
     * to create the keytab file matches exactly what you specify for
     * <code>KerberosPrincipal</code>. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKeytab() const{ return m_kerberosKeytab; }
    inline bool KerberosKeytabHasBeenSet() const { return m_kerberosKeytabHasBeenSet; }
    inline void SetKerberosKeytab(const Aws::Utils::ByteBuffer& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = value; }
    inline void SetKerberosKeytab(Aws::Utils::ByteBuffer&& value) { m_kerberosKeytabHasBeenSet = true; m_kerberosKeytab = std::move(value); }
    inline CreateLocationSmbRequest& WithKerberosKeytab(const Aws::Utils::ByteBuffer& value) { SetKerberosKeytab(value); return *this;}
    inline CreateLocationSmbRequest& WithKerberosKeytab(Aws::Utils::ByteBuffer&& value) { SetKerberosKeytab(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a Kerberos configuration file (<code>krb5.conf</code>) that defines
     * your Kerberos realm configuration.</p> <p>The file must be base64 encoded. If
     * you're using the CLI, the encoding is done for you.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetKerberosKrb5Conf() const{ return m_kerberosKrb5Conf; }
    inline bool KerberosKrb5ConfHasBeenSet() const { return m_kerberosKrb5ConfHasBeenSet; }
    inline void SetKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = value; }
    inline void SetKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { m_kerberosKrb5ConfHasBeenSet = true; m_kerberosKrb5Conf = std::move(value); }
    inline CreateLocationSmbRequest& WithKerberosKrb5Conf(const Aws::Utils::ByteBuffer& value) { SetKerberosKrb5Conf(value); return *this;}
    inline CreateLocationSmbRequest& WithKerberosKrb5Conf(Aws::Utils::ByteBuffer&& value) { SetKerberosKrb5Conf(std::move(value)); return *this;}
    ///@}
  private:

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

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;

    SmbAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddresses;
    bool m_dnsIpAddressesHasBeenSet = false;

    Aws::String m_kerberosPrincipal;
    bool m_kerberosPrincipalHasBeenSet = false;

    Aws::Utils::ByteBuffer m_kerberosKeytab;
    bool m_kerberosKeytabHasBeenSet = false;

    Aws::Utils::ByteBuffer m_kerberosKrb5Conf;
    bool m_kerberosKrb5ConfHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
