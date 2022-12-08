/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class ModifyBackupAttributesRequest : public CloudHSMV2Request
  {
  public:
    AWS_CLOUDHSMV2_API ModifyBackupAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyBackupAttributes"; }

    AWS_CLOUDHSMV2_API Aws::String SerializePayload() const override;

    AWS_CLOUDHSMV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline bool BackupIdHasBeenSet() const { return m_backupIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupIdHasBeenSet = true; m_backupId = value; }

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupIdHasBeenSet = true; m_backupId = std::move(value); }

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline void SetBackupId(const char* value) { m_backupIdHasBeenSet = true; m_backupId.assign(value); }

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline ModifyBackupAttributesRequest& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline ModifyBackupAttributesRequest& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the backup to modify. To find the ID of a backup, use
     * the <a>DescribeBackups</a> operation.</p>
     */
    inline ModifyBackupAttributesRequest& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline bool GetNeverExpires() const{ return m_neverExpires; }

    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline bool NeverExpiresHasBeenSet() const { return m_neverExpiresHasBeenSet; }

    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline void SetNeverExpires(bool value) { m_neverExpiresHasBeenSet = true; m_neverExpires = value; }

    /**
     * <p>Specifies whether the service should exempt a backup from the retention
     * policy for the cluster. <code>True</code> exempts a backup from the retention
     * policy. <code>False</code> means the service applies the backup retention policy
     * defined at the cluster.</p>
     */
    inline ModifyBackupAttributesRequest& WithNeverExpires(bool value) { SetNeverExpires(value); return *this;}

  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    bool m_neverExpires;
    bool m_neverExpiresHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
