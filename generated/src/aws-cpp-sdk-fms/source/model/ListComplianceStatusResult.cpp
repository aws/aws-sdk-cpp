/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ListComplianceStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComplianceStatusResult::ListComplianceStatusResult()
{
}

ListComplianceStatusResult::ListComplianceStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComplianceStatusResult& ListComplianceStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyComplianceStatusList"))
  {
    Aws::Utils::Array<JsonView> policyComplianceStatusListJsonList = jsonValue.GetArray("PolicyComplianceStatusList");
    for(unsigned policyComplianceStatusListIndex = 0; policyComplianceStatusListIndex < policyComplianceStatusListJsonList.GetLength(); ++policyComplianceStatusListIndex)
    {
      m_policyComplianceStatusList.push_back(policyComplianceStatusListJsonList[policyComplianceStatusListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
