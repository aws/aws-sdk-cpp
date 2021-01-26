/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProvisioningParametersResult::DescribeProvisioningParametersResult()
{
}

DescribeProvisioningParametersResult::DescribeProvisioningParametersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProvisioningParametersResult& DescribeProvisioningParametersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProvisioningArtifactParameters"))
  {
    Array<JsonView> provisioningArtifactParametersJsonList = jsonValue.GetArray("ProvisioningArtifactParameters");
    for(unsigned provisioningArtifactParametersIndex = 0; provisioningArtifactParametersIndex < provisioningArtifactParametersJsonList.GetLength(); ++provisioningArtifactParametersIndex)
    {
      m_provisioningArtifactParameters.push_back(provisioningArtifactParametersJsonList[provisioningArtifactParametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ConstraintSummaries"))
  {
    Array<JsonView> constraintSummariesJsonList = jsonValue.GetArray("ConstraintSummaries");
    for(unsigned constraintSummariesIndex = 0; constraintSummariesIndex < constraintSummariesJsonList.GetLength(); ++constraintSummariesIndex)
    {
      m_constraintSummaries.push_back(constraintSummariesJsonList[constraintSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("UsageInstructions"))
  {
    Array<JsonView> usageInstructionsJsonList = jsonValue.GetArray("UsageInstructions");
    for(unsigned usageInstructionsIndex = 0; usageInstructionsIndex < usageInstructionsJsonList.GetLength(); ++usageInstructionsIndex)
    {
      m_usageInstructions.push_back(usageInstructionsJsonList[usageInstructionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TagOptions"))
  {
    Array<JsonView> tagOptionsJsonList = jsonValue.GetArray("TagOptions");
    for(unsigned tagOptionsIndex = 0; tagOptionsIndex < tagOptionsJsonList.GetLength(); ++tagOptionsIndex)
    {
      m_tagOptions.push_back(tagOptionsJsonList[tagOptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProvisioningArtifactPreferences"))
  {
    m_provisioningArtifactPreferences = jsonValue.GetObject("ProvisioningArtifactPreferences");

  }

  if(jsonValue.ValueExists("ProvisioningArtifactOutputs"))
  {
    Array<JsonView> provisioningArtifactOutputsJsonList = jsonValue.GetArray("ProvisioningArtifactOutputs");
    for(unsigned provisioningArtifactOutputsIndex = 0; provisioningArtifactOutputsIndex < provisioningArtifactOutputsJsonList.GetLength(); ++provisioningArtifactOutputsIndex)
    {
      m_provisioningArtifactOutputs.push_back(provisioningArtifactOutputsJsonList[provisioningArtifactOutputsIndex].AsObject());
    }
  }



  return *this;
}
