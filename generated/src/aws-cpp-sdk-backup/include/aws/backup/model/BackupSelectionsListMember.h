/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains metadata about a <code>BackupSelection</code> object.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupSelectionsListMember">AWS
   * API Reference</a></p>
   */
  class BackupSelectionsListMember
  {
  public:
    AWS_BACKUP_API BackupSelectionsListMember() = default;
    AWS_BACKUP_API BackupSelectionsListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupSelectionsListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline const Aws::String& GetSelectionId() const { return m_selectionId; }
    inline bool SelectionIdHasBeenSet() const { return m_selectionIdHasBeenSet; }
    template<typename SelectionIdT = Aws::String>
    void SetSelectionId(SelectionIdT&& value) { m_selectionIdHasBeenSet = true; m_selectionId = std::forward<SelectionIdT>(value); }
    template<typename SelectionIdT = Aws::String>
    BackupSelectionsListMember& WithSelectionId(SelectionIdT&& value) { SetSelectionId(std::forward<SelectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline const Aws::String& GetSelectionName() const { return m_selectionName; }
    inline bool SelectionNameHasBeenSet() const { return m_selectionNameHasBeenSet; }
    template<typename SelectionNameT = Aws::String>
    void SetSelectionName(SelectionNameT&& value) { m_selectionNameHasBeenSet = true; m_selectionName = std::forward<SelectionNameT>(value); }
    template<typename SelectionNameT = Aws::String>
    BackupSelectionsListMember& WithSelectionName(SelectionNameT&& value) { SetSelectionName(std::forward<SelectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const { return m_backupPlanId; }
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }
    template<typename BackupPlanIdT = Aws::String>
    void SetBackupPlanId(BackupPlanIdT&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::forward<BackupPlanIdT>(value); }
    template<typename BackupPlanIdT = Aws::String>
    BackupSelectionsListMember& WithBackupPlanId(BackupPlanIdT&& value) { SetBackupPlanId(std::forward<BackupPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    BackupSelectionsListMember& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    BackupSelectionsListMember& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    BackupSelectionsListMember& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_selectionId;
    bool m_selectionIdHasBeenSet = false;

    Aws::String m_selectionName;
    bool m_selectionNameHasBeenSet = false;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
