/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/PipelineSummary.h>
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

PipelineSummary::PipelineSummary() : 
    m_pipelineArnHasBeenSet(false),
    m_pipelineNameHasBeenSet(false),
    m_pipelineDisplayNameHasBeenSet(false),
    m_pipelineDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastExecutionTimeHasBeenSet(false)
{
}

PipelineSummary::PipelineSummary(JsonView jsonValue) : 
    m_pipelineArnHasBeenSet(false),
    m_pipelineNameHasBeenSet(false),
    m_pipelineDisplayNameHasBeenSet(false),
    m_pipelineDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastExecutionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineSummary& PipelineSummary::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("LastExecutionTime"))
  {
    m_lastExecutionTime = jsonValue.GetDouble("LastExecutionTime");

    m_lastExecutionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineSummary::Jsonize() const
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

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastExecutionTimeHasBeenSet)
  {
   payload.WithDouble("LastExecutionTime", m_lastExecutionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
