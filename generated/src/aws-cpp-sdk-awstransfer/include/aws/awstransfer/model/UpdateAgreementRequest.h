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
#include <aws/awstransfer/model/CustomDirectoriesType.h>
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
    AWS_TRANSFER_API UpdateAgreementRequest() = default;

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
    inline const Aws::String& GetAgreementId() const { return m_agreementId; }
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
    template<typename AgreementIdT = Aws::String>
    void SetAgreementId(AgreementIdT&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::forward<AgreementIdT>(value); }
    template<typename AgreementIdT = Aws::String>
    UpdateAgreementRequest& WithAgreementId(AgreementIdT&& value) { SetAgreementId(std::forward<AgreementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that the agreement uses.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    UpdateAgreementRequest& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To replace the existing description, provide a short description for the
     * agreement. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAgreementRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can update the status for the agreement, either activating an inactive
     * agreement or the reverse.</p>
     */
    inline AgreementStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AgreementStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAgreementRequest& WithStatus(AgreementStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the AS2 local profile.</p> <p>To change the local
     * profile identifier, provide a new value here.</p>
     */
    inline const Aws::String& GetLocalProfileId() const { return m_localProfileId; }
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }
    template<typename LocalProfileIdT = Aws::String>
    void SetLocalProfileId(LocalProfileIdT&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::forward<LocalProfileIdT>(value); }
    template<typename LocalProfileIdT = Aws::String>
    UpdateAgreementRequest& WithLocalProfileId(LocalProfileIdT&& value) { SetLocalProfileId(std::forward<LocalProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the partner profile. To change the partner profile
     * identifier, provide a new value here.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const { return m_partnerProfileId; }
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }
    template<typename PartnerProfileIdT = Aws::String>
    void SetPartnerProfileId(PartnerProfileIdT&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::forward<PartnerProfileIdT>(value); }
    template<typename PartnerProfileIdT = Aws::String>
    UpdateAgreementRequest& WithPartnerProfileId(PartnerProfileIdT&& value) { SetPartnerProfileId(std::forward<PartnerProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To change the landing directory (folder) for files that are transferred,
     * provide the bucket folder that you want to use; for example,
     * <code>/<i>amzn-s3-demo-bucket</i>/<i>home</i>/<i>mydirectory</i> </code>.</p>
     */
    inline const Aws::String& GetBaseDirectory() const { return m_baseDirectory; }
    inline bool BaseDirectoryHasBeenSet() const { return m_baseDirectoryHasBeenSet; }
    template<typename BaseDirectoryT = Aws::String>
    void SetBaseDirectory(BaseDirectoryT&& value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory = std::forward<BaseDirectoryT>(value); }
    template<typename BaseDirectoryT = Aws::String>
    UpdateAgreementRequest& WithBaseDirectory(BaseDirectoryT&& value) { SetBaseDirectory(std::forward<BaseDirectoryT>(value)); return *this;}
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
    UpdateAgreementRequest& WithAccessRole(AccessRoleT&& value) { SetAccessRole(std::forward<AccessRoleT>(value)); return *this;}
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
    inline PreserveFilenameType GetPreserveFilename() const { return m_preserveFilename; }
    inline bool PreserveFilenameHasBeenSet() const { return m_preserveFilenameHasBeenSet; }
    inline void SetPreserveFilename(PreserveFilenameType value) { m_preserveFilenameHasBeenSet = true; m_preserveFilename = value; }
    inline UpdateAgreementRequest& WithPreserveFilename(PreserveFilenameType value) { SetPreserveFilename(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Determines whether or not unsigned messages from your trading partners will
     * be accepted. </p> <ul> <li> <p> <code>ENABLED</code>: Transfer Family rejects
     * unsigned messages from your trading partner.</p> </li> <li> <p>
     * <code>DISABLED</code> (default value): Transfer Family accepts unsigned messages
     * from your trading partner.</p> </li> </ul>
     */
    inline EnforceMessageSigningType GetEnforceMessageSigning() const { return m_enforceMessageSigning; }
    inline bool EnforceMessageSigningHasBeenSet() const { return m_enforceMessageSigningHasBeenSet; }
    inline void SetEnforceMessageSigning(EnforceMessageSigningType value) { m_enforceMessageSigningHasBeenSet = true; m_enforceMessageSigning = value; }
    inline UpdateAgreementRequest& WithEnforceMessageSigning(EnforceMessageSigningType value) { SetEnforceMessageSigning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CustomDirectoriesType</code> structure. This structure specifies
     * custom directories for storing various AS2 message files. You can specify
     * directories for the following types of files.</p> <ul> <li> <p>Failed files</p>
     * </li> <li> <p>MDN files</p> </li> <li> <p>Payload files</p> </li> <li> <p>Status
     * files</p> </li> <li> <p>Temporary files</p> </li> </ul>
     */
    inline const CustomDirectoriesType& GetCustomDirectories() const { return m_customDirectories; }
    inline bool CustomDirectoriesHasBeenSet() const { return m_customDirectoriesHasBeenSet; }
    template<typename CustomDirectoriesT = CustomDirectoriesType>
    void SetCustomDirectories(CustomDirectoriesT&& value) { m_customDirectoriesHasBeenSet = true; m_customDirectories = std::forward<CustomDirectoriesT>(value); }
    template<typename CustomDirectoriesT = CustomDirectoriesType>
    UpdateAgreementRequest& WithCustomDirectories(CustomDirectoriesT&& value) { SetCustomDirectories(std::forward<CustomDirectoriesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgreementStatusType m_status{AgreementStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_localProfileId;
    bool m_localProfileIdHasBeenSet = false;

    Aws::String m_partnerProfileId;
    bool m_partnerProfileIdHasBeenSet = false;

    Aws::String m_baseDirectory;
    bool m_baseDirectoryHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    PreserveFilenameType m_preserveFilename{PreserveFilenameType::NOT_SET};
    bool m_preserveFilenameHasBeenSet = false;

    EnforceMessageSigningType m_enforceMessageSigning{EnforceMessageSigningType::NOT_SET};
    bool m_enforceMessageSigningHasBeenSet = false;

    CustomDirectoriesType m_customDirectories;
    bool m_customDirectoriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
