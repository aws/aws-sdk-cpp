/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateWorkloadIdentityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateWorkloadIdentityResult::UpdateWorkloadIdentityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateWorkloadIdentityResult& UpdateWorkloadIdentityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workloadIdentityArn"))
  {
    m_workloadIdentityArn = jsonValue.GetString("workloadIdentityArn");
    m_workloadIdentityArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedResourceOauth2ReturnUrls"))
  {
    Aws::Utils::Array<JsonView> allowedResourceOauth2ReturnUrlsJsonList = jsonValue.GetArray("allowedResourceOauth2ReturnUrls");
    for(unsigned allowedResourceOauth2ReturnUrlsIndex = 0; allowedResourceOauth2ReturnUrlsIndex < allowedResourceOauth2ReturnUrlsJsonList.GetLength(); ++allowedResourceOauth2ReturnUrlsIndex)
    {
      m_allowedResourceOauth2ReturnUrls.push_back(allowedResourceOauth2ReturnUrlsJsonList[allowedResourceOauth2ReturnUrlsIndex].AsString());
    }
    m_allowedResourceOauth2ReturnUrlsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
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
