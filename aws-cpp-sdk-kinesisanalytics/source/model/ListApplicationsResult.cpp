/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/ListApplicationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationsResult::ListApplicationsResult() : 
    m_hasMoreApplications(false)
{
}

ListApplicationsResult::ListApplicationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hasMoreApplications(false)
{
  *this = result;
}

ListApplicationsResult& ListApplicationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationSummaries"))
  {
    Aws::Utils::Array<JsonView> applicationSummariesJsonList = jsonValue.GetArray("ApplicationSummaries");
    for(unsigned applicationSummariesIndex = 0; applicationSummariesIndex < applicationSummariesJsonList.GetLength(); ++applicationSummariesIndex)
    {
      m_applicationSummaries.push_back(applicationSummariesJsonList[applicationSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("HasMoreApplications"))
  {
    m_hasMoreApplications = jsonValue.GetBool("HasMoreApplications");

  }



  return *this;
}
