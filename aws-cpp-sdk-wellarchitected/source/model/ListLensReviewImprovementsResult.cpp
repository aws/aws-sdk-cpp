/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/ListLensReviewImprovementsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WellArchitected::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLensReviewImprovementsResult::ListLensReviewImprovementsResult() : 
    m_milestoneNumber(0)
{
}

ListLensReviewImprovementsResult::ListLensReviewImprovementsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_milestoneNumber(0)
{
  *this = result;
}

ListLensReviewImprovementsResult& ListLensReviewImprovementsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("LensAlias"))
  {
    m_lensAlias = jsonValue.GetString("LensAlias");

  }

  if(jsonValue.ValueExists("LensArn"))
  {
    m_lensArn = jsonValue.GetString("LensArn");

  }

  if(jsonValue.ValueExists("ImprovementSummaries"))
  {
    Aws::Utils::Array<JsonView> improvementSummariesJsonList = jsonValue.GetArray("ImprovementSummaries");
    for(unsigned improvementSummariesIndex = 0; improvementSummariesIndex < improvementSummariesJsonList.GetLength(); ++improvementSummariesIndex)
    {
      m_improvementSummaries.push_back(improvementSummariesJsonList[improvementSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
