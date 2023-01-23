/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ListStreamKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamKeysResult::ListStreamKeysResult()
{
}

ListStreamKeysResult::ListStreamKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamKeysResult& ListStreamKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("streamKeys"))
  {
    Aws::Utils::Array<JsonView> streamKeysJsonList = jsonValue.GetArray("streamKeys");
    for(unsigned streamKeysIndex = 0; streamKeysIndex < streamKeysJsonList.GetLength(); ++streamKeysIndex)
    {
      m_streamKeys.push_back(streamKeysJsonList[streamKeysIndex].AsObject());
    }
  }



  return *this;
}
