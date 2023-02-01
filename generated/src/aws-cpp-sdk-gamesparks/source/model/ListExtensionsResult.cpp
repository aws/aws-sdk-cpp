/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamesparks/model/ListExtensionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameSparks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExtensionsResult::ListExtensionsResult()
{
}

ListExtensionsResult::ListExtensionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExtensionsResult& ListExtensionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Extensions"))
  {
    Aws::Utils::Array<JsonView> extensionsJsonList = jsonValue.GetArray("Extensions");
    for(unsigned extensionsIndex = 0; extensionsIndex < extensionsJsonList.GetLength(); ++extensionsIndex)
    {
      m_extensions.push_back(extensionsJsonList[extensionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
