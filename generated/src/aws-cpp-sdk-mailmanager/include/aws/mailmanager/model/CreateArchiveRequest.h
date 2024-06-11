/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/MailManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ArchiveRetention.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{

  /**
   * <p>The request to create a new email archive.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/CreateArchiveRequest">AWS
   * API Reference</a></p>
   */
  class CreateArchiveRequest : public MailManagerRequest
  {
  public:
    AWS_MAILMANAGER_API CreateArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateArchive"; }

    AWS_MAILMANAGER_API Aws::String SerializePayload() const override;

    AWS_MAILMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the new archive.</p>
     */
    inline const Aws::String& GetArchiveName() const{ return m_archiveName; }
    inline bool ArchiveNameHasBeenSet() const { return m_archiveNameHasBeenSet; }
    inline void SetArchiveName(const Aws::String& value) { m_archiveNameHasBeenSet = true; m_archiveName = value; }
    inline void SetArchiveName(Aws::String&& value) { m_archiveNameHasBeenSet = true; m_archiveName = std::move(value); }
    inline void SetArchiveName(const char* value) { m_archiveNameHasBeenSet = true; m_archiveName.assign(value); }
    inline CreateArchiveRequest& WithArchiveName(const Aws::String& value) { SetArchiveName(value); return *this;}
    inline CreateArchiveRequest& WithArchiveName(Aws::String&& value) { SetArchiveName(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithArchiveName(const char* value) { SetArchiveName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token Amazon SES uses to recognize retries of this request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateArchiveRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateArchiveRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key for encrypting emails in the
     * archive.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CreateArchiveRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateArchiveRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateArchiveRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The period for retaining emails in the archive before automatic deletion.</p>
     */
    inline const ArchiveRetention& GetRetention() const{ return m_retention; }
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }
    inline void SetRetention(const ArchiveRetention& value) { m_retentionHasBeenSet = true; m_retention = value; }
    inline void SetRetention(ArchiveRetention&& value) { m_retentionHasBeenSet = true; m_retention = std::move(value); }
    inline CreateArchiveRequest& WithRetention(const ArchiveRetention& value) { SetRetention(value); return *this;}
    inline CreateArchiveRequest& WithRetention(ArchiveRetention&& value) { SetRetention(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for the resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateArchiveRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateArchiveRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateArchiveRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateArchiveRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_archiveName;
    bool m_archiveNameHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    ArchiveRetention m_retention;
    bool m_retentionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
