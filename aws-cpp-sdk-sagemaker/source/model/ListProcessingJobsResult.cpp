/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListProcessingJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProcessingJobsResult::ListProcessingJobsResult()
{
}

ListProcessingJobsResult::ListProcessingJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProcessingJobsResult& ListProcessingJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessingJobSummaries"))
  {
    Aws::Utils::Array<JsonView> processingJobSummariesJsonList = jsonValue.GetArray("ProcessingJobSummaries");
    for(unsigned processingJobSummariesIndex = 0; processingJobSummariesIndex < processingJobSummariesJsonList.GetLength(); ++processingJobSummariesIndex)
    {
      m_processingJobSummaries.push_back(processingJobSummariesJsonList[processingJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
