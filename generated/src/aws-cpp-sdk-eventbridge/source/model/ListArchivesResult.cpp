/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ListArchivesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListArchivesResult::ListArchivesResult()
{
}

ListArchivesResult::ListArchivesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListArchivesResult& ListArchivesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Archives"))
  {
    Aws::Utils::Array<JsonView> archivesJsonList = jsonValue.GetArray("Archives");
    for(unsigned archivesIndex = 0; archivesIndex < archivesJsonList.GetLength(); ++archivesIndex)
    {
      m_archives.push_back(archivesJsonList[archivesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
