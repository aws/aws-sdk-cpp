/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/Pipeline.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

Pipeline::Pipeline() : 
    m_pipelineArnHasBeenSet(false),
    m_pipelineNameHasBeenSet(false),
    m_pipelineDisplayNameHasBeenSet(false),
    m_pipelineDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_pipelineStatus(PipelineStatus::NOT_SET),
    m_pipelineStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastRunTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Pipeline::Pipeline(JsonView jsonValue) : 
    m_pipelineArnHasBeenSet(false),
    m_pipelineNameHasBeenSet(false),
    m_pipelineDisplayNameHasBeenSet(false),
    m_pipelineDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_pipelineStatus(PipelineStatus::NOT_SET),
    m_pipelineStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastRunTimeHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_parallelismConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Pipeline& Pipeline::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");

    m_pipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineName"))
  {
    m_pipelineName = jsonValue.GetString("PipelineName");

    m_pipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineDisplayName"))
  {
    m_pipelineDisplayName = jsonValue.GetString("PipelineDisplayName");

    m_pipelineDisplayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineDescription"))
  {
    m_pipelineDescription = jsonValue.GetString("PipelineDescription");

    m_pipelineDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PipelineStatus"))
  {
    m_pipelineStatus = PipelineStatusMapper::GetPipelineStatusForName(jsonValue.GetString("PipelineStatus"));

    m_pipelineStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRunTime"))
  {
    m_lastRunTime = jsonValue.GetDouble("LastRunTime");

    m_lastRunTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetObject("CreatedBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetObject("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParallelismConfiguration"))
  {
    m_parallelismConfiguration = jsonValue.GetObject("ParallelismConfiguration");

    m_parallelismConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Pipeline::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("PipelineName", m_pipelineName);

  }

  if(m_pipelineDisplayNameHasBeenSet)
  {
   payload.WithString("PipelineDisplayName", m_pipelineDisplayName);

  }

  if(m_pipelineDescriptionHasBeenSet)
  {
   payload.WithString("PipelineDescription", m_pipelineDescription);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_pipelineStatusHasBeenSet)
  {
   payload.WithString("PipelineStatus", PipelineStatusMapper::GetNameForPipelineStatus(m_pipelineStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastRunTimeHasBeenSet)
  {
   payload.WithDouble("LastRunTime", m_lastRunTime.SecondsWithMSPrecision());
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithObject("CreatedBy", m_createdBy.Jsonize());

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithObject("LastModifiedBy", m_lastModifiedBy.Jsonize());

  }

  if(m_parallelismConfigurationHasBeenSet)
  {
   payload.WithObject("ParallelismConfiguration", m_parallelismConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
