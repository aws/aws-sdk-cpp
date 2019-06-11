/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/sagemaker/model/DescribeTransformJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTransformJobResult::DescribeTransformJobResult() : 
    m_transformJobStatus(TransformJobStatus::NOT_SET),
    m_maxConcurrentTransforms(0),
    m_maxPayloadInMB(0),
    m_batchStrategy(BatchStrategy::NOT_SET)
{
}

DescribeTransformJobResult::DescribeTransformJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_transformJobStatus(TransformJobStatus::NOT_SET),
    m_maxConcurrentTransforms(0),
    m_maxPayloadInMB(0),
    m_batchStrategy(BatchStrategy::NOT_SET)
{
  *this = result;
}

DescribeTransformJobResult& DescribeTransformJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformJobName"))
  {
    m_transformJobName = jsonValue.GetString("TransformJobName");

  }

  if(jsonValue.ValueExists("TransformJobArn"))
  {
    m_transformJobArn = jsonValue.GetString("TransformJobArn");

  }

  if(jsonValue.ValueExists("TransformJobStatus"))
  {
    m_transformJobStatus = TransformJobStatusMapper::GetTransformJobStatusForName(jsonValue.GetString("TransformJobStatus"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("MaxConcurrentTransforms"))
  {
    m_maxConcurrentTransforms = jsonValue.GetInteger("MaxConcurrentTransforms");

  }

  if(jsonValue.ValueExists("MaxPayloadInMB"))
  {
    m_maxPayloadInMB = jsonValue.GetInteger("MaxPayloadInMB");

  }

  if(jsonValue.ValueExists("BatchStrategy"))
  {
    m_batchStrategy = BatchStrategyMapper::GetBatchStrategyForName(jsonValue.GetString("BatchStrategy"));

  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("TransformInput"))
  {
    m_transformInput = jsonValue.GetObject("TransformInput");

  }

  if(jsonValue.ValueExists("TransformOutput"))
  {
    m_transformOutput = jsonValue.GetObject("TransformOutput");

  }

  if(jsonValue.ValueExists("TransformResources"))
  {
    m_transformResources = jsonValue.GetObject("TransformResources");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("TransformStartTime"))
  {
    m_transformStartTime = jsonValue.GetDouble("TransformStartTime");

  }

  if(jsonValue.ValueExists("TransformEndTime"))
  {
    m_transformEndTime = jsonValue.GetDouble("TransformEndTime");

  }

  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");

  }

  if(jsonValue.ValueExists("DataProcessing"))
  {
    m_dataProcessing = jsonValue.GetObject("DataProcessing");

  }



  return *this;
}
