/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/ImportApiKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportApiKeysResult::ImportApiKeysResult()
{
}

ImportApiKeysResult::ImportApiKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ImportApiKeysResult& ImportApiKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ids"))
  {
    Aws::Utils::Array<JsonView> idsJsonList = jsonValue.GetArray("ids");
    for(unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex)
    {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
  }



  return *this;
}
