/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/InferenceProfileSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

InferenceProfileSummary::InferenceProfileSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceProfileSummary& InferenceProfileSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inferenceProfileName"))
  {
    m_inferenceProfileName = jsonValue.GetString("inferenceProfileName");
    m_inferenceProfileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferenceProfileArn"))
  {
    m_inferenceProfileArn = jsonValue.GetString("inferenceProfileArn");
    m_inferenceProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferenceProfileId"))
  {
    m_inferenceProfileId = jsonValue.GetString("inferenceProfileId");
    m_inferenceProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = InferenceProfileStatusMapper::GetInferenceProfileStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = InferenceProfileTypeMapper::GetInferenceProfileTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceProfileSummary::Jsonize() const
{
  JsonValue payload;

  if(m_inferenceProfileNameHasBeenSet)
  {
   payload.WithString("inferenceProfileName", m_inferenceProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_inferenceProfileArnHasBeenSet)
  {
   payload.WithString("inferenceProfileArn", m_inferenceProfileArn);

  }

  if(m_modelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> modelsJsonList(m_models.size());
   for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
   {
     modelsJsonList[modelsIndex].AsObject(m_models[modelsIndex].Jsonize());
   }
   payload.WithArray("models", std::move(modelsJsonList));

  }

  if(m_inferenceProfileIdHasBeenSet)
  {
   payload.WithString("inferenceProfileId", m_inferenceProfileId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", InferenceProfileStatusMapper::GetNameForInferenceProfileStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", InferenceProfileTypeMapper::GetNameForInferenceProfileType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
