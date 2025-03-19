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
  class DescribeBackupPolicyResult
  {
  public:
    AWS_EFS_API DescribeBackupPolicyResult() = default;
    AWS_EFS_API DescribeBackupPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EFS_API DescribeBackupPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the file system's backup policy, indicating whether automatic
     * backups are turned on or off.</p>
     */
    inline const BackupPolicy& GetBackupPolicy() const { return m_backupPolicy; }
    template<typename BackupPolicyT = BackupPolicy>
    void SetBackupPolicy(BackupPolicyT&& value) { m_backupPolicyHasBeenSet = true; m_backupPolicy = std::forward<BackupPolicyT>(value); }
    template<typename BackupPolicyT = BackupPolicy>
    DescribeBackupPolicyResult& WithBackupPolicy(BackupPolicyT&& value) { SetBackupPolicy(std::forward<BackupPolicyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBackupPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BackupPolicy m_backupPolicy;
    bool m_backupPolicyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
