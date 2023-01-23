/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ListPolicyGenerationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPolicyGenerationsResult::ListPolicyGenerationsResult()
{
}

ListPolicyGenerationsResult::ListPolicyGenerationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPolicyGenerationsResult& ListPolicyGenerationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyGenerations"))
  {
    Aws::Utils::Array<JsonView> policyGenerationsJsonList = jsonValue.GetArray("policyGenerations");
    for(unsigned policyGenerationsIndex = 0; policyGenerationsIndex < policyGenerationsJsonList.GetLength(); ++policyGenerationsIndex)
    {
      m_policyGenerations.push_back(policyGenerationsJsonList[policyGenerationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
