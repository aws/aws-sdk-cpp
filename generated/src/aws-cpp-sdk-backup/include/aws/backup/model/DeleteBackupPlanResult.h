﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Backup
{
namespace Model
{
  class DeleteBackupPlanResult
  {
  public:
    AWS_BACKUP_API DeleteBackupPlanResult();
    AWS_BACKUP_API DeleteBackupPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DeleteBackupPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanId = value; }
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanId = std::move(value); }
    inline void SetBackupPlanId(const char* value) { m_backupPlanId.assign(value); }
    inline DeleteBackupPlanResult& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}
    inline DeleteBackupPlanResult& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}
    inline DeleteBackupPlanResult& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup plan; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:plan:8F81F553-3A74-4A3F-B93D-B3360DC80C50</code>.</p>
     */
    inline const Aws::String& GetBackupPlanArn() const{ return m_backupPlanArn; }
    inline void SetBackupPlanArn(const Aws::String& value) { m_backupPlanArn = value; }
    inline void SetBackupPlanArn(Aws::String&& value) { m_backupPlanArn = std::move(value); }
    inline void SetBackupPlanArn(const char* value) { m_backupPlanArn.assign(value); }
    inline DeleteBackupPlanResult& WithBackupPlanArn(const Aws::String& value) { SetBackupPlanArn(value); return *this;}
    inline DeleteBackupPlanResult& WithBackupPlanArn(Aws::String&& value) { SetBackupPlanArn(std::move(value)); return *this;}
    inline DeleteBackupPlanResult& WithBackupPlanArn(const char* value) { SetBackupPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup plan is deleted, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>DeletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetDeletionDate() const{ return m_deletionDate; }
    inline void SetDeletionDate(const Aws::Utils::DateTime& value) { m_deletionDate = value; }
    inline void SetDeletionDate(Aws::Utils::DateTime&& value) { m_deletionDate = std::move(value); }
    inline DeleteBackupPlanResult& WithDeletionDate(const Aws::Utils::DateTime& value) { SetDeletionDate(value); return *this;}
    inline DeleteBackupPlanResult& WithDeletionDate(Aws::Utils::DateTime&& value) { SetDeletionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. Version IDs cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline DeleteBackupPlanResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline DeleteBackupPlanResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline DeleteBackupPlanResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteBackupPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteBackupPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteBackupPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;

    Aws::String m_backupPlanArn;

    Aws::Utils::DateTime m_deletionDate;

    Aws::String m_versionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
