/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/ListCodeReviewsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCodeReviewsResult::ListCodeReviewsResult()
{
}

ListCodeReviewsResult::ListCodeReviewsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCodeReviewsResult& ListCodeReviewsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeReviewSummaries"))
  {
    Aws::Utils::Array<JsonView> codeReviewSummariesJsonList = jsonValue.GetArray("CodeReviewSummaries");
    for(unsigned codeReviewSummariesIndex = 0; codeReviewSummariesIndex < codeReviewSummariesJsonList.GetLength(); ++codeReviewSummariesIndex)
    {
      m_codeReviewSummaries.push_back(codeReviewSummariesJsonList[codeReviewSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
