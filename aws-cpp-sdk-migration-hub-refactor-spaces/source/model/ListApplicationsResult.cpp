/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ListApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationsResult::ListApplicationsResult()
{
}

ListApplicationsResult::ListApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationsResult& ListApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationSummaryList"))
  {
    Aws::Utils::Array<JsonView> applicationSummaryListJsonList = jsonValue.GetArray("ApplicationSummaryList");
    for(unsigned applicationSummaryListIndex = 0; applicationSummaryListIndex < applicationSummaryListJsonList.GetLength(); ++applicationSummaryListIndex)
    {
      m_applicationSummaryList.push_back(applicationSummaryListJsonList[applicationSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
