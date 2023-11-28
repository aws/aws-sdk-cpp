/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListRealtimeContactAnalysisSegmentsV2Result.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRealtimeContactAnalysisSegmentsV2Result::ListRealtimeContactAnalysisSegmentsV2Result() : 
    m_channel(RealTimeContactAnalysisSupportedChannel::NOT_SET),
    m_status(RealTimeContactAnalysisStatus::NOT_SET)
{
}

ListRealtimeContactAnalysisSegmentsV2Result::ListRealtimeContactAnalysisSegmentsV2Result(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_channel(RealTimeContactAnalysisSupportedChannel::NOT_SET),
    m_status(RealTimeContactAnalysisStatus::NOT_SET)
{
  *this = result;
}

ListRealtimeContactAnalysisSegmentsV2Result& ListRealtimeContactAnalysisSegmentsV2Result::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Channel"))
  {
    m_channel = RealTimeContactAnalysisSupportedChannelMapper::GetRealTimeContactAnalysisSupportedChannelForName(jsonValue.GetString("Channel"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = RealTimeContactAnalysisStatusMapper::GetRealTimeContactAnalysisStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Segments"))
  {
    Aws::Utils::Array<JsonView> segmentsJsonList = jsonValue.GetArray("Segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
