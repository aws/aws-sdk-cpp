/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingSelectionForGet.h>
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

RestoreTestingSelectionForGet::RestoreTestingSelectionForGet() : 
    m_creationTimeHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_protectedResourceArnsHasBeenSet(false),
    m_protectedResourceConditionsHasBeenSet(false),
    m_protectedResourceTypeHasBeenSet(false),
    m_restoreMetadataOverridesHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionNameHasBeenSet(false),
    m_validationWindowHours(0),
    m_validationWindowHoursHasBeenSet(false)
{
}

RestoreTestingSelectionForGet::RestoreTestingSelectionForGet(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_protectedResourceArnsHasBeenSet(false),
    m_protectedResourceConditionsHasBeenSet(false),
    m_protectedResourceTypeHasBeenSet(false),
    m_restoreMetadataOverridesHasBeenSet(false),
    m_restoreTestingPlanNameHasBeenSet(false),
    m_restoreTestingSelectionNameHasBeenSet(false),
    m_validationWindowHours(0),
    m_validationWindowHoursHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreTestingSelectionForGet& RestoreTestingSelectionForGet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");

    m_iamRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectedResourceArns"))
  {
    Aws::Utils::Array<JsonView> protectedResourceArnsJsonList = jsonValue.GetArray("ProtectedResourceArns");
    for(unsigned protectedResourceArnsIndex = 0; protectedResourceArnsIndex < protectedResourceArnsJsonList.GetLength(); ++protectedResourceArnsIndex)
    {
      m_protectedResourceArns.push_back(protectedResourceArnsJsonList[protectedResourceArnsIndex].AsString());
    }
    m_protectedResourceArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectedResourceConditions"))
  {
    m_protectedResourceConditions = jsonValue.GetObject("ProtectedResourceConditions");

    m_protectedResourceConditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectedResourceType"))
  {
    m_protectedResourceType = jsonValue.GetString("ProtectedResourceType");

    m_protectedResourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreMetadataOverrides"))
  {
    Aws::Map<Aws::String, JsonView> restoreMetadataOverridesJsonMap = jsonValue.GetObject("RestoreMetadataOverrides").GetAllObjects();
    for(auto& restoreMetadataOverridesItem : restoreMetadataOverridesJsonMap)
    {
      m_restoreMetadataOverrides[restoreMetadataOverridesItem.first] = restoreMetadataOverridesItem.second.AsString();
    }
    m_restoreMetadataOverridesHasBeenSet = true;
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

JsonValue RestoreTestingSelectionForGet::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_protectedResourceArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protectedResourceArnsJsonList(m_protectedResourceArns.size());
   for(unsigned protectedResourceArnsIndex = 0; protectedResourceArnsIndex < protectedResourceArnsJsonList.GetLength(); ++protectedResourceArnsIndex)
   {
     protectedResourceArnsJsonList[protectedResourceArnsIndex].AsString(m_protectedResourceArns[protectedResourceArnsIndex]);
   }
   payload.WithArray("ProtectedResourceArns", std::move(protectedResourceArnsJsonList));

  }

  if(m_protectedResourceConditionsHasBeenSet)
  {
   payload.WithObject("ProtectedResourceConditions", m_protectedResourceConditions.Jsonize());

  }

  if(m_protectedResourceTypeHasBeenSet)
  {
   payload.WithString("ProtectedResourceType", m_protectedResourceType);

  }

  if(m_restoreMetadataOverridesHasBeenSet)
  {
   JsonValue restoreMetadataOverridesJsonMap;
   for(auto& restoreMetadataOverridesItem : m_restoreMetadataOverrides)
   {
     restoreMetadataOverridesJsonMap.WithString(restoreMetadataOverridesItem.first, restoreMetadataOverridesItem.second);
   }
   payload.WithObject("RestoreMetadataOverrides", std::move(restoreMetadataOverridesJsonMap));

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
