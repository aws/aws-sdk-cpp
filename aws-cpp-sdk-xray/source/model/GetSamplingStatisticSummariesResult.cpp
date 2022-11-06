/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetSamplingStatisticSummariesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSamplingStatisticSummariesResult::GetSamplingStatisticSummariesResult()
{
}

GetSamplingStatisticSummariesResult::GetSamplingStatisticSummariesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSamplingStatisticSummariesResult& GetSamplingStatisticSummariesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SamplingStatisticSummaries"))
  {
    Aws::Utils::Array<JsonView> samplingStatisticSummariesJsonList = jsonValue.GetArray("SamplingStatisticSummaries");
    for(unsigned samplingStatisticSummariesIndex = 0; samplingStatisticSummariesIndex < samplingStatisticSummariesJsonList.GetLength(); ++samplingStatisticSummariesIndex)
    {
      m_samplingStatisticSummaries.push_back(samplingStatisticSummariesJsonList[samplingStatisticSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
