/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/AgreementStatusType.h>
#include <aws/awstransfer/model/PreserveFilenameType.h>
#include <aws/awstransfer/model/EnforceMessageSigningType.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateAgreementRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateAgreementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgreement"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }
    inline UpdateAgreementRequest& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}
    inline UpdateAgreementRequest& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that the agreement uses.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }
    inline UpdateAgreementRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline UpdateAgreementRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To replace the existing description, provide a short description for the
     * agreement. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAgreementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAgreementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can update the status for the agreement, either activating an inactive
     * agreement or the reverse.</p>
     */
    inline const AgreementStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AgreementStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AgreementStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateAgreementRequest& WithStatus(const AgreementStatusType& value) { SetStatus(value); return *this;}
    inline UpdateAgreementRequest& WithStatus(AgreementStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the AS2 local profile.</p> <p>To change the local
     * profile identifier, provide a new value here.</p>
     */
    inline const Aws::String& GetLocalProfileId() const{ return m_localProfileId; }
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }
    inline void SetLocalProfileId(const Aws::String& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = value; }
    inline void SetLocalProfileId(Aws::String&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::move(value); }
    inline void SetLocalProfileId(const char* value) { m_localProfileIdHasBeenSet = true; m_localProfileId.assign(value); }
    inline UpdateAgreementRequest& WithLocalProfileId(const Aws::String& value) { SetLocalProfileId(value); return *this;}
    inline UpdateAgreementRequest& WithLocalProfileId(Aws::String&& value) { SetLocalProfileId(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithLocalProfileId(const char* value) { SetLocalProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the partner profile. To change the partner profile
     * identifier, provide a new value here.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const{ return m_partnerProfileId; }
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }
    inline void SetPartnerProfileId(const Aws::String& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = value; }
    inline void SetPartnerProfileId(Aws::String&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::move(value); }
    inline void SetPartnerProfileId(const char* value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId.assign(value); }
    inline UpdateAgreementRequest& WithPartnerProfileId(const Aws::String& value) { SetPartnerProfileId(value); return *this;}
    inline UpdateAgreementRequest& WithPartnerProfileId(Aws::String&& value) { SetPartnerProfileId(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithPartnerProfileId(const char* value) { SetPartnerProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To change the landing directory (folder) for files that are transferred,
     * provide the bucket folder that you want to use; for example,
     * <code>/<i>amzn-s3-demo-bucket</i>/<i>home</i>/<i>mydirectory</i> </code>.</p>
     */
    inline const Aws::String& GetBaseDirectory() const{ return m_baseDirectory; }
    inline bool BaseDirectoryHasBeenSet() const { return m_baseDirectoryHasBeenSet; }
    inline void SetBaseDirectory(const Aws::String& value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory = value; }
    inline void SetBaseDirectory(Aws::String&& value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory = std::move(value); }
    inline void SetBaseDirectory(const char* value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory.assign(value); }
    inline UpdateAgreementRequest& WithBaseDirectory(const Aws::String& value) { SetBaseDirectory(value); return *this;}
    inline UpdateAgreementRequest& WithBaseDirectory(Aws::String&& value) { SetBaseDirectory(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithBaseDirectory(const char* value) { SetBaseDirectory(value); return *this;}
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
    inline UpdateAgreementRequest& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}
    inline UpdateAgreementRequest& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}
    inline UpdateAgreementRequest& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether or not Transfer Family appends a unique string of
     * characters to the end of the AS2 message payload filename when saving it. </p>
     * <ul> <li> <p> <code>ENABLED</code>: the filename provided by your trading parter
     * is preserved when the file is saved.</p> </li> <li> <p> <code>DISABLED</code>
     * (default value): when Transfer Family saves the file, the filename is adjusted,
     * as described in <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/send-as2-messages.html#file-names-as2">File
     * names and locations</a>.</p> </li> </ul>
     */
    inline const PreserveFilenameType& GetPreserveFilename() const{ return m_preserveFilename; }
    inline bool PreserveFilenameHasBeenSet() const { return m_preserveFilenameHasBeenSet; }
    inline void SetPreserveFilename(const PreserveFilenameType& value) { m_preserveFilenameHasBeenSet = true; m_preserveFilename = value; }
    inline void SetPreserveFilename(PreserveFilenameType&& value) { m_preserveFilenameHasBeenSet = true; m_preserveFilename = std::move(value); }
    inline UpdateAgreementRequest& WithPreserveFilename(const PreserveFilenameType& value) { SetPreserveFilename(value); return *this;}
    inline UpdateAgreementRequest& WithPreserveFilename(PreserveFilenameType&& value) { SetPreserveFilename(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether or not unsigned messages from your trading partners will
     * be accepted. </p> <ul> <li> <p> <code>ENABLED</code>: Transfer Family rejects
     * unsigned messages from your trading partner.</p> </li> <li> <p>
     * <code>DISABLED</code> (default value): Transfer Family accepts unsigned messages
     * from your trading partner.</p> </li> </ul>
     */
    inline const EnforceMessageSigningType& GetEnforceMessageSigning() const{ return m_enforceMessageSigning; }
    inline bool EnforceMessageSigningHasBeenSet() const { return m_enforceMessageSigningHasBeenSet; }
    inline void SetEnforceMessageSigning(const EnforceMessageSigningType& value) { m_enforceMessageSigningHasBeenSet = true; m_enforceMessageSigning = value; }
    inline void SetEnforceMessageSigning(EnforceMessageSigningType&& value) { m_enforceMessageSigningHasBeenSet = true; m_enforceMessageSigning = std::move(value); }
    inline UpdateAgreementRequest& WithEnforceMessageSigning(const EnforceMessageSigningType& value) { SetEnforceMessageSigning(value); return *this;}
    inline UpdateAgreementRequest& WithEnforceMessageSigning(EnforceMessageSigningType&& value) { SetEnforceMessageSigning(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgreementStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_localProfileId;
    bool m_localProfileIdHasBeenSet = false;

    Aws::String m_partnerProfileId;
    bool m_partnerProfileIdHasBeenSet = false;

    Aws::String m_baseDirectory;
    bool m_baseDirectoryHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    PreserveFilenameType m_preserveFilename;
    bool m_preserveFilenameHasBeenSet = false;

    EnforceMessageSigningType m_enforceMessageSigning;
    bool m_enforceMessageSigningHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
