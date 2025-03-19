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
    AWS_BACKUP_API UntagResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the type of the tagged resource.</p> <p>ARNs that do not include
     * <code>backup</code> are incompatible with tagging. <code>TagResource</code> and
     * <code>UntagResource</code> with invalid ARNs will result in an error. Acceptable
     * ARN content can include <code>arn:aws:backup:us-east</code>. Invalid ARN content
     * may look like <code>arn:aws:ec2:us-east</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UntagResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keys to identify which key-value tags to remove from a resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeyList() const { return m_tagKeyList; }
    inline bool TagKeyListHasBeenSet() const { return m_tagKeyListHasBeenSet; }
    template<typename TagKeyListT = Aws::Vector<Aws::String>>
    void SetTagKeyList(TagKeyListT&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList = std::forward<TagKeyListT>(value); }
    template<typename TagKeyListT = Aws::Vector<Aws::String>>
    UntagResourceRequest& WithTagKeyList(TagKeyListT&& value) { SetTagKeyList(std::forward<TagKeyListT>(value)); return *this;}
    template<typename TagKeyListT = Aws::String>
    UntagResourceRequest& AddTagKeyList(TagKeyListT&& value) { m_tagKeyListHasBeenSet = true; m_tagKeyList.emplace_back(std::forward<TagKeyListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeyList;
    bool m_tagKeyListHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
