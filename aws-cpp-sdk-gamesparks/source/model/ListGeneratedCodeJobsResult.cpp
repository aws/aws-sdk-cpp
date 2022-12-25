/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ListGeneratedCodeJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGeneratedCodeJobsResult::ListGeneratedCodeJobsResult()
{
}

ListGeneratedCodeJobsResult::ListGeneratedCodeJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGeneratedCodeJobsResult& ListGeneratedCodeJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GeneratedCodeJobs"))
  {
    Aws::Utils::Array<JsonView> generatedCodeJobsJsonList = jsonValue.GetArray("GeneratedCodeJobs");
    for(unsigned generatedCodeJobsIndex = 0; generatedCodeJobsIndex < generatedCodeJobsJsonList.GetLength(); ++generatedCodeJobsIndex)
    {
      m_generatedCodeJobs.push_back(generatedCodeJobsJsonList[generatedCodeJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
