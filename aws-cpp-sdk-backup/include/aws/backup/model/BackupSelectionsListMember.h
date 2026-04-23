/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BACKUP_API BackupSelectionsListMember
  {
  public:
    BackupSelectionsListMember();
    BackupSelectionsListMember(Aws::Utils::Json::JsonView jsonValue);
    BackupSelectionsListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline const Aws::String& GetSelectionId() const{ return m_selectionId; }

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline bool SelectionIdHasBeenSet() const { return m_selectionIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline void SetSelectionId(const Aws::String& value) { m_selectionIdHasBeenSet = true; m_selectionId = value; }

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline void SetSelectionId(Aws::String&& value) { m_selectionIdHasBeenSet = true; m_selectionId = std::move(value); }

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline void SetSelectionId(const char* value) { m_selectionIdHasBeenSet = true; m_selectionId.assign(value); }

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline BackupSelectionsListMember& WithSelectionId(const Aws::String& value) { SetSelectionId(value); return *this;}

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline BackupSelectionsListMember& WithSelectionId(Aws::String&& value) { SetSelectionId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a request to assign a set of resources to a backup
     * plan.</p>
     */
    inline BackupSelectionsListMember& WithSelectionId(const char* value) { SetSelectionId(value); return *this;}


    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline const Aws::String& GetSelectionName() const{ return m_selectionName; }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline bool SelectionNameHasBeenSet() const { return m_selectionNameHasBeenSet; }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline void SetSelectionName(const Aws::String& value) { m_selectionNameHasBeenSet = true; m_selectionName = value; }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline void SetSelectionName(Aws::String&& value) { m_selectionNameHasBeenSet = true; m_selectionName = std::move(value); }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline void SetSelectionName(const char* value) { m_selectionNameHasBeenSet = true; m_selectionName.assign(value); }

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline BackupSelectionsListMember& WithSelectionName(const Aws::String& value) { SetSelectionName(value); return *this;}

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline BackupSelectionsListMember& WithSelectionName(Aws::String&& value) { SetSelectionName(std::move(value)); return *this;}

    /**
     * <p>The display name of a resource selection document.</p>
     */
    inline BackupSelectionsListMember& WithSelectionName(const char* value) { SetSelectionName(value); return *this;}


    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline BackupSelectionsListMember& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline BackupSelectionsListMember& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline BackupSelectionsListMember& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupSelectionsListMember& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a backup plan is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupSelectionsListMember& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline BackupSelectionsListMember& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline BackupSelectionsListMember& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline BackupSelectionsListMember& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelectionsListMember& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelectionsListMember& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role Amazon Resource Name (ARN) to create the target
     * recovery point; for example,
     * <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline BackupSelectionsListMember& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}

  private:

    Aws::String m_selectionId;
    bool m_selectionIdHasBeenSet;

    Aws::String m_selectionName;
    bool m_selectionNameHasBeenSet;

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
