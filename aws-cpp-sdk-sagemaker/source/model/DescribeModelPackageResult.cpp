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

#include <aws/sagemaker/model/DescribeModelPackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelPackageResult::DescribeModelPackageResult() : 
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_certifyForMarketplace(false)
{
}

DescribeModelPackageResult::DescribeModelPackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelPackageStatus(ModelPackageStatus::NOT_SET),
    m_certifyForMarketplace(false)
{
  *this = result;
}

DescribeModelPackageResult& DescribeModelPackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelPackageName"))
  {
    m_modelPackageName = jsonValue.GetString("ModelPackageName");

  }

  if(jsonValue.ValueExists("ModelPackageArn"))
  {
    m_modelPackageArn = jsonValue.GetString("ModelPackageArn");

  }

  if(jsonValue.ValueExists("ModelPackageDescription"))
  {
    m_modelPackageDescription = jsonValue.GetString("ModelPackageDescription");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("InferenceSpecification"))
  {
    m_inferenceSpecification = jsonValue.GetObject("InferenceSpecification");

  }

  if(jsonValue.ValueExists("SourceAlgorithmSpecification"))
  {
    m_sourceAlgorithmSpecification = jsonValue.GetObject("SourceAlgorithmSpecification");

  }

  if(jsonValue.ValueExists("ValidationSpecification"))
  {
    m_validationSpecification = jsonValue.GetObject("ValidationSpecification");

  }

  if(jsonValue.ValueExists("ModelPackageStatus"))
  {
    m_modelPackageStatus = ModelPackageStatusMapper::GetModelPackageStatusForName(jsonValue.GetString("ModelPackageStatus"));

  }

  if(jsonValue.ValueExists("ModelPackageStatusDetails"))
  {
    m_modelPackageStatusDetails = jsonValue.GetObject("ModelPackageStatusDetails");

  }

  if(jsonValue.ValueExists("CertifyForMarketplace"))
  {
    m_certifyForMarketplace = jsonValue.GetBool("CertifyForMarketplace");

  }



  return *this;
}
