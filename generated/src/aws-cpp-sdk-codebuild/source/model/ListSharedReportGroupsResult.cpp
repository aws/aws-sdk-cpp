/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ListSharedReportGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSharedReportGroupsResult::ListSharedReportGroupsResult()
{
}

ListSharedReportGroupsResult::ListSharedReportGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSharedReportGroupsResult& ListSharedReportGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("reportGroups"))
  {
    Aws::Utils::Array<JsonView> reportGroupsJsonList = jsonValue.GetArray("reportGroups");
    for(unsigned reportGroupsIndex = 0; reportGroupsIndex < reportGroupsJsonList.GetLength(); ++reportGroupsIndex)
    {
      m_reportGroups.push_back(reportGroupsJsonList[reportGroupsIndex].AsString());
    }
  }



  return *this;
}
