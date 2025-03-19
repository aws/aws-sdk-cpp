/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ListJobParameterDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJobParameterDefinitionsResult::ListJobParameterDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJobParameterDefinitionsResult& ListJobParameterDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobParameterDefinitions"))
  {
    Aws::Utils::Array<JsonView> jobParameterDefinitionsJsonList = jsonValue.GetArray("jobParameterDefinitions");
    for(unsigned jobParameterDefinitionsIndex = 0; jobParameterDefinitionsIndex < jobParameterDefinitionsJsonList.GetLength(); ++jobParameterDefinitionsIndex)
    {
      m_jobParameterDefinitions.push_back(jobParameterDefinitionsJsonList[jobParameterDefinitionsIndex].AsObject());
    }
    m_jobParameterDefinitionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
