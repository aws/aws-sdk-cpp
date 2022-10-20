/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensReviewsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLensReviewsResult::ListLensReviewsResult() : 
    m_milestoneNumber(0)
{
}

ListLensReviewsResult::ListLensReviewsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_milestoneNumber(0)
{
  *this = result;
}

ListLensReviewsResult& ListLensReviewsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

  }

  if(jsonValue.ValueExists("MilestoneNumber"))
  {
    m_milestoneNumber = jsonValue.GetInteger("MilestoneNumber");

  }

  if(jsonValue.ValueExists("LensReviewSummaries"))
  {
    Aws::Utils::Array<JsonView> lensReviewSummariesJsonList = jsonValue.GetArray("LensReviewSummaries");
    for(unsigned lensReviewSummariesIndex = 0; lensReviewSummariesIndex < lensReviewSummariesJsonList.GetLength(); ++lensReviewSummariesIndex)
    {
      m_lensReviewSummaries.push_back(lensReviewSummariesJsonList[lensReviewSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
