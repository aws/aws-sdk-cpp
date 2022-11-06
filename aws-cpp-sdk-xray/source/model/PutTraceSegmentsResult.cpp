/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/PutTraceSegmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutTraceSegmentsResult::PutTraceSegmentsResult()
{
}

PutTraceSegmentsResult::PutTraceSegmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutTraceSegmentsResult& PutTraceSegmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UnprocessedTraceSegments"))
  {
    Aws::Utils::Array<JsonView> unprocessedTraceSegmentsJsonList = jsonValue.GetArray("UnprocessedTraceSegments");
    for(unsigned unprocessedTraceSegmentsIndex = 0; unprocessedTraceSegmentsIndex < unprocessedTraceSegmentsJsonList.GetLength(); ++unprocessedTraceSegmentsIndex)
    {
      m_unprocessedTraceSegments.push_back(unprocessedTraceSegmentsJsonList[unprocessedTraceSegmentsIndex].AsObject());
    }
  }



  return *this;
}
