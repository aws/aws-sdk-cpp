/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/xray/model/GetSamplingTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSamplingTargetsResult::GetSamplingTargetsResult()
{
}

GetSamplingTargetsResult::GetSamplingTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSamplingTargetsResult& GetSamplingTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SamplingTargetDocuments"))
  {
    Array<JsonView> samplingTargetDocumentsJsonList = jsonValue.GetArray("SamplingTargetDocuments");
    for(unsigned samplingTargetDocumentsIndex = 0; samplingTargetDocumentsIndex < samplingTargetDocumentsJsonList.GetLength(); ++samplingTargetDocumentsIndex)
    {
      m_samplingTargetDocuments.push_back(samplingTargetDocumentsJsonList[samplingTargetDocumentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LastRuleModification"))
  {
    m_lastRuleModification = jsonValue.GetDouble("LastRuleModification");

  }

  if(jsonValue.ValueExists("UnprocessedStatistics"))
  {
    Array<JsonView> unprocessedStatisticsJsonList = jsonValue.GetArray("UnprocessedStatistics");
    for(unsigned unprocessedStatisticsIndex = 0; unprocessedStatisticsIndex < unprocessedStatisticsJsonList.GetLength(); ++unprocessedStatisticsIndex)
    {
      m_unprocessedStatistics.push_back(unprocessedStatisticsJsonList[unprocessedStatisticsIndex].AsObject());
    }
  }



  return *this;
}
