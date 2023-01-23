/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/BackupPolicy.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{
  class DescribeBackupPolicyResult
  {
  public:
    AWS_EFS_API DescribeBackupPolicyResult();
    AWS_EFS_API DescribeBackupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeBackupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline const BackupPolicy& GetBackupPolicy() const{ return m_backupPolicy; }

    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline void SetBackupPolicy(const BackupPolicy& value) { m_backupPolicy = value; }

    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline void SetBackupPolicy(BackupPolicy&& value) { m_backupPolicy = std::move(value); }

    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline DescribeBackupPolicyResult& WithBackupPolicy(const BackupPolicy& value) { SetBackupPolicy(value); return *this;}

    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline DescribeBackupPolicyResult& WithBackupPolicy(BackupPolicy&& value) { SetBackupPolicy(std::move(value)); return *this;}

  private:

    BackupPolicy m_backupPolicy;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
