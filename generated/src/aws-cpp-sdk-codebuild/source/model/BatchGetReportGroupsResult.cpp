/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BatchGetReportGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetReportGroupsResult::BatchGetReportGroupsResult()
{
}

BatchGetReportGroupsResult::BatchGetReportGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetReportGroupsResult& BatchGetReportGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reportGroups"))
  {
    Aws::Utils::Array<JsonView> reportGroupsJsonList = jsonValue.GetArray("reportGroups");
    for(unsigned reportGroupsIndex = 0; reportGroupsIndex < reportGroupsJsonList.GetLength(); ++reportGroupsIndex)
    {
      m_reportGroups.push_back(reportGroupsJsonList[reportGroupsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("reportGroupsNotFound"))
  {
    Aws::Utils::Array<JsonView> reportGroupsNotFoundJsonList = jsonValue.GetArray("reportGroupsNotFound");
    for(unsigned reportGroupsNotFoundIndex = 0; reportGroupsNotFoundIndex < reportGroupsNotFoundJsonList.GetLength(); ++reportGroupsNotFoundIndex)
    {
      m_reportGroupsNotFound.push_back(reportGroupsNotFoundJsonList[reportGroupsNotFoundIndex].AsString());
    }
  }



  return *this;
}
