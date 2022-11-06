/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListProjectsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProjectsResult::ListProjectsResult()
{
}

ListProjectsResult::ListProjectsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProjectsResult& ListProjectsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProjectSummaryList"))
  {
    Aws::Utils::Array<JsonView> projectSummaryListJsonList = jsonValue.GetArray("ProjectSummaryList");
    for(unsigned projectSummaryListIndex = 0; projectSummaryListIndex < projectSummaryListJsonList.GetLength(); ++projectSummaryListIndex)
    {
      m_projectSummaryList.push_back(projectSummaryListJsonList[projectSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
