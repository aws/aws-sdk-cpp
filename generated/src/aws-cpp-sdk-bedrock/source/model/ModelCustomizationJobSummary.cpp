/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelCustomizationJobSummary.h>
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

ModelCustomizationJobSummary::ModelCustomizationJobSummary() : 
    m_jobArnHasBeenSet(false),
    m_baseModelArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_status(ModelCustomizationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_customModelArnHasBeenSet(false),
    m_customModelNameHasBeenSet(false),
    m_customizationType(CustomizationType::NOT_SET),
    m_customizationTypeHasBeenSet(false)
{
}

ModelCustomizationJobSummary::ModelCustomizationJobSummary(JsonView jsonValue) : 
    m_jobArnHasBeenSet(false),
    m_baseModelArnHasBeenSet(false),
    m_jobNameHasBeenSet(false),
    m_status(ModelCustomizationJobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_customModelArnHasBeenSet(false),
    m_customModelNameHasBeenSet(false),
    m_customizationType(CustomizationType::NOT_SET),
    m_customizationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ModelCustomizationJobSummary& ModelCustomizationJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

    m_jobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseModelArn"))
  {
    m_baseModelArn = jsonValue.GetString("baseModelArn");

    m_baseModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelCustomizationJobStatusMapper::GetModelCustomizationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customModelArn"))
  {
    m_customModelArn = jsonValue.GetString("customModelArn");

    m_customModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customModelName"))
  {
    m_customModelName = jsonValue.GetString("customModelName");

    m_customModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customizationType"))
  {
    m_customizationType = CustomizationTypeMapper::GetCustomizationTypeForName(jsonValue.GetString("customizationType"));

    m_customizationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelCustomizationJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_baseModelArnHasBeenSet)
  {
   payload.WithString("baseModelArn", m_baseModelArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ModelCustomizationJobStatusMapper::GetNameForModelCustomizationJobStatus(m_status));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_customModelArnHasBeenSet)
  {
   payload.WithString("customModelArn", m_customModelArn);

  }

  if(m_customModelNameHasBeenSet)
  {
   payload.WithString("customModelName", m_customModelName);

  }

  if(m_customizationTypeHasBeenSet)
  {
   payload.WithString("customizationType", CustomizationTypeMapper::GetNameForCustomizationType(m_customizationType));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
