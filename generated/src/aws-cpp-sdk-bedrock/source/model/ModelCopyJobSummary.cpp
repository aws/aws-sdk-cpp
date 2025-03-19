/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelCopyJobSummary.h>
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

ModelCopyJobSummary::ModelCopyJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelCopyJobSummary& ModelCopyJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelCopyJobStatusMapper::GetModelCopyJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelArn"))
  {
    m_targetModelArn = jsonValue.GetString("targetModelArn");
    m_targetModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelName"))
  {
    m_targetModelName = jsonValue.GetString("targetModelName");
    m_targetModelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceAccountId"))
  {
    m_sourceAccountId = jsonValue.GetString("sourceAccountId");
    m_sourceAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceModelArn"))
  {
    m_sourceModelArn = jsonValue.GetString("sourceModelArn");
    m_sourceModelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelKmsKeyArn"))
  {
    m_targetModelKmsKeyArn = jsonValue.GetString("targetModelKmsKeyArn");
    m_targetModelKmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetModelTags"))
  {
    Aws::Utils::Array<JsonView> targetModelTagsJsonList = jsonValue.GetArray("targetModelTags");
    for(unsigned targetModelTagsIndex = 0; targetModelTagsIndex < targetModelTagsJsonList.GetLength(); ++targetModelTagsIndex)
    {
      m_targetModelTags.push_back(targetModelTagsJsonList[targetModelTagsIndex].AsObject());
    }
    m_targetModelTagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");
    m_failureMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceModelName"))
  {
    m_sourceModelName = jsonValue.GetString("sourceModelName");
    m_sourceModelNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelCopyJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ModelCopyJobStatusMapper::GetNameForModelCopyJobStatus(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_targetModelArnHasBeenSet)
  {
   payload.WithString("targetModelArn", m_targetModelArn);

  }

  if(m_targetModelNameHasBeenSet)
  {
   payload.WithString("targetModelName", m_targetModelName);

  }

  if(m_sourceAccountIdHasBeenSet)
  {
   payload.WithString("sourceAccountId", m_sourceAccountId);

  }

  if(m_sourceModelArnHasBeenSet)
  {
   payload.WithString("sourceModelArn", m_sourceModelArn);

  }

  if(m_targetModelKmsKeyArnHasBeenSet)
  {
   payload.WithString("targetModelKmsKeyArn", m_targetModelKmsKeyArn);

  }

  if(m_targetModelTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetModelTagsJsonList(m_targetModelTags.size());
   for(unsigned targetModelTagsIndex = 0; targetModelTagsIndex < targetModelTagsJsonList.GetLength(); ++targetModelTagsIndex)
   {
     targetModelTagsJsonList[targetModelTagsIndex].AsObject(m_targetModelTags[targetModelTagsIndex].Jsonize());
   }
   payload.WithArray("targetModelTags", std::move(targetModelTagsJsonList));

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("failureMessage", m_failureMessage);

  }

  if(m_sourceModelNameHasBeenSet)
  {
   payload.WithString("sourceModelName", m_sourceModelName);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
