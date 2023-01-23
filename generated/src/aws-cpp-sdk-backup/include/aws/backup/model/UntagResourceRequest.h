/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyList() const{ return m_tagKeyList; }

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline bool TagKeyListHasBeenSet() const { return m_tagKeyListHasBeenSet; }

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline void SetTagKeyList(const Aws::Vector<Aws::String>& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = value; }

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline void SetTagKeyList(Aws::Vector<Aws::String>&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = std::move(value); }

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline UntagResourceRequest& WithTagKeyList(const Aws::Vector<Aws::String>& value) { SetTagKeyList(value); return *this;}

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline UntagResourceRequest& WithTagKeyList(Aws::Vector<Aws::String>&& value) { SetTagKeyList(std::move(value)); return *this;}

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline UntagResourceRequest& AddTagKeyList(const Aws::String& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline UntagResourceRequest& AddTagKeyList(Aws::String&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of keys to identify which key-value tags to remove from a
     * resource.</p>
     */
    inline UntagResourceRequest& AddTagKeyList(const char* value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
