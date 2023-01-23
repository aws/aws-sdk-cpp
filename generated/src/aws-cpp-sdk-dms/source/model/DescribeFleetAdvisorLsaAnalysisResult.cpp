/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeFleetAdvisorLsaAnalysisResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFleetAdvisorLsaAnalysisResult::DescribeFleetAdvisorLsaAnalysisResult()
{
}

DescribeFleetAdvisorLsaAnalysisResult::DescribeFleetAdvisorLsaAnalysisResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFleetAdvisorLsaAnalysisResult& DescribeFleetAdvisorLsaAnalysisResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Analysis"))
  {
    Aws::Utils::Array<JsonView> analysisJsonList = jsonValue.GetArray("Analysis");
    for(unsigned analysisIndex = 0; analysisIndex < analysisJsonList.GetLength(); ++analysisIndex)
    {
      m_analysis.push_back(analysisJsonList[analysisIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
