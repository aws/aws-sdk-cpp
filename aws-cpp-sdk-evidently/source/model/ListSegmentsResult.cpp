/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ListSegmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSegmentsResult::ListSegmentsResult()
{
}

ListSegmentsResult::ListSegmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSegmentsResult& ListSegmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("segments"))
  {
    Aws::Utils::Array<JsonView> segmentsJsonList = jsonValue.GetArray("segments");
    for(unsigned segmentsIndex = 0; segmentsIndex < segmentsJsonList.GetLength(); ++segmentsIndex)
    {
      m_segments.push_back(segmentsJsonList[segmentsIndex].AsObject());
    }
  }



  return *this;
}
