/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListEdgeDeploymentPlansResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEdgeDeploymentPlansResult::ListEdgeDeploymentPlansResult()
{
}

ListEdgeDeploymentPlansResult::ListEdgeDeploymentPlansResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEdgeDeploymentPlansResult& ListEdgeDeploymentPlansResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EdgeDeploymentPlanSummaries"))
  {
    Aws::Utils::Array<JsonView> edgeDeploymentPlanSummariesJsonList = jsonValue.GetArray("EdgeDeploymentPlanSummaries");
    for(unsigned edgeDeploymentPlanSummariesIndex = 0; edgeDeploymentPlanSummariesIndex < edgeDeploymentPlanSummariesJsonList.GetLength(); ++edgeDeploymentPlanSummariesIndex)
    {
      m_edgeDeploymentPlanSummaries.push_back(edgeDeploymentPlanSummariesJsonList[edgeDeploymentPlanSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
