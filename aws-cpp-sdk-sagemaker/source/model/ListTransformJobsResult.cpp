/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListTransformJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTransformJobsResult::ListTransformJobsResult()
{
}

ListTransformJobsResult::ListTransformJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTransformJobsResult& ListTransformJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransformJobSummaries"))
  {
    Aws::Utils::Array<JsonView> transformJobSummariesJsonList = jsonValue.GetArray("TransformJobSummaries");
    for(unsigned transformJobSummariesIndex = 0; transformJobSummariesIndex < transformJobSummariesJsonList.GetLength(); ++transformJobSummariesIndex)
    {
      m_transformJobSummaries.push_back(transformJobSummariesJsonList[transformJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
