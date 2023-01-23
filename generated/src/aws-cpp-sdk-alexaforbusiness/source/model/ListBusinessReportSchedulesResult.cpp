/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListBusinessReportSchedulesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBusinessReportSchedulesResult::ListBusinessReportSchedulesResult()
{
}

ListBusinessReportSchedulesResult::ListBusinessReportSchedulesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBusinessReportSchedulesResult& ListBusinessReportSchedulesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BusinessReportSchedules"))
  {
    Aws::Utils::Array<JsonView> businessReportSchedulesJsonList = jsonValue.GetArray("BusinessReportSchedules");
    for(unsigned businessReportSchedulesIndex = 0; businessReportSchedulesIndex < businessReportSchedulesJsonList.GetLength(); ++businessReportSchedulesIndex)
    {
      m_businessReportSchedules.push_back(businessReportSchedulesJsonList[businessReportSchedulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
