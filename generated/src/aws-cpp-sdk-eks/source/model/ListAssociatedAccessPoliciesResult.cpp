/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ListAssociatedAccessPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAssociatedAccessPoliciesResult::ListAssociatedAccessPoliciesResult()
{
}

ListAssociatedAccessPoliciesResult::ListAssociatedAccessPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAssociatedAccessPoliciesResult& ListAssociatedAccessPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

  }

  if(jsonValue.ValueExists("principalArn"))
  {
    m_principalArn = jsonValue.GetString("principalArn");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("associatedAccessPolicies"))
  {
    Aws::Utils::Array<JsonView> associatedAccessPoliciesJsonList = jsonValue.GetArray("associatedAccessPolicies");
    for(unsigned associatedAccessPoliciesIndex = 0; associatedAccessPoliciesIndex < associatedAccessPoliciesJsonList.GetLength(); ++associatedAccessPoliciesIndex)
    {
      m_associatedAccessPolicies.push_back(associatedAccessPoliciesJsonList[associatedAccessPoliciesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
