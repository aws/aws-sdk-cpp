/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetAccountResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccountResult::GetAccountResult()
{
}

GetAccountResult::GetAccountResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAccountResult& GetAccountResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cloudwatchRoleArn"))
  {
    m_cloudwatchRoleArn = jsonValue.GetString("cloudwatchRoleArn");

  }

  if(jsonValue.ValueExists("throttleSettings"))
  {
    m_throttleSettings = jsonValue.GetObject("throttleSettings");

  }

  if(jsonValue.ValueExists("features"))
  {
    Aws::Utils::Array<JsonView> featuresJsonList = jsonValue.GetArray("features");
    for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
    {
      m_features.push_back(featuresJsonList[featuresIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("apiKeyVersion"))
  {
    m_apiKeyVersion = jsonValue.GetString("apiKeyVersion");

  }



  return *this;
}
