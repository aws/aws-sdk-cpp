/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/Blueprint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

Blueprint::Blueprint(JsonView jsonValue)
{
  *this = jsonValue;
}

Blueprint& Blueprint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("blueprintArn"))
  {
    m_blueprintArn = jsonValue.GetString("blueprintArn");
    m_blueprintArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schema"))
  {
    m_schema = jsonValue.GetString("schema");
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = TypeMapper::GetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blueprintName"))
  {
    m_blueprintName = jsonValue.GetString("blueprintName");
    m_blueprintNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blueprintVersion"))
  {
    m_blueprintVersion = jsonValue.GetString("blueprintVersion");
    m_blueprintVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("blueprintStage"))
  {
    m_blueprintStage = BlueprintStageMapper::GetBlueprintStageForName(jsonValue.GetString("blueprintStage"));
    m_blueprintStageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsEncryptionContext"))
  {
    Aws::Map<Aws::String, JsonView> kmsEncryptionContextJsonMap = jsonValue.GetObject("kmsEncryptionContext").GetAllObjects();
    for(auto& kmsEncryptionContextItem : kmsEncryptionContextJsonMap)
    {
      m_kmsEncryptionContext[kmsEncryptionContextItem.first] = kmsEncryptionContextItem.second.AsString();
    }
    m_kmsEncryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue Blueprint::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintArnHasBeenSet)
  {
   payload.WithString("blueprintArn", m_blueprintArn);

  }

  if(m_schemaHasBeenSet)
  {
   payload.WithString("schema", m_schema);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", TypeMapper::GetNameForType(m_type));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("blueprintName", m_blueprintName);

  }

  if(m_blueprintVersionHasBeenSet)
  {
   payload.WithString("blueprintVersion", m_blueprintVersion);

  }

  if(m_blueprintStageHasBeenSet)
  {
   payload.WithString("blueprintStage", BlueprintStageMapper::GetNameForBlueprintStage(m_blueprintStage));
  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_kmsEncryptionContextHasBeenSet)
  {
   JsonValue kmsEncryptionContextJsonMap;
   for(auto& kmsEncryptionContextItem : m_kmsEncryptionContext)
   {
     kmsEncryptionContextJsonMap.WithString(kmsEncryptionContextItem.first, kmsEncryptionContextItem.second);
   }
   payload.WithObject("kmsEncryptionContext", std::move(kmsEncryptionContextJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
