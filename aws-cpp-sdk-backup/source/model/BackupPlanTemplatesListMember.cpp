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

#include <aws/backup/model/BackupPlanTemplatesListMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupPlanTemplatesListMember::BackupPlanTemplatesListMember() : 
    m_backupPlanTemplateIdHasBeenSet(false),
    m_backupPlanTemplateNameHasBeenSet(false)
{
}

BackupPlanTemplatesListMember::BackupPlanTemplatesListMember(JsonView jsonValue) : 
    m_backupPlanTemplateIdHasBeenSet(false),
    m_backupPlanTemplateNameHasBeenSet(false)
{
  *this = jsonValue;
}

BackupPlanTemplatesListMember& BackupPlanTemplatesListMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlanTemplateId"))
  {
    m_backupPlanTemplateId = jsonValue.GetString("BackupPlanTemplateId");

    m_backupPlanTemplateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanTemplateName"))
  {
    m_backupPlanTemplateName = jsonValue.GetString("BackupPlanTemplateName");

    m_backupPlanTemplateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupPlanTemplatesListMember::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanTemplateIdHasBeenSet)
  {
   payload.WithString("BackupPlanTemplateId", m_backupPlanTemplateId);

  }

  if(m_backupPlanTemplateNameHasBeenSet)
  {
   payload.WithString("BackupPlanTemplateName", m_backupPlanTemplateName);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
