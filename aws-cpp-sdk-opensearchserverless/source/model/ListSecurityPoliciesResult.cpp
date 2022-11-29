/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/ListSecurityPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSecurityPoliciesResult::ListSecurityPoliciesResult()
{
}

ListSecurityPoliciesResult::ListSecurityPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSecurityPoliciesResult& ListSecurityPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("securityPolicySummaries"))
  {
    Aws::Utils::Array<JsonView> securityPolicySummariesJsonList = jsonValue.GetArray("securityPolicySummaries");
    for(unsigned securityPolicySummariesIndex = 0; securityPolicySummariesIndex < securityPolicySummariesJsonList.GetLength(); ++securityPolicySummariesIndex)
    {
      m_securityPolicySummaries.push_back(securityPolicySummariesJsonList[securityPolicySummariesIndex].AsObject());
    }
  }



  return *this;
}
