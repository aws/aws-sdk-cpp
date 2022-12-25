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
    AWS_FSX_API DeleteBackupResult();
    AWS_FSX_API DeleteBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API DeleteBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupId = value; }

    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupId = std::move(value); }

    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline void SetBackupId(const char* value) { m_backupId.assign(value); }

    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline DeleteBackupResult& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline DeleteBackupResult& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the backup that was deleted.</p>
     */
    inline DeleteBackupResult& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>The lifecycle status of the backup. If the <code>DeleteBackup</code>
     * operation is successful, the status is <code>DELETED</code>.</p>
     */
    inline const BackupLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the backup. If the <code>DeleteBackup</code>
     * operation is successful, the status is <code>DELETED</code>.</p>
     */
    inline void SetLifecycle(const BackupLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the backup. If the <code>DeleteBackup</code>
     * operation is successful, the status is <code>DELETED</code>.</p>
     */
    inline void SetLifecycle(BackupLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the backup. If the <code>DeleteBackup</code>
     * operation is successful, the status is <code>DELETED</code>.</p>
     */
    inline DeleteBackupResult& WithLifecycle(const BackupLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the backup. If the <code>DeleteBackup</code>
     * operation is successful, the status is <code>DELETED</code>.</p>
     */
    inline DeleteBackupResult& WithLifecycle(BackupLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_backupId;

    BackupLifecycle m_lifecycle;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
