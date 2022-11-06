/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ListMultiplexProgramsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMultiplexProgramsResult::ListMultiplexProgramsResult()
{
}

ListMultiplexProgramsResult::ListMultiplexProgramsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMultiplexProgramsResult& ListMultiplexProgramsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("multiplexPrograms"))
  {
    Aws::Utils::Array<JsonView> multiplexProgramsJsonList = jsonValue.GetArray("multiplexPrograms");
    for(unsigned multiplexProgramsIndex = 0; multiplexProgramsIndex < multiplexProgramsJsonList.GetLength(); ++multiplexProgramsIndex)
    {
      m_multiplexPrograms.push_back(multiplexProgramsJsonList[multiplexProgramsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
