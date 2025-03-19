/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListTrainedModelInferenceJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTrainedModelInferenceJobsResult::ListTrainedModelInferenceJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrainedModelInferenceJobsResult& ListTrainedModelInferenceJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trainedModelInferenceJobs"))
  {
    Aws::Utils::Array<JsonView> trainedModelInferenceJobsJsonList = jsonValue.GetArray("trainedModelInferenceJobs");
    for(unsigned trainedModelInferenceJobsIndex = 0; trainedModelInferenceJobsIndex < trainedModelInferenceJobsJsonList.GetLength(); ++trainedModelInferenceJobsIndex)
    {
      m_trainedModelInferenceJobs.push_back(trainedModelInferenceJobsJsonList[trainedModelInferenceJobsIndex].AsObject());
    }
    m_trainedModelInferenceJobsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
