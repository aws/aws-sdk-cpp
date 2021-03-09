/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/Status.h>
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
namespace EFS
{
namespace Model
{

  /**
   * <p>The backup policy for the file system used to create automatic daily backups.
   * If status has a value of <code>ENABLED</code>, the file system is being
   * automatically backed up. For more information, see <a
   * href="https://docs.aws.amazon.com/efs/latest/ug/awsbackup.html#automatic-backups">Automatic
   * backups</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticfilesystem-2015-02-01/BackupPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_EFS_API BackupPolicy
  {
  public:
    BackupPolicy();
    BackupPolicy(Aws::Utils::Json::JsonView jsonValue);
    BackupPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> - EFS is automatically backing up the file
     * system.&gt;</p> </li> <li> <p> <b> <code>ENABLING</code> </b> - EFS is turning
     * on automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> - automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> - EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> - EFS is automatically backing up the file
     * system.&gt;</p> </li> <li> <p> <b> <code>ENABLING</code> </b> - EFS is turning
     * on automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> - automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> - EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> - EFS is automatically backing up the file
     * system.&gt;</p> </li> <li> <p> <b> <code>ENABLING</code> </b> - EFS is turning
     * on automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> - automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> - EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> - EFS is automatically backing up the file
     * system.&gt;</p> </li> <li> <p> <b> <code>ENABLING</code> </b> - EFS is turning
     * on automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> - automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> - EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> - EFS is automatically backing up the file
     * system.&gt;</p> </li> <li> <p> <b> <code>ENABLING</code> </b> - EFS is turning
     * on automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> - automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> - EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline BackupPolicy& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the status of the file system's backup policy.</p> <ul> <li> <p>
     * <b> <code>ENABLED</code> </b> - EFS is automatically backing up the file
     * system.&gt;</p> </li> <li> <p> <b> <code>ENABLING</code> </b> - EFS is turning
     * on automatic backups for the file system.</p> </li> <li> <p> <b>
     * <code>DISABLED</code> </b> - automatic back ups are turned off for the file
     * system.</p> </li> <li> <p> <b> <code>DISABLING</code> </b> - EFS is turning off
     * automatic backups for the file system.</p> </li> </ul>
     */
    inline BackupPolicy& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Status m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
