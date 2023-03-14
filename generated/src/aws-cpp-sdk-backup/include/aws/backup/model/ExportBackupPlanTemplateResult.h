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
    AWS_BACKUP_API ExportBackupPlanTemplateResult();
    AWS_BACKUP_API ExportBackupPlanTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ExportBackupPlanTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline const Aws::String& GetBackupPlanTemplateJson() const{ return m_backupPlanTemplateJson; }

    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline void SetBackupPlanTemplateJson(const Aws::String& value) { m_backupPlanTemplateJson = value; }

    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline void SetBackupPlanTemplateJson(Aws::String&& value) { m_backupPlanTemplateJson = std::move(value); }

    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline void SetBackupPlanTemplateJson(const char* value) { m_backupPlanTemplateJson.assign(value); }

    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(const Aws::String& value) { SetBackupPlanTemplateJson(value); return *this;}

    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(Aws::String&& value) { SetBackupPlanTemplateJson(std::move(value)); return *this;}

    /**
     * <p>The body of a backup plan template in JSON format.</p>  <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> 
     */
    inline ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(const char* value) { SetBackupPlanTemplateJson(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExportBackupPlanTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExportBackupPlanTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExportBackupPlanTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_backupPlanTemplateJson;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
