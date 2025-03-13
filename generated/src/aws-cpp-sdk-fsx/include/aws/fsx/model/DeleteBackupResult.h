/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/BackupLifecycle.h>
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
namespace FSx
{
namespace Model
{
  /**
   * <p>The response object for the <code>DeleteBackup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackupResponse">AWS
   * API Reference</a></p>
   */
  class DeleteBackupResult
  {
  public:
    AWS_FSX_API DeleteBackupResult() = default;
    AWS_FSX_API DeleteBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline const Aws::String& GetBackupId() const { return m_backupId; }
    template<typename BackupIdT = Aws::String>
    void SetBackupId(BackupIdT&& value) { m_backupIdHasBeenSet = true; m_backupId = std::forward<BackupIdT>(value); }
    template<typename BackupIdT = Aws::String>
    DeleteBackupResult& WithBackupId(BackupIdT&& value) { SetBackupId(std::forward<BackupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle status of the backup. If the <code>DeleteBackup</code>
     * operation is successful, the status is <code>DELETED</code>.</p>
     */
    inline BackupLifecycle GetLifecycle() const { return m_lifecycle; }
    inline void SetLifecycle(BackupLifecycle value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }
    inline DeleteBackupResult& WithLifecycle(BackupLifecycle value) { SetLifecycle(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBackupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupId;
    bool m_backupIdHasBeenSet = false;

    BackupLifecycle m_lifecycle{BackupLifecycle::NOT_SET};
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
