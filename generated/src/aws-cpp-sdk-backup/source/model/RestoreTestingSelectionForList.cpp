/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingSelectionForList.h>
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

RestoreTestingSelectionForList::RestoreTestingSelectionForList() : 
    m_creationTimeHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_protectedResourceTypeHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionNameHasBeenSet(false),
    m_validationWindowHours(0),
    m_validationWindowHoursHasBeenSet(false)
{
}

RestoreTestingSelectionForList::RestoreTestingSelectionForList(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_protectedResourceTypeHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionNameHasBeenSet(false),
    m_validationWindowHours(0),
    m_validationWindowHoursHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreTestingSelectionForList& RestoreTestingSelectionForList::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectedResourceType"))
  {
    m_protectedResourceType = jsonValue.GetString("ProtectedResourceType");

    m_protectedResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreTestingPlanName"))
  {
    m_restoreTestingPlanName = jsonValue.GetString("RestoreTestingPlanName");

    m_restoreTestingPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreTestingSelectionName"))
  {
    m_restoreTestingSelectionName = jsonValue.GetString("RestoreTestingSelectionName");

    m_restoreTestingSelectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationWindowHours"))
  {
    m_validationWindowHours = jsonValue.GetInteger("ValidationWindowHours");

    m_validationWindowHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue RestoreTestingSelectionForList::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_protectedResourceTypeHasBeenSet)
  {
   payload.WithString("ProtectedResourceType", m_protectedResourceType);

  }

  if(m_restoreTestingPlanNameHasBeenSet)
  {
   payload.WithString("RestoreTestingPlanName", m_restoreTestingPlanName);

  }

  if(m_restoreTestingSelectionNameHasBeenSet)
  {
   payload.WithString("RestoreTestingSelectionName", m_restoreTestingSelectionName);

  }

  if(m_validationWindowHoursHasBeenSet)
  {
   payload.WithInteger("ValidationWindowHours", m_validationWindowHours);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
