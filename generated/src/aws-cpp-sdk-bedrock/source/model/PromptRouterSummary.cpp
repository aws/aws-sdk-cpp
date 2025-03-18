/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PromptRouterSummary.h>
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

PromptRouterSummary::PromptRouterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PromptRouterSummary& PromptRouterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptRouterName"))
  {
    m_promptRouterName = jsonValue.GetString("promptRouterName");
    m_promptRouterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routingCriteria"))
  {
    m_routingCriteria = jsonValue.GetObject("routingCriteria");
    m_routingCriteriaHasBeenSet = true;
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
  if(jsonValue.ValueExists("promptRouterArn"))
  {
    m_promptRouterArn = jsonValue.GetString("promptRouterArn");
    m_promptRouterArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("fallbackModel"))
  {
    m_fallbackModel = jsonValue.GetObject("fallbackModel");
    m_fallbackModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = PromptRouterStatusMapper::GetPromptRouterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = PromptRouterTypeMapper::GetPromptRouterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue PromptRouterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_promptRouterNameHasBeenSet)
  {
   payload.WithString("promptRouterName", m_promptRouterName);

  }

  if(m_routingCriteriaHasBeenSet)
  {
   payload.WithObject("routingCriteria", m_routingCriteria.Jsonize());

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

  if(m_promptRouterArnHasBeenSet)
  {
   payload.WithString("promptRouterArn", m_promptRouterArn);

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

  if(m_fallbackModelHasBeenSet)
  {
   payload.WithObject("fallbackModel", m_fallbackModel.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PromptRouterStatusMapper::GetNameForPromptRouterStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", PromptRouterTypeMapper::GetNameForPromptRouterType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
