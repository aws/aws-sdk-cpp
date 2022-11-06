/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalyticsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationVersionsResult::ListApplicationVersionsResult()
{
}

ListApplicationVersionsResult::ListApplicationVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationVersionsResult& ListApplicationVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationVersionSummaries"))
  {
    Aws::Utils::Array<JsonView> applicationVersionSummariesJsonList = jsonValue.GetArray("ApplicationVersionSummaries");
    for(unsigned applicationVersionSummariesIndex = 0; applicationVersionSummariesIndex < applicationVersionSummariesJsonList.GetLength(); ++applicationVersionSummariesIndex)
    {
      m_applicationVersionSummaries.push_back(applicationVersionSummariesJsonList[applicationVersionSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
