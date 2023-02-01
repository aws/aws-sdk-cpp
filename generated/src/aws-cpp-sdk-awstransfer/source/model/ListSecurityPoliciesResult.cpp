/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ListSecurityPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
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
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("SecurityPolicyNames"))
  {
    Aws::Utils::Array<JsonView> securityPolicyNamesJsonList = jsonValue.GetArray("SecurityPolicyNames");
    for(unsigned securityPolicyNamesIndex = 0; securityPolicyNamesIndex < securityPolicyNamesJsonList.GetLength(); ++securityPolicyNamesIndex)
    {
      m_securityPolicyNames.push_back(securityPolicyNamesJsonList[securityPolicyNamesIndex].AsString());
    }
  }



  return *this;
}
