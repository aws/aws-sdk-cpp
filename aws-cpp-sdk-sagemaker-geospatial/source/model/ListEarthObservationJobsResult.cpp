/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/ListEarthObservationJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMakerGeospatial::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEarthObservationJobsResult::ListEarthObservationJobsResult()
{
}

ListEarthObservationJobsResult::ListEarthObservationJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEarthObservationJobsResult& ListEarthObservationJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EarthObservationJobSummaries"))
  {
    Aws::Utils::Array<JsonView> earthObservationJobSummariesJsonList = jsonValue.GetArray("EarthObservationJobSummaries");
    for(unsigned earthObservationJobSummariesIndex = 0; earthObservationJobSummariesIndex < earthObservationJobSummariesJsonList.GetLength(); ++earthObservationJobSummariesIndex)
    {
      m_earthObservationJobSummaries.push_back(earthObservationJobSummariesJsonList[earthObservationJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
