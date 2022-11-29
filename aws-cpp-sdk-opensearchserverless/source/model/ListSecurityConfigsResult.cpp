/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/ListSecurityConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityConfigsResult::ListSecurityConfigsResult()
{
}

ListSecurityConfigsResult::ListSecurityConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSecurityConfigsResult& ListSecurityConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("securityConfigSummaries"))
  {
    Aws::Utils::Array<JsonView> securityConfigSummariesJsonList = jsonValue.GetArray("securityConfigSummaries");
    for(unsigned securityConfigSummariesIndex = 0; securityConfigSummariesIndex < securityConfigSummariesJsonList.GetLength(); ++securityConfigSummariesIndex)
    {
      m_securityConfigSummaries.push_back(securityConfigSummariesJsonList[securityConfigSummariesIndex].AsObject());
    }
  }



  return *this;
}
