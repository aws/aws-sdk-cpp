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
  class AWS_BACKUP_API ExportBackupPlanTemplateResult
  {
  public:
    ExportBackupPlanTemplateResult();
    ExportBackupPlanTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ExportBackupPlanTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline const Aws::String& GetBackupPlanTemplateJson() const{ return m_backupPlanTemplateJson; }

    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline void SetBackupPlanTemplateJson(const Aws::String& value) { m_backupPlanTemplateJson = value; }

    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline void SetBackupPlanTemplateJson(Aws::String&& value) { m_backupPlanTemplateJson = std::move(value); }

    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline void SetBackupPlanTemplateJson(const char* value) { m_backupPlanTemplateJson.assign(value); }

    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(const Aws::String& value) { SetBackupPlanTemplateJson(value); return *this;}

    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(Aws::String&& value) { SetBackupPlanTemplateJson(std::move(value)); return *this;}

    /**
     * <p>The body of a backup plan template in JSON format.</p> <note> <p>This is a
     * signed JSON document that cannot be modified before being passed to
     * <code>GetBackupPlanFromJSON.</code> </p> </note>
     */
    inline ExportBackupPlanTemplateResult& WithBackupPlanTemplateJson(const char* value) { SetBackupPlanTemplateJson(value); return *this;}

  private:

    Aws::String m_backupPlanTemplateJson;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
