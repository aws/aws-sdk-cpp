/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class CopyBackupRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CopyBackupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyBackup"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CopyBackupRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CopyBackupRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CopyBackupRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline const Aws::String& GetSourceBackupId() const{ return m_sourceBackupId; }

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline bool SourceBackupIdHasBeenSet() const { return m_sourceBackupIdHasBeenSet; }

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline void SetSourceBackupId(const Aws::String& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = value; }

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline void SetSourceBackupId(Aws::String&& value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId = std::move(value); }

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline void SetSourceBackupId(const char* value) { m_sourceBackupIdHasBeenSet = true; m_sourceBackupId.assign(value); }

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline CopyBackupRequest& WithSourceBackupId(const Aws::String& value) { SetSourceBackupId(value); return *this;}

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline CopyBackupRequest& WithSourceBackupId(Aws::String&& value) { SetSourceBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source backup. Specifies the ID of the backup that's being
     * copied.</p>
     */
    inline CopyBackupRequest& WithSourceBackupId(const char* value) { SetSourceBackupId(value); return *this;}


    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline CopyBackupRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline CopyBackupRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The source Amazon Web Services Region of the backup. Specifies the Amazon Web
     * Services Region from which the backup is being copied. The source and
     * destination Regions must be in the same Amazon Web Services partition. If you
     * don't specify a Region, <code>SourceRegion</code> defaults to the Region where
     * the request is sent from (in-Region copy).</p>
     */
    inline CopyBackupRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    
    inline CopyBackupRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    
    inline CopyBackupRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    
    inline CopyBackupRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A Boolean flag indicating whether tags from the source backup should be
     * copied to the backup copy. This value defaults to <code>false</code>.</p> <p>If
     * you set <code>CopyTags</code> to <code>true</code> and the source backup has
     * existing tags, you can use the <code>Tags</code> parameter to create new tags,
     * provided that the sum of the source backup tags and the new tags doesn't exceed
     * 50. Both sets of tags are merged. If there are tag conflicts (for example, two
     * tags with the same key but different values), the tags created with the
     * <code>Tags</code> parameter take precedence.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>A Boolean flag indicating whether tags from the source backup should be
     * copied to the backup copy. This value defaults to <code>false</code>.</p> <p>If
     * you set <code>CopyTags</code> to <code>true</code> and the source backup has
     * existing tags, you can use the <code>Tags</code> parameter to create new tags,
     * provided that the sum of the source backup tags and the new tags doesn't exceed
     * 50. Both sets of tags are merged. If there are tag conflicts (for example, two
     * tags with the same key but different values), the tags created with the
     * <code>Tags</code> parameter take precedence.</p>
     */
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }

    /**
     * <p>A Boolean flag indicating whether tags from the source backup should be
     * copied to the backup copy. This value defaults to <code>false</code>.</p> <p>If
     * you set <code>CopyTags</code> to <code>true</code> and the source backup has
     * existing tags, you can use the <code>Tags</code> parameter to create new tags,
     * provided that the sum of the source backup tags and the new tags doesn't exceed
     * 50. Both sets of tags are merged. If there are tag conflicts (for example, two
     * tags with the same key but different values), the tags created with the
     * <code>Tags</code> parameter take precedence.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }

    /**
     * <p>A Boolean flag indicating whether tags from the source backup should be
     * copied to the backup copy. This value defaults to <code>false</code>.</p> <p>If
     * you set <code>CopyTags</code> to <code>true</code> and the source backup has
     * existing tags, you can use the <code>Tags</code> parameter to create new tags,
     * provided that the sum of the source backup tags and the new tags doesn't exceed
     * 50. Both sets of tags are merged. If there are tag conflicts (for example, two
     * tags with the same key but different values), the tags created with the
     * <code>Tags</code> parameter take precedence.</p>
     */
    inline CopyBackupRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CopyBackupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyBackupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CopyBackupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyBackupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_sourceBackupId;
    bool m_sourceBackupIdHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
