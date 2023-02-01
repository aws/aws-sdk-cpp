/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ListMediaCapturePipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMediaCapturePipelinesResult::ListMediaCapturePipelinesResult()
{
}

ListMediaCapturePipelinesResult::ListMediaCapturePipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMediaCapturePipelinesResult& ListMediaCapturePipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MediaCapturePipelines"))
  {
    Aws::Utils::Array<JsonView> mediaCapturePipelinesJsonList = jsonValue.GetArray("MediaCapturePipelines");
    for(unsigned mediaCapturePipelinesIndex = 0; mediaCapturePipelinesIndex < mediaCapturePipelinesJsonList.GetLength(); ++mediaCapturePipelinesIndex)
    {
      m_mediaCapturePipelines.push_back(mediaCapturePipelinesJsonList[mediaCapturePipelinesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
