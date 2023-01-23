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

  private:

    Aws::String m_backupPlanTemplateJson;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
