/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/backup/model/BackupPlanInput.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateBackupPlanRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateBackupPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupPlan"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The body of a backup plan. Includes a <code>BackupPlanName</code> and one or
     * more sets of <code>Rules</code>.</p>
     */
    inline const BackupPlanInput& GetBackupPlan() const { return m_backupPlan; }
    inline bool BackupPlanHasBeenSet() const { return m_backupPlanHasBeenSet; }
    template<typename BackupPlanT = BackupPlanInput>
    void SetBackupPlan(BackupPlanT&& value) { m_backupPlanHasBeenSet = true; m_backupPlan = std::forward<BackupPlanT>(value); }
    template<typename BackupPlanT = BackupPlanInput>
    CreateBackupPlanRequest& WithBackupPlan(BackupPlanT&& value) { SetBackupPlan(std::forward<BackupPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the backup plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupPlanTags() const { return m_backupPlanTags; }
    inline bool BackupPlanTagsHasBeenSet() const { return m_backupPlanTagsHasBeenSet; }
    template<typename BackupPlanTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupPlanTags(BackupPlanTagsT&& value) { m_backupPlanTagsHasBeenSet = true; m_backupPlanTags = std::forward<BackupPlanTagsT>(value); }
    template<typename BackupPlanTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateBackupPlanRequest& WithBackupPlanTags(BackupPlanTagsT&& value) { SetBackupPlanTags(std::forward<BackupPlanTagsT>(value)); return *this;}
    template<typename BackupPlanTagsKeyT = Aws::String, typename BackupPlanTagsValueT = Aws::String>
    CreateBackupPlanRequest& AddBackupPlanTags(BackupPlanTagsKeyT&& key, BackupPlanTagsValueT&& value) {
      m_backupPlanTagsHasBeenSet = true; m_backupPlanTags.emplace(std::forward<BackupPlanTagsKeyT>(key), std::forward<BackupPlanTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Identifies the request and allows failed requests to be retried without the
     * risk of running the operation twice. If the request includes a
     * <code>CreatorRequestId</code> that matches an existing backup plan, that plan is
     * returned. This parameter is optional.</p> <p>If used, this parameter must
     * contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateBackupPlanRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}
  private:

    BackupPlanInput m_backupPlan;
    bool m_backupPlanHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupPlanTags;
    bool m_backupPlanTagsHasBeenSet = false;

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
