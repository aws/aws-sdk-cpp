﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/backup/model/AdvancedBackupSetting.h>
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
  class CreateBackupPlanResult
  {
  public:
    AWS_BACKUP_API CreateBackupPlanResult();
    AWS_BACKUP_API CreateBackupPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateBackupPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Uniquely identifies a backup plan.</p>
     */
    inline const Aws::String& GetBackupPlanId() const{ return m_backupPlanId; }
    inline void SetBackupPlanId(const Aws::String& value) { m_backupPlanId = value; }
    inline void SetBackupPlanId(Aws::String&& value) { m_backupPlanId = std::move(value); }
    inline void SetBackupPlanId(const char* value) { m_backupPlanId.assign(value); }
    inline CreateBackupPlanResult& WithBackupPlanId(const Aws::String& value) { SetBackupPlanId(value); return *this;}
    inline CreateBackupPlanResult& WithBackupPlanId(Aws::String&& value) { SetBackupPlanId(std::move(value)); return *this;}
    inline CreateBackupPlanResult& WithBackupPlanId(const char* value) { SetBackupPlanId(value); return *this;}
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
    inline CreateBackupPlanResult& WithBackupPlanArn(const Aws::String& value) { SetBackupPlanArn(value); return *this;}
    inline CreateBackupPlanResult& WithBackupPlanArn(Aws::String&& value) { SetBackupPlanArn(std::move(value)); return *this;}
    inline CreateBackupPlanResult& WithBackupPlanArn(const char* value) { SetBackupPlanArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a backup plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline CreateBackupPlanResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline CreateBackupPlanResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, randomly generated, Unicode, UTF-8 encoded strings that are at most
     * 1,024 bytes long. They cannot be edited.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline CreateBackupPlanResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline CreateBackupPlanResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline CreateBackupPlanResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>BackupOptions</code> settings for a resource type. This
     * option is only available for Windows Volume Shadow Copy Service (VSS) backup
     * jobs.</p>
     */
    inline const Aws::Vector<AdvancedBackupSetting>& GetAdvancedBackupSettings() const{ return m_advancedBackupSettings; }
    inline void SetAdvancedBackupSettings(const Aws::Vector<AdvancedBackupSetting>& value) { m_advancedBackupSettings = value; }
    inline void SetAdvancedBackupSettings(Aws::Vector<AdvancedBackupSetting>&& value) { m_advancedBackupSettings = std::move(value); }
    inline CreateBackupPlanResult& WithAdvancedBackupSettings(const Aws::Vector<AdvancedBackupSetting>& value) { SetAdvancedBackupSettings(value); return *this;}
    inline CreateBackupPlanResult& WithAdvancedBackupSettings(Aws::Vector<AdvancedBackupSetting>&& value) { SetAdvancedBackupSettings(std::move(value)); return *this;}
    inline CreateBackupPlanResult& AddAdvancedBackupSettings(const AdvancedBackupSetting& value) { m_advancedBackupSettings.push_back(value); return *this; }
    inline CreateBackupPlanResult& AddAdvancedBackupSettings(AdvancedBackupSetting&& value) { m_advancedBackupSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBackupPlanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBackupPlanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBackupPlanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanId;

    Aws::String m_backupPlanArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_versionId;

    Aws::Vector<AdvancedBackupSetting> m_advancedBackupSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
