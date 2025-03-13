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
    AWS_BACKUP_API DescribeRestoreJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRestoreJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Uniquely identifies the job that restores a recovery point.</p>
     */
    inline const Aws::String& GetRestoreJobId() const { return m_restoreJobId; }
    inline bool RestoreJobIdHasBeenSet() const { return m_restoreJobIdHasBeenSet; }
    template<typename RestoreJobIdT = Aws::String>
    void SetRestoreJobId(RestoreJobIdT&& value) { m_restoreJobIdHasBeenSet = true; m_restoreJobId = std::forward<RestoreJobIdT>(value); }
    template<typename RestoreJobIdT = Aws::String>
    DescribeRestoreJobRequest& WithRestoreJobId(RestoreJobIdT&& value) { SetRestoreJobId(std::forward<RestoreJobIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_restoreJobId;
    bool m_restoreJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
