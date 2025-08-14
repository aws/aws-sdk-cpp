/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetGlueIdentityCenterConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGlueIdentityCenterConfigurationResult::GetGlueIdentityCenterConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGlueIdentityCenterConfigurationResult& GetGlueIdentityCenterConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceArn"))
  {
    m_instanceArn = jsonValue.GetString("InstanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Scopes"))
  {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("Scopes");
    for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
    {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsString());
    }
    m_scopesHasBeenSet = true;
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
