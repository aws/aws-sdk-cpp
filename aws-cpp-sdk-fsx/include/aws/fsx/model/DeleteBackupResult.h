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
   * <p>The response object for <code>DeleteBackup</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackupResponse">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API DeleteBackupResult
  {
  public:
    DeleteBackupResult();
    DeleteBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline const Aws::String& GetBackupId() const{ return m_backupId; }

    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline void SetBackupId(const Aws::String& value) { m_backupId = value; }

    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline void SetBackupId(Aws::String&& value) { m_backupId = std::move(value); }

    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline void SetBackupId(const char* value) { m_backupId.assign(value); }

    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline DeleteBackupResult& WithBackupId(const Aws::String& value) { SetBackupId(value); return *this;}

    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline DeleteBackupResult& WithBackupId(Aws::String&& value) { SetBackupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the backup deleted.</p>
     */
    inline DeleteBackupResult& WithBackupId(const char* value) { SetBackupId(value); return *this;}


    /**
     * <p>The lifecycle of the backup. Should be <code>DELETED</code>.</p>
     */
    inline const BackupLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle of the backup. Should be <code>DELETED</code>.</p>
     */
    inline void SetLifecycle(const BackupLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle of the backup. Should be <code>DELETED</code>.</p>
     */
    inline void SetLifecycle(BackupLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle of the backup. Should be <code>DELETED</code>.</p>
     */
    inline DeleteBackupResult& WithLifecycle(const BackupLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle of the backup. Should be <code>DELETED</code>.</p>
     */
    inline DeleteBackupResult& WithLifecycle(BackupLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_backupId;

    BackupLifecycle m_lifecycle;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
