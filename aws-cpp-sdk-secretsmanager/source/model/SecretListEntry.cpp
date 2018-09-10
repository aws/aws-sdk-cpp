﻿/*
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

#include <aws/secretsmanager/model/SecretListEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

SecretListEntry::SecretListEntry() : 
    m_aRNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_rotationEnabled(false),
    m_rotationEnabledHasBeenSet(false),
    m_rotationLambdaARNHasBeenSet(false),
    m_rotationRulesHasBeenSet(false),
    m_lastRotatedDateHasBeenSet(false),
    m_lastChangedDateHasBeenSet(false),
    m_lastAccessedDateHasBeenSet(false),
    m_deletedDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_secretVersionsToStagesHasBeenSet(false)
{
}

SecretListEntry::SecretListEntry(JsonView jsonValue) : 
    m_aRNHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_rotationEnabled(false),
    m_rotationEnabledHasBeenSet(false),
    m_rotationLambdaARNHasBeenSet(false),
    m_rotationRulesHasBeenSet(false),
    m_lastRotatedDateHasBeenSet(false),
    m_lastChangedDateHasBeenSet(false),
    m_lastAccessedDateHasBeenSet(false),
    m_deletedDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_secretVersionsToStagesHasBeenSet(false)
{
  *this = jsonValue;
}

SecretListEntry& SecretListEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationEnabled"))
  {
    m_rotationEnabled = jsonValue.GetBool("RotationEnabled");

    m_rotationEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationLambdaARN"))
  {
    m_rotationLambdaARN = jsonValue.GetString("RotationLambdaARN");

    m_rotationLambdaARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RotationRules"))
  {
    m_rotationRules = jsonValue.GetObject("RotationRules");

    m_rotationRulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRotatedDate"))
  {
    m_lastRotatedDate = jsonValue.GetDouble("LastRotatedDate");

    m_lastRotatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastChangedDate"))
  {
    m_lastChangedDate = jsonValue.GetDouble("LastChangedDate");

    m_lastChangedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessedDate"))
  {
    m_lastAccessedDate = jsonValue.GetDouble("LastAccessedDate");

    m_lastAccessedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletedDate"))
  {
    m_deletedDate = jsonValue.GetDouble("DeletedDate");

    m_deletedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretVersionsToStages"))
  {
    Aws::Map<Aws::String, JsonView> secretVersionsToStagesJsonMap = jsonValue.GetObject("SecretVersionsToStages").GetAllObjects();
    for(auto& secretVersionsToStagesItem : secretVersionsToStagesJsonMap)
    {
      Array<JsonView> secretVersionStagesTypeJsonList = secretVersionsToStagesItem.second.AsArray();
      Aws::Vector<Aws::String> secretVersionStagesTypeList;
      secretVersionStagesTypeList.reserve((size_t)secretVersionStagesTypeJsonList.GetLength());
      for(unsigned secretVersionStagesTypeIndex = 0; secretVersionStagesTypeIndex < secretVersionStagesTypeJsonList.GetLength(); ++secretVersionStagesTypeIndex)
      {
        secretVersionStagesTypeList.push_back(secretVersionStagesTypeJsonList[secretVersionStagesTypeIndex].AsString());
      }
      m_secretVersionsToStages[secretVersionsToStagesItem.first] = std::move(secretVersionStagesTypeList);
    }
    m_secretVersionsToStagesHasBeenSet = true;
  }

  return *this;
}

JsonValue SecretListEntry::Jsonize() const
{
  JsonValue payload;

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_rotationEnabledHasBeenSet)
  {
   payload.WithBool("RotationEnabled", m_rotationEnabled);

  }

  if(m_rotationLambdaARNHasBeenSet)
  {
   payload.WithString("RotationLambdaARN", m_rotationLambdaARN);

  }

  if(m_rotationRulesHasBeenSet)
  {
   payload.WithObject("RotationRules", m_rotationRules.Jsonize());

  }

  if(m_lastRotatedDateHasBeenSet)
  {
   payload.WithDouble("LastRotatedDate", m_lastRotatedDate.SecondsWithMSPrecision());
  }

  if(m_lastChangedDateHasBeenSet)
  {
   payload.WithDouble("LastChangedDate", m_lastChangedDate.SecondsWithMSPrecision());
  }

  if(m_lastAccessedDateHasBeenSet)
  {
   payload.WithDouble("LastAccessedDate", m_lastAccessedDate.SecondsWithMSPrecision());
  }

  if(m_deletedDateHasBeenSet)
  {
   payload.WithDouble("DeletedDate", m_deletedDate.SecondsWithMSPrecision());
  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_secretVersionsToStagesHasBeenSet)
  {
   JsonValue secretVersionsToStagesJsonMap;
   for(auto& secretVersionsToStagesItem : m_secretVersionsToStages)
   {
     Array<JsonValue> secretVersionStagesTypeJsonList(secretVersionsToStagesItem.second.size());
     for(unsigned secretVersionStagesTypeIndex = 0; secretVersionStagesTypeIndex < secretVersionStagesTypeJsonList.GetLength(); ++secretVersionStagesTypeIndex)
     {
       secretVersionStagesTypeJsonList[secretVersionStagesTypeIndex].AsString(secretVersionsToStagesItem.second[secretVersionStagesTypeIndex]);
     }
     secretVersionsToStagesJsonMap.WithArray(secretVersionsToStagesItem.first, std::move(secretVersionStagesTypeJsonList));
   }
   payload.WithObject("SecretVersionsToStages", std::move(secretVersionsToStagesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
