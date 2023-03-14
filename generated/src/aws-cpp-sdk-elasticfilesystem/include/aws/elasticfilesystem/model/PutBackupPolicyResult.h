/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/BackupPolicy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class PutBackupPolicyResult
  {
  public:
    AWS_EFS_API PutBackupPolicyResult();
    AWS_EFS_API PutBackupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API PutBackupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline PutBackupPolicyResult& WithBackupPolicy(const BackupPolicy& value) { SetBackupPolicy(value); return *this;}

    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline PutBackupPolicyResult& WithBackupPolicy(BackupPolicy&& value) { SetBackupPolicy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutBackupPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutBackupPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutBackupPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    BackupPolicy m_backupPolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
