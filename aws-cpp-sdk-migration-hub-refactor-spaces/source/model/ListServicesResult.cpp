/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ListServicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListServicesResult::ListServicesResult()
{
}

ListServicesResult::ListServicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListServicesResult& ListServicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ServiceSummaryList"))
  {
    Aws::Utils::Array<JsonView> serviceSummaryListJsonList = jsonValue.GetArray("ServiceSummaryList");
    for(unsigned serviceSummaryListIndex = 0; serviceSummaryListIndex < serviceSummaryListJsonList.GetLength(); ++serviceSummaryListIndex)
    {
      m_serviceSummaryList.push_back(serviceSummaryListJsonList[serviceSummaryListIndex].AsObject());
    }
  }



  return *this;
}
