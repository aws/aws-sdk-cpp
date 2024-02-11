/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/UpdateMatchingWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateMatchingWorkflowResult::UpdateMatchingWorkflowResult()
{
}

UpdateMatchingWorkflowResult::UpdateMatchingWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateMatchingWorkflowResult& UpdateMatchingWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("incrementalRunConfig"))
  {
    m_incrementalRunConfig = jsonValue.GetObject("incrementalRunConfig");

  }

  if(jsonValue.ValueExists("inputSourceConfig"))
  {
    Aws::Utils::Array<JsonView> inputSourceConfigJsonList = jsonValue.GetArray("inputSourceConfig");
    for(unsigned inputSourceConfigIndex = 0; inputSourceConfigIndex < inputSourceConfigJsonList.GetLength(); ++inputSourceConfigIndex)
    {
      m_inputSourceConfig.push_back(inputSourceConfigJsonList[inputSourceConfigIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("outputSourceConfig"))
  {
    Aws::Utils::Array<JsonView> outputSourceConfigJsonList = jsonValue.GetArray("outputSourceConfig");
    for(unsigned outputSourceConfigIndex = 0; outputSourceConfigIndex < outputSourceConfigJsonList.GetLength(); ++outputSourceConfigIndex)
    {
      m_outputSourceConfig.push_back(outputSourceConfigJsonList[outputSourceConfigIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("resolutionTechniques"))
  {
    m_resolutionTechniques = jsonValue.GetObject("resolutionTechniques");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("workflowName"))
  {
    m_workflowName = jsonValue.GetString("workflowName");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
