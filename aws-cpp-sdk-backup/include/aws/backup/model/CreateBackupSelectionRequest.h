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
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/BackupSelection.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class AWS_BACKUP_API CreateBackupSelectionRequest : public BackupRequest
  {
  public:
    CreateBackupSelectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupSelection"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline bool BackupPlanIdHasBeenSet() const { return m_backupPlanIdHasBeenSet; }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = value; }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId = std::move(value); }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline void SetBackupPlanId(const char* value) { m_backupPlanIdHasBeenSet = true; m_backupPlanId.assign(value); }

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline CreateBackupSelectionRequest& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline CreateBackupSelectionRequest& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the backup plan to be associated with the selection of
     * resources.</p>
     */
    inline CreateBackupSelectionRequest& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}


    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p> <p>It includes an array of resources, an optional array of patterns to
     * exclude resources, an optional role to provide access to the AWS service the
     * resource belongs to, and an optional array of tags used to identify a set of
     * resources.</p>
     */
    inline const BackupSelection& GetBackupSelection() const{ return m_backupSelection; }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p> <p>It includes an array of resources, an optional array of patterns to
     * exclude resources, an optional role to provide access to the AWS service the
     * resource belongs to, and an optional array of tags used to identify a set of
     * resources.</p>
     */
    inline bool BackupSelectionHasBeenSet() const { return m_backupSelectionHasBeenSet; }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p> <p>It includes an array of resources, an optional array of patterns to
     * exclude resources, an optional role to provide access to the AWS service the
     * resource belongs to, and an optional array of tags used to identify a set of
     * resources.</p>
     */
    inline void SetBackupSelection(const BackupSelection& value) { m_backupSelectionHasBeenSet = true; m_backupSelection = value; }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p> <p>It includes an array of resources, an optional array of patterns to
     * exclude resources, an optional role to provide access to the AWS service the
     * resource belongs to, and an optional array of tags used to identify a set of
     * resources.</p>
     */
    inline void SetBackupSelection(BackupSelection&& value) { m_backupSelectionHasBeenSet = true; m_backupSelection = std::move(value); }

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p> <p>It includes an array of resources, an optional array of patterns to
     * exclude resources, an optional role to provide access to the AWS service the
     * resource belongs to, and an optional array of tags used to identify a set of
     * resources.</p>
     */
    inline CreateBackupSelectionRequest& WithBackupSelection(const BackupSelection& value) { SetBackupSelection(value); return *this;}

    /**
     * <p>Specifies the body of a request to assign a set of resources to a backup
     * plan.</p> <p>It includes an array of resources, an optional array of patterns to
     * exclude resources, an optional role to provide access to the AWS service the
     * resource belongs to, and an optional array of tags used to identify a set of
     * resources.</p>
     */
    inline CreateBackupSelectionRequest& WithBackupSelection(BackupSelection&& value) { SetBackupSelection(std::move(value)); return *this;}


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
    inline CreateBackupSelectionRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline CreateBackupSelectionRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline CreateBackupSelectionRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}

  private:

    Aws::String m_backupPlanId;
    bool m_backupPlanIdHasBeenSet;

    BackupSelection m_backupSelection;
    bool m_backupSelectionHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
