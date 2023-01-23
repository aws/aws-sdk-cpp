/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListPolicyVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPolicyVersionsResult::ListPolicyVersionsResult()
{
}

ListPolicyVersionsResult::ListPolicyVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPolicyVersionsResult& ListPolicyVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("policyVersions"))
  {
    Aws::Utils::Array<JsonView> policyVersionsJsonList = jsonValue.GetArray("policyVersions");
    for(unsigned policyVersionsIndex = 0; policyVersionsIndex < policyVersionsJsonList.GetLength(); ++policyVersionsIndex)
    {
      m_policyVersions.push_back(policyVersionsJsonList[policyVersionsIndex].AsObject());
    }
  }



  return *this;
}
