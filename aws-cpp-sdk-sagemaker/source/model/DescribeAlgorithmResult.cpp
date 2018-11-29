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

#include <aws/sagemaker/model/DescribeAlgorithmResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAlgorithmResult::DescribeAlgorithmResult() : 
    m_algorithmStatus(AlgorithmStatus::NOT_SET),
    m_certifyForMarketplace(false)
{
}

DescribeAlgorithmResult::DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_algorithmStatus(AlgorithmStatus::NOT_SET),
    m_certifyForMarketplace(false)
{
  *this = result;
}

DescribeAlgorithmResult& DescribeAlgorithmResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AlgorithmName"))
  {
    m_algorithmName = jsonValue.GetString("AlgorithmName");

  }

  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");

  }

  if(jsonValue.ValueExists("AlgorithmDescription"))
  {
    m_algorithmDescription = jsonValue.GetString("AlgorithmDescription");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("TrainingSpecification"))
  {
    m_trainingSpecification = jsonValue.GetObject("TrainingSpecification");

  }

  if(jsonValue.ValueExists("InferenceSpecification"))
  {
    m_inferenceSpecification = jsonValue.GetObject("InferenceSpecification");

  }

  if(jsonValue.ValueExists("ValidationSpecification"))
  {
    m_validationSpecification = jsonValue.GetObject("ValidationSpecification");

  }

  if(jsonValue.ValueExists("AlgorithmStatus"))
  {
    m_algorithmStatus = AlgorithmStatusMapper::GetAlgorithmStatusForName(jsonValue.GetString("AlgorithmStatus"));

  }

  if(jsonValue.ValueExists("AlgorithmStatusDetails"))
  {
    m_algorithmStatusDetails = jsonValue.GetObject("AlgorithmStatusDetails");

  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

  }

  if(jsonValue.ValueExists("CertifyForMarketplace"))
  {
    m_certifyForMarketplace = jsonValue.GetBool("CertifyForMarketplace");

  }



  return *this;
}
