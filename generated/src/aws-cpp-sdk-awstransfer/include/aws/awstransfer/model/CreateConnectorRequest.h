﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/As2ConnectorConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/SftpConnectorConfig.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class CreateConnectorRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConnector"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The URL of the partner's AS2 or SFTP endpoint.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    CreateConnectorRequest& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains the parameters for an AS2 connector object.</p>
     */
    inline const As2ConnectorConfig& GetAs2Config() const { return m_as2Config; }
    inline bool As2ConfigHasBeenSet() const { return m_as2ConfigHasBeenSet; }
    template<typename As2ConfigT = As2ConnectorConfig>
    void SetAs2Config(As2ConfigT&& value) { m_as2ConfigHasBeenSet = true; m_as2Config = std::forward<As2ConfigT>(value); }
    template<typename As2ConfigT = As2ConnectorConfig>
    CreateConnectorRequest& WithAs2Config(As2ConfigT&& value) { SetAs2Config(std::forward<As2ConfigT>(value)); return *this;}
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
    inline const Aws::String& GetAccessRole() const { return m_accessRole; }
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }
    template<typename AccessRoleT = Aws::String>
    void SetAccessRole(AccessRoleT&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::forward<AccessRoleT>(value); }
    template<typename AccessRoleT = Aws::String>
    CreateConnectorRequest& WithAccessRole(AccessRoleT&& value) { SetAccessRole(std::forward<AccessRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a connector to turn on CloudWatch logging for Amazon S3 events.
     * When set, you can view connector activity in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const { return m_loggingRole; }
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }
    template<typename LoggingRoleT = Aws::String>
    void SetLoggingRole(LoggingRoleT&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::forward<LoggingRoleT>(value); }
    template<typename LoggingRoleT = Aws::String>
    CreateConnectorRequest& WithLoggingRole(LoggingRoleT&& value) { SetLoggingRole(std::forward<LoggingRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pairs that can be used to group and search for connectors. Tags are
     * metadata attached to connectors for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateConnectorRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateConnectorRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure that contains the parameters for an SFTP connector object.</p>
     */
    inline const SftpConnectorConfig& GetSftpConfig() const { return m_sftpConfig; }
    inline bool SftpConfigHasBeenSet() const { return m_sftpConfigHasBeenSet; }
    template<typename SftpConfigT = SftpConnectorConfig>
    void SetSftpConfig(SftpConfigT&& value) { m_sftpConfigHasBeenSet = true; m_sftpConfig = std::forward<SftpConfigT>(value); }
    template<typename SftpConfigT = SftpConnectorConfig>
    CreateConnectorRequest& WithSftpConfig(SftpConfigT&& value) { SetSftpConfig(std::forward<SftpConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the security policy for the connector.</p>
     */
    inline const Aws::String& GetSecurityPolicyName() const { return m_securityPolicyName; }
    inline bool SecurityPolicyNameHasBeenSet() const { return m_securityPolicyNameHasBeenSet; }
    template<typename SecurityPolicyNameT = Aws::String>
    void SetSecurityPolicyName(SecurityPolicyNameT&& value) { m_securityPolicyNameHasBeenSet = true; m_securityPolicyName = std::forward<SecurityPolicyNameT>(value); }
    template<typename SecurityPolicyNameT = Aws::String>
    CreateConnectorRequest& WithSecurityPolicyName(SecurityPolicyNameT&& value) { SetSecurityPolicyName(std::forward<SecurityPolicyNameT>(value)); return *this;}
    ///@}
  private:

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

    Aws::String m_securityPolicyName;
    bool m_securityPolicyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
