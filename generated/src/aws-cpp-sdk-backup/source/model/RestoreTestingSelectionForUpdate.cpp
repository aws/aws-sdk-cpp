/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RestoreTestingSelectionForUpdate.h>
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

RestoreTestingSelectionForUpdate::RestoreTestingSelectionForUpdate() : 
    m_iamRoleArnHasBeenSet(false),
    m_protectedResourceArnsHasBeenSet(false),
    m_protectedResourceConditionsHasBeenSet(false),
    m_restoreMetadataOverridesHasBeenSet(false),
    m_validationWindowHours(0),
    m_validationWindowHoursHasBeenSet(false)
{
}

RestoreTestingSelectionForUpdate::RestoreTestingSelectionForUpdate(JsonView jsonValue) : 
    m_iamRoleArnHasBeenSet(false),
    m_protectedResourceArnsHasBeenSet(false),
    m_protectedResourceConditionsHasBeenSet(false),
    m_restoreMetadataOverridesHasBeenSet(false),
    m_validationWindowHours(0),
    m_validationWindowHoursHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreTestingSelectionForUpdate& RestoreTestingSelectionForUpdate::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("RestoreMetadataOverrides"))
  {
    Aws::Map<Aws::String, JsonView> restoreMetadataOverridesJsonMap = jsonValue.GetObject("RestoreMetadataOverrides").GetAllObjects();
    for(auto& restoreMetadataOverridesItem : restoreMetadataOverridesJsonMap)
    {
      m_restoreMetadataOverrides[restoreMetadataOverridesItem.first] = restoreMetadataOverridesItem.second.AsString();
    }
    m_restoreMetadataOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationWindowHours"))
  {
    m_validationWindowHours = jsonValue.GetInteger("ValidationWindowHours");

    m_validationWindowHoursHasBeenSet = true;
  }

  return *this;
}

JsonValue RestoreTestingSelectionForUpdate::Jsonize() const
{
  JsonValue payload;

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

  if(m_restoreMetadataOverridesHasBeenSet)
  {
   JsonValue restoreMetadataOverridesJsonMap;
   for(auto& restoreMetadataOverridesItem : m_restoreMetadataOverrides)
   {
     restoreMetadataOverridesJsonMap.WithString(restoreMetadataOverridesItem.first, restoreMetadataOverridesItem.second);
   }
   payload.WithObject("RestoreMetadataOverrides", std::move(restoreMetadataOverridesJsonMap));

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
