/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeRestoreJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeRestoreJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRestoreJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline bool RestoreJobIdHasBeenSet() const { return m_restoreJobIdHasBeenSet; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = value; }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::move(value); }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline void SetRestoreJobId(const char* value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId.assign(value); }

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline DescribeRestoreJobRequest& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline DescribeRestoreJobRequest& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}

    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline DescribeRestoreJobRequest& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}

  private:

    Aws::String m_restoreJobId;
    bool m_restoreJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
