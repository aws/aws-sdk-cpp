/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/ListJobsByPipelineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListJobsByPipelineResult::ListJobsByPipelineResult()
{
}

ListJobsByPipelineResult::ListJobsByPipelineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListJobsByPipelineResult& ListJobsByPipelineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Jobs"))
  {
    Aws::Utils::Array<JsonView> jobsJsonList = jsonValue.GetArray("Jobs");
    for(unsigned jobsIndex = 0; jobsIndex < jobsJsonList.GetLength(); ++jobsIndex)
    {
      m_jobs.push_back(jobsJsonList[jobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
