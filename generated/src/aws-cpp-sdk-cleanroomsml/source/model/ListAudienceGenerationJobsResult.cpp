﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListAudienceGenerationJobsResult.h>
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

ListAudienceGenerationJobsResult::ListAudienceGenerationJobsResult()
{
}

ListAudienceGenerationJobsResult::ListAudienceGenerationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAudienceGenerationJobsResult& ListAudienceGenerationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("audienceGenerationJobs"))
  {
    Aws::Utils::Array<JsonView> audienceGenerationJobsJsonList = jsonValue.GetArray("audienceGenerationJobs");
    for(unsigned audienceGenerationJobsIndex = 0; audienceGenerationJobsIndex < audienceGenerationJobsJsonList.GetLength(); ++audienceGenerationJobsIndex)
    {
      m_audienceGenerationJobs.push_back(audienceGenerationJobsJsonList[audienceGenerationJobsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
