/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListThingRegistrationTaskReportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThingRegistrationTaskReportsResult::ListThingRegistrationTaskReportsResult() : 
    m_reportType(ReportType::NOT_SET)
{
}

ListThingRegistrationTaskReportsResult::ListThingRegistrationTaskReportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_reportType(ReportType::NOT_SET)
{
  *this = result;
}

ListThingRegistrationTaskReportsResult& ListThingRegistrationTaskReportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceLinks"))
  {
    Aws::Utils::Array<JsonView> resourceLinksJsonList = jsonValue.GetArray("resourceLinks");
    for(unsigned resourceLinksIndex = 0; resourceLinksIndex < resourceLinksJsonList.GetLength(); ++resourceLinksIndex)
    {
      m_resourceLinks.push_back(resourceLinksJsonList[resourceLinksIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("reportType"))
  {
    m_reportType = ReportTypeMapper::GetReportTypeForName(jsonValue.GetString("reportType"));

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
