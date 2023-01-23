/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/AgreementStatusType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the properties of an agreement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedAgreement">AWS
   * API Reference</a></p>
   */
  class DescribedAgreement
  {
  public:
    AWS_TRANSFER_API DescribedAgreement();
    AWS_TRANSFER_API DescribedAgreement(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedAgreement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline DescribedAgreement& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline DescribedAgreement& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the agreement.</p>
     */
    inline DescribedAgreement& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline const Aws::String& GetAgreementId() const{ return m_agreementId; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(const Aws::String& value) { m_agreementIdHasBeenSet = true; m_agreementId = value; }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(Aws::String&& value) { m_agreementIdHasBeenSet = true; m_agreementId = std::move(value); }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline void SetAgreementId(const char* value) { m_agreementIdHasBeenSet = true; m_agreementId.assign(value); }

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline DescribedAgreement& WithAgreementId(const Aws::String& value) { SetAgreementId(value); return *this;}

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline DescribedAgreement& WithAgreementId(Aws::String&& value) { SetAgreementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the agreement. This identifier is returned when you
     * create an agreement.</p>
     */
    inline DescribedAgreement& WithAgreementId(const char* value) { SetAgreementId(value); return *this;}


    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline DescribedAgreement& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline DescribedAgreement& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The name or short description that's used to identify the agreement.</p>
     */
    inline DescribedAgreement& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The current status of the agreement, either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline const AgreementStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the agreement, either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the agreement, either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(const AgreementStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the agreement, either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline void SetStatus(AgreementStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the agreement, either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline DescribedAgreement& WithStatus(const AgreementStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the agreement, either <code>ACTIVE</code> or
     * <code>INACTIVE</code>.</p>
     */
    inline DescribedAgreement& WithStatus(AgreementStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline DescribedAgreement& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline DescribedAgreement& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance. This identifier
     * indicates the specific server that the agreement uses.</p>
     */
    inline DescribedAgreement& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline const Aws::String& GetLocalProfileId() const{ return m_localProfileId; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline bool LocalProfileIdHasBeenSet() const { return m_localProfileIdHasBeenSet; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(const Aws::String& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = value; }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(Aws::String&& value) { m_localProfileIdHasBeenSet = true; m_localProfileId = std::move(value); }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline void SetLocalProfileId(const char* value) { m_localProfileIdHasBeenSet = true; m_localProfileId.assign(value); }

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline DescribedAgreement& WithLocalProfileId(const Aws::String& value) { SetLocalProfileId(value); return *this;}

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline DescribedAgreement& WithLocalProfileId(Aws::String&& value) { SetLocalProfileId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the AS2 local profile.</p>
     */
    inline DescribedAgreement& WithLocalProfileId(const char* value) { SetLocalProfileId(value); return *this;}


    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline const Aws::String& GetPartnerProfileId() const{ return m_partnerProfileId; }

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline bool PartnerProfileIdHasBeenSet() const { return m_partnerProfileIdHasBeenSet; }

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline void SetPartnerProfileId(const Aws::String& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = value; }

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline void SetPartnerProfileId(Aws::String&& value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId = std::move(value); }

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline void SetPartnerProfileId(const char* value) { m_partnerProfileIdHasBeenSet = true; m_partnerProfileId.assign(value); }

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline DescribedAgreement& WithPartnerProfileId(const Aws::String& value) { SetPartnerProfileId(value); return *this;}

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline DescribedAgreement& WithPartnerProfileId(Aws::String&& value) { SetPartnerProfileId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the partner profile used in the agreement.</p>
     */
    inline DescribedAgreement& WithPartnerProfileId(const char* value) { SetPartnerProfileId(value); return *this;}


    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline const Aws::String& GetBaseDirectory() const{ return m_baseDirectory; }

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline bool BaseDirectoryHasBeenSet() const { return m_baseDirectoryHasBeenSet; }

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline void SetBaseDirectory(const Aws::String& value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory = value; }

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline void SetBaseDirectory(Aws::String&& value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory = std::move(value); }

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline void SetBaseDirectory(const char* value) { m_baseDirectoryHasBeenSet = true; m_baseDirectory.assign(value); }

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline DescribedAgreement& WithBaseDirectory(const Aws::String& value) { SetBaseDirectory(value); return *this;}

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline DescribedAgreement& WithBaseDirectory(Aws::String&& value) { SetBaseDirectory(std::move(value)); return *this;}

    /**
     * <p>The landing directory (folder) for files that are transferred by using the
     * AS2 protocol.</p>
     */
    inline DescribedAgreement& WithBaseDirectory(const char* value) { SetBaseDirectory(value); return *this;}


    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline const Aws::String& GetAccessRole() const{ return m_accessRole; }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline void SetAccessRole(const Aws::String& value) { m_accessRoleHasBeenSet = true; m_accessRole = value; }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline void SetAccessRole(Aws::String&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::move(value); }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline void SetAccessRole(const char* value) { m_accessRoleHasBeenSet = true; m_accessRole.assign(value); }

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline DescribedAgreement& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline DescribedAgreement& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}

    /**
     * <p>With AS2, you can send files by calling <code>StartFileTransfer</code> and
     * specifying the file paths in the request parameter, <code>SendFilePaths</code>.
     * We use the file’s parent directory (for example, for <code>--send-file-paths
     * /bucket/dir/file.txt</code>, parent directory is <code>/bucket/dir/</code>) to
     * temporarily store a processed AS2 message file, store the MDN when we receive
     * them from the partner, and write a final JSON file containing relevant metadata
     * of the transmission. So, the <code>AccessRole</code> needs to provide read and
     * write access to the parent directory of the file location used in the
     * <code>StartFileTransfer</code> request. Additionally, you need to provide read
     * and write access to the parent directory of the files that you intend to send
     * with <code>StartFileTransfer</code>.</p>
     */
    inline DescribedAgreement& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline DescribedAgreement& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline DescribedAgreement& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline DescribedAgreement& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for agreements.</p>
     */
    inline DescribedAgreement& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_agreementId;
    bool m_agreementIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AgreementStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_localProfileId;
    bool m_localProfileIdHasBeenSet = false;

    Aws::String m_partnerProfileId;
    bool m_partnerProfileIdHasBeenSet = false;

    Aws::String m_baseDirectory;
    bool m_baseDirectoryHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
