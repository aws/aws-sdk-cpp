/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RestoreTestingPlanForCreate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateRestoreTestingPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateRestoreTestingPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestoreTestingPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>This is a unique string that identifies the request and allows failed
     * requests to be retriedwithout the risk of running the operation twice. This
     * parameter is optional. If used, this parameter must contain 1 to 50 alphanumeric
     * or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateRestoreTestingPlanRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A restore testing plan must contain a unique
     * <code>RestoreTestingPlanName</code> string you create and must contain a
     * <code>ScheduleExpression</code> cron. You may optionally include a
     * <code>StartWindowHours</code> integer and a <code>CreatorRequestId</code>
     * string.</p> <p>The <code>RestoreTestingPlanName</code> is a unique string that
     * is the name of the restore testing plan. This cannot be changed after creation,
     * and it must consist of only alphanumeric characters and underscores.</p>
     */
    inline const RestoreTestingPlanForCreate& GetRestoreTestingPlan() const { return m_restoreTestingPlan; }
    inline bool RestoreTestingPlanHasBeenSet() const { return m_restoreTestingPlanHasBeenSet; }
    template<typename RestoreTestingPlanT = RestoreTestingPlanForCreate>
    void SetRestoreTestingPlan(RestoreTestingPlanT&& value) { m_restoreTestingPlanHasBeenSet = true; m_restoreTestingPlan = std::forward<RestoreTestingPlanT>(value); }
    template<typename RestoreTestingPlanT = RestoreTestingPlanForCreate>
    CreateRestoreTestingPlanRequest& WithRestoreTestingPlan(RestoreTestingPlanT&& value) { SetRestoreTestingPlan(std::forward<RestoreTestingPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the restore testing plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRestoreTestingPlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRestoreTestingPlanRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    RestoreTestingPlanForCreate m_restoreTestingPlan;
    bool m_restoreTestingPlanHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
