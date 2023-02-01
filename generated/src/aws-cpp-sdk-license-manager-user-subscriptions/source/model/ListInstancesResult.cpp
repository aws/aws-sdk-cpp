/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/ListInstancesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstancesResult::ListInstancesResult()
{
}

ListInstancesResult::ListInstancesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstancesResult& ListInstancesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceSummaries"))
  {
    Aws::Utils::Array<JsonView> instanceSummariesJsonList = jsonValue.GetArray("InstanceSummaries");
    for(unsigned instanceSummariesIndex = 0; instanceSummariesIndex < instanceSummariesJsonList.GetLength(); ++instanceSummariesIndex)
    {
      m_instanceSummaries.push_back(instanceSummariesJsonList[instanceSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
