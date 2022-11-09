/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRelationalDatabaseLogStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRelationalDatabaseLogStreamsResult::GetRelationalDatabaseLogStreamsResult()
{
}

GetRelationalDatabaseLogStreamsResult::GetRelationalDatabaseLogStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRelationalDatabaseLogStreamsResult& GetRelationalDatabaseLogStreamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("logStreams"))
  {
    Aws::Utils::Array<JsonView> logStreamsJsonList = jsonValue.GetArray("logStreams");
    for(unsigned logStreamsIndex = 0; logStreamsIndex < logStreamsJsonList.GetLength(); ++logStreamsIndex)
    {
      m_logStreams.push_back(logStreamsJsonList[logStreamsIndex].AsString());
    }
  }



  return *this;
}
