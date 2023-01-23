/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
