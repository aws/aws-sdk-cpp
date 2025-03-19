/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelImportJobSummary.h>
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

ModelImportJobSummary::ModelImportJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelImportJobSummary& ModelImportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelImportJobStatusMapper::GetModelImportJobStatusForName(jsonValue.GetString("status"));
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
  if(jsonValue.ValueExists("importedModelArn"))
  {
    m_importedModelArn = jsonValue.GetString("importedModelArn");
    m_importedModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("importedModelName"))
  {
    m_importedModelName = jsonValue.GetString("importedModelName");
    m_importedModelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelImportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ModelImportJobStatusMapper::GetNameForModelImportJobStatus(m_status));
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

  if(m_importedModelArnHasBeenSet)
  {
   payload.WithString("importedModelArn", m_importedModelArn);

  }

  if(m_importedModelNameHasBeenSet)
  {
   payload.WithString("importedModelName", m_importedModelName);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
