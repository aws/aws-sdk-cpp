/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListExperimentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExperimentsResult::ListExperimentsResult()
{
}

ListExperimentsResult::ListExperimentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExperimentsResult& ListExperimentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExperimentSummaries"))
  {
    Aws::Utils::Array<JsonView> experimentSummariesJsonList = jsonValue.GetArray("ExperimentSummaries");
    for(unsigned experimentSummariesIndex = 0; experimentSummariesIndex < experimentSummariesJsonList.GetLength(); ++experimentSummariesIndex)
    {
      m_experimentSummaries.push_back(experimentSummariesJsonList[experimentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
