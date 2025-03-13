/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup
{
namespace Model
{
  class ExportBackupPlanTemplateResult
  {
  public:
    AWS_BACKUP_API ExportBackupPlanTemplateResult() = default;
    AWS_BACKUP_API ExportBackupPlanTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ExportBackupPlanTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline const Aws::String& GetBackupPlanTemplateJson() const { return m_backupPlanTemplateJson; }
    template<typename BackupPlanTemplateJsonT = Aws::String>
    void SetBackupPlanTemplateJson(BackupPlanTemplateJsonT&& value) { m_backupPlanTemplateJsonHasBeenSet = true; m_backupPlanTemplateJson = std::forward<BackupPlanTemplateJsonT>(value); }
    template<typename BackupPlanTemplateJsonT = Aws::String>
    ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(BackupPlanTemplateJsonT&& value) { SetBackupPlanTemplateJson(std::forward<BackupPlanTemplateJsonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportBackupPlanTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupPlanTemplateJson;
    bool m_backupPlanTemplateJsonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
