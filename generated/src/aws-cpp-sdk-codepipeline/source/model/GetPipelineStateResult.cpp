/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/GetPipelineStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodePipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPipelineStateResult::GetPipelineStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPipelineStateResult& GetPipelineStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
  if(jsonValue.ValueExists("stageStates"))
  {
    Aws::Utils::Array<JsonView> stageStatesJsonList = jsonValue.GetArray("stageStates");
    for(unsigned stageStatesIndex = 0; stageStatesIndex < stageStatesJsonList.GetLength(); ++stageStatesIndex)
    {
      m_stageStates.push_back(stageStatesJsonList[stageStatesIndex].AsObject());
    }
    m_stageStatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");
    m_createdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updated"))
  {
    m_updated = jsonValue.GetDouble("updated");
    m_updatedHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
