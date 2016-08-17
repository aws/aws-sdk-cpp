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
#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisioningParametersResult::DescribeProvisioningParametersResult()
{
}

DescribeProvisioningParametersResult::DescribeProvisioningParametersResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProvisioningParametersResult& DescribeProvisioningParametersResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("ProvisioningArtifactParameters"))
  {
    Array<JsonValue> provisioningArtifactParametersJsonList = jsonValue.GetArray("ProvisioningArtifactParameters");
    for(unsigned provisioningArtifactParametersIndex = 0; provisioningArtifactParametersIndex < provisioningArtifactParametersJsonList.GetLength(); ++provisioningArtifactParametersIndex)
    {
      m_provisioningArtifactParameters.push_back(provisioningArtifactParametersJsonList[provisioningArtifactParametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ConstraintSummaries"))
  {
    Array<JsonValue> constraintSummariesJsonList = jsonValue.GetArray("ConstraintSummaries");
    for(unsigned constraintSummariesIndex = 0; constraintSummariesIndex < constraintSummariesJsonList.GetLength(); ++constraintSummariesIndex)
    {
      m_constraintSummaries.push_back(constraintSummariesJsonList[constraintSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UsageInstructions"))
  {
    Array<JsonValue> usageInstructionsJsonList = jsonValue.GetArray("UsageInstructions");
    for(unsigned usageInstructionsIndex = 0; usageInstructionsIndex < usageInstructionsJsonList.GetLength(); ++usageInstructionsIndex)
    {
      m_usageInstructions.push_back(usageInstructionsJsonList[usageInstructionsIndex].AsObject());
    }
  }



  return *this;
}
