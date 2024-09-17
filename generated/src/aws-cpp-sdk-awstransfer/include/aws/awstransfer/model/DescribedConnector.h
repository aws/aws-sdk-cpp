/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/As2ConnectorConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/SftpConnectorConfig.h>
#include <aws/awstransfer/model/Tag.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Describes the parameters for the connector, as identified by the
   * <code>ConnectorId</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedConnector">AWS
   * API Reference</a></p>
   */
  class DescribedConnector
  {
  public:
    AWS_TRANSFER_API DescribedConnector();
    AWS_TRANSFER_API DescribedConnector(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedConnector& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) for the connector.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribedConnector& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribedConnector& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribedConnector& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }
    inline DescribedConnector& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}
    inline DescribedConnector& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}
    inline DescribedConnector& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the partner's AS2 or SFTP endpoint.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline DescribedConnector& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline DescribedConnector& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline DescribedConnector& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the parameters for an AS2 connector object.</p>
     */
    inline const As2ConnectorConfig& GetAs2Config() const{ return m_as2Config; }
    inline bool As2ConfigHasBeenSet() const { return m_as2ConfigHasBeenSet; }
    inline void SetAs2Config(const As2ConnectorConfig& value) { m_as2ConfigHasBeenSet = true; m_as2Config = value; }
    inline void SetAs2Config(As2ConnectorConfig&& value) { m_as2ConfigHasBeenSet = true; m_as2Config = std::move(value); }
    inline DescribedConnector& WithAs2Config(const As2ConnectorConfig& value) { SetAs2Config(value); return *this;}
    inline DescribedConnector& WithAs2Config(As2ConnectorConfig&& value) { SetAs2Config(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connectors are used to send files using either the AS2 or SFTP protocol. For
     * the access role, provide the Amazon Resource Name (ARN) of the Identity and
     * Access Management role to use.</p> <p> <b>For AS2 connectors</b> </p> <p>With
     * AS2, you can send files by calling <code>StartFileTransfer</code> and specifying
     * the file paths in the request parameter, <code>SendFilePaths</code>. We use the
     * file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p> <p>If you are using Basic
     * authentication for your AS2 connector, the access role requires the
     * <code>secretsmanager:GetSecretValue</code> permission for the secret. If the
     * secret is encrypted using a customer-managed key instead of the Amazon Web
     * Services managed key in Secrets Manager, then the role also needs the
     * <code>kms:Decrypt</code> permission for that key.</p> <p> <b>For SFTP
     * connectors</b> </p> <p>Make sure that the access role provides read and write
     * access to the parent directory of the file location that's used in the
     * <code>StartFileTransfer</code> request. Additionally, make sure that the role
     * provides <code>secretsmanager:GetSecretValue</code> permission to Secrets
     * Manager.</p>
     */
    inline const Aws::String& GetAccessRole() const{ return m_accessRole; }
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }
    inline void SetAccessRole(const Aws::String& value) { m_accessRoleHasBeenSet = true; m_accessRole = value; }
    inline void SetAccessRole(Aws::String&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::move(value); }
    inline void SetAccessRole(const char* value) { m_accessRoleHasBeenSet = true; m_accessRole.assign(value); }
    inline DescribedConnector& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}
    inline DescribedConnector& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}
    inline DescribedConnector& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }
    inline DescribedConnector& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}
    inline DescribedConnector& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}
    inline DescribedConnector& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for connectors.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DescribedConnector& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribedConnector& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribedConnector& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DescribedConnector& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the parameters for an SFTP connector object.</p>
     */
    inline const SftpConnectorConfig& GetSftpConfig() const{ return m_sftpConfig; }
    inline bool SftpConfigHasBeenSet() const { return m_sftpConfigHasBeenSet; }
    inline void SetSftpConfig(const SftpConnectorConfig& value) { m_sftpConfigHasBeenSet = true; m_sftpConfig = value; }
    inline void SetSftpConfig(SftpConnectorConfig&& value) { m_sftpConfigHasBeenSet = true; m_sftpConfig = std::move(value); }
    inline DescribedConnector& WithSftpConfig(const SftpConnectorConfig& value) { SetSftpConfig(value); return *this;}
    inline DescribedConnector& WithSftpConfig(SftpConnectorConfig&& value) { SetSftpConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of egress IP addresses of this connector. These IP addresses are
     * assigned automatically when you create the connector.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceManagedEgressIpAddresses() const{ return m_serviceManagedEgressIpAddresses; }
    inline bool ServiceManagedEgressIpAddressesHasBeenSet() const { return m_serviceManagedEgressIpAddressesHasBeenSet; }
    inline void SetServiceManagedEgressIpAddresses(const Aws::Vector<Aws::String>& value) { m_serviceManagedEgressIpAddressesHasBeenSet = true; m_serviceManagedEgressIpAddresses = value; }
    inline void SetServiceManagedEgressIpAddresses(Aws::Vector<Aws::String>&& value) { m_serviceManagedEgressIpAddressesHasBeenSet = true; m_serviceManagedEgressIpAddresses = std::move(value); }
    inline DescribedConnector& WithServiceManagedEgressIpAddresses(const Aws::Vector<Aws::String>& value) { SetServiceManagedEgressIpAddresses(value); return *this;}
    inline DescribedConnector& WithServiceManagedEgressIpAddresses(Aws::Vector<Aws::String>&& value) { SetServiceManagedEgressIpAddresses(std::move(value)); return *this;}
    inline DescribedConnector& AddServiceManagedEgressIpAddresses(const Aws::String& value) { m_serviceManagedEgressIpAddressesHasBeenSet = true; m_serviceManagedEgressIpAddresses.push_back(value); return *this; }
    inline DescribedConnector& AddServiceManagedEgressIpAddresses(Aws::String&& value) { m_serviceManagedEgressIpAddressesHasBeenSet = true; m_serviceManagedEgressIpAddresses.push_back(std::move(value)); return *this; }
    inline DescribedConnector& AddServiceManagedEgressIpAddresses(const char* value) { m_serviceManagedEgressIpAddressesHasBeenSet = true; m_serviceManagedEgressIpAddresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The text name of the security policy for the specified connector.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const{ return m_securityPolicyName; }
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }
    inline void SetSecurityPolicyName(const Aws::String& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = value; }
    inline void SetSecurityPolicyName(Aws::String&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::move(value); }
    inline void SetSecurityPolicyName(const char* value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName.assign(value); }
    inline DescribedConnector& WithSecurityPolicyName(const Aws::String& value) { SetSecurityPolicyName(value); return *this;}
    inline DescribedConnector& WithSecurityPolicyName(Aws::String&& value) { SetSecurityPolicyName(std::move(value)); return *this;}
    inline DescribedConnector& WithSecurityPolicyName(const char* value) { SetSecurityPolicyName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    As2ConnectorConfig m_as2Config;
    bool m_as2ConfigHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    SftpConnectorConfig m_sftpConfig;
    bool m_sftpConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceManagedEgressIpAddresses;
    bool m_serviceManagedEgressIpAddressesHasBeenSet = false;

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
