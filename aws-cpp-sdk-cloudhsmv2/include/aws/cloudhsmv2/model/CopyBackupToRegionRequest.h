/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudhsmv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class CopyBackupToRegionRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API CopyBackupToRegionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyBackupToRegion"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline const Aws::String& GetDestinationRegion() const{ return m_destinationRegion; }

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline void SetDestinationRegion(const Aws::String& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = value; }

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline void SetDestinationRegion(Aws::String&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::move(value); }

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline void SetDestinationRegion(const char* value) { m_destinationRegionHasBeenSet = true; m_destinationRegion.assign(value); }

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline CopyBackupToRegionRequest& WithDestinationRegion(const Aws::String& value) { SetDestinationRegion(value); return *this;}

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline CopyBackupToRegionRequest& WithDestinationRegion(Aws::String&& value) { SetDestinationRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region that will contain your copied CloudHSM cluster backup.</p>
     */
    inline CopyBackupToRegionRequest& WithDestinationRegion(const char* value) { SetDestinationRegion(value); return *this;}


    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline CopyBackupToRegionRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline CopyBackupToRegionRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the backup that will be copied to the destination region. </p>
     */
    inline CopyBackupToRegionRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline CopyBackupToRegionRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline CopyBackupToRegionRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline CopyBackupToRegionRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>Tags to apply to the destination backup during creation. If you specify tags,
     * only these tags will be applied to the destination backup. If you do not specify
     * tags, the service copies tags from the source backup to the destination
     * backup.</p>
     */
    inline CopyBackupToRegionRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
