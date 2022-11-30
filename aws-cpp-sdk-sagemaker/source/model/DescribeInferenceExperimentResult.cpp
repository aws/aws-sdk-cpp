/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeInferenceExperimentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInferenceExperimentResult::DescribeInferenceExperimentResult() : 
    m_type(InferenceExperimentType::NOT_SET),
    m_status(InferenceExperimentStatus::NOT_SET)
{
}

DescribeInferenceExperimentResult::DescribeInferenceExperimentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(InferenceExperimentType::NOT_SET),
    m_status(InferenceExperimentStatus::NOT_SET)
{
  *this = result;
}

DescribeInferenceExperimentResult& DescribeInferenceExperimentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = InferenceExperimentTypeMapper::GetInferenceExperimentTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetObject("Schedule");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InferenceExperimentStatusMapper::GetInferenceExperimentStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("EndpointMetadata"))
  {
    m_endpointMetadata = jsonValue.GetObject("EndpointMetadata");

  }

  if(jsonValue.ValueExists("ModelVariants"))
  {
    Aws::Utils::Array<JsonView> modelVariantsJsonList = jsonValue.GetArray("ModelVariants");
    for(unsigned modelVariantsIndex = 0; modelVariantsIndex < modelVariantsJsonList.GetLength(); ++modelVariantsIndex)
    {
      m_modelVariants.push_back(modelVariantsJsonList[modelVariantsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("DataStorageConfig"))
  {
    m_dataStorageConfig = jsonValue.GetObject("DataStorageConfig");

  }

  if(jsonValue.ValueExists("ShadowModeConfig"))
  {
    m_shadowModeConfig = jsonValue.GetObject("ShadowModeConfig");

  }

  if(jsonValue.ValueExists("KmsKey"))
  {
    m_kmsKey = jsonValue.GetString("KmsKey");

  }



  return *this;
}
