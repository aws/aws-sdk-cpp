/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/PipelineExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

PipelineExecution::PipelineExecution() : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineVersion(0),
    m_pipelineVersionHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_artifactRevisionInformationsHasBeenSet(false)
{
}

PipelineExecution::PipelineExecution(const JsonValue& jsonValue) : 
    m_pipelineNameHasBeenSet(false),
    m_pipelineVersion(0),
    m_pipelineVersionHasBeenSet(false),
    m_pipelineExecutionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_artifactRevisionInformationsHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineExecution& PipelineExecution::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("pipelineName"))
  {
    m_pipelineName = jsonValue.GetString("pipelineName");

    m_pipelineNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineVersion"))
  {
    m_pipelineVersion = jsonValue.GetInteger("pipelineVersion");

    m_pipelineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipelineExecutionId"))
  {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");

    m_pipelineExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PipelineExecutionStatusMapper::GetPipelineExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactRevisionInformations"))
  {
    Array<JsonValue> artifactRevisionInformationsJsonList = jsonValue.GetArray("artifactRevisionInformations");
    for(unsigned artifactRevisionInformationsIndex = 0; artifactRevisionInformationsIndex < artifactRevisionInformationsJsonList.GetLength(); ++artifactRevisionInformationsIndex)
    {
      m_artifactRevisionInformations.push_back(artifactRevisionInformationsJsonList[artifactRevisionInformationsIndex].AsObject());
    }
    m_artifactRevisionInformationsHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineExecution::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineNameHasBeenSet)
  {
   payload.WithString("pipelineName", m_pipelineName);

  }

  if(m_pipelineVersionHasBeenSet)
  {
   payload.WithInteger("pipelineVersion", m_pipelineVersion);

  }

  if(m_pipelineExecutionIdHasBeenSet)
  {
   payload.WithString("pipelineExecutionId", m_pipelineExecutionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PipelineExecutionStatusMapper::GetNameForPipelineExecutionStatus(m_status));
  }

  if(m_artifactRevisionInformationsHasBeenSet)
  {
   Array<JsonValue> artifactRevisionInformationsJsonList(m_artifactRevisionInformations.size());
   for(unsigned artifactRevisionInformationsIndex = 0; artifactRevisionInformationsIndex < artifactRevisionInformationsJsonList.GetLength(); ++artifactRevisionInformationsIndex)
   {
     artifactRevisionInformationsJsonList[artifactRevisionInformationsIndex].AsObject(m_artifactRevisionInformations[artifactRevisionInformationsIndex].Jsonize());
   }
   payload.WithArray("artifactRevisionInformations", std::move(artifactRevisionInformationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws