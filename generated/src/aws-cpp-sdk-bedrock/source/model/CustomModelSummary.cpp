/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/CustomModelSummary.h>
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

CustomModelSummary::CustomModelSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomModelSummary& CustomModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelName"))
  {
    m_modelName = jsonValue.GetString("modelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baseModelArn"))
  {
    m_baseModelArn = jsonValue.GetString("baseModelArn");
    m_baseModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baseModelName"))
  {
    m_baseModelName = jsonValue.GetString("baseModelName");
    m_baseModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customizationType"))
  {
    m_customizationType = CustomizationTypeMapper::GetCustomizationTypeForName(jsonValue.GetString("customizationType"));
    m_customizationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");
    m_ownerAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelStatus"))
  {
    m_modelStatus = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("modelStatus"));
    m_modelStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("modelName", m_modelName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_baseModelArnHasBeenSet)
  {
   payload.WithString("baseModelArn", m_baseModelArn);

  }

  if(m_baseModelNameHasBeenSet)
  {
   payload.WithString("baseModelName", m_baseModelName);

  }

  if(m_customizationTypeHasBeenSet)
  {
   payload.WithString("customizationType", CustomizationTypeMapper::GetNameForCustomizationType(m_customizationType));
  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("ownerAccountId", m_ownerAccountId);

  }

  if(m_modelStatusHasBeenSet)
  {
   payload.WithString("modelStatus", ModelStatusMapper::GetNameForModelStatus(m_modelStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
