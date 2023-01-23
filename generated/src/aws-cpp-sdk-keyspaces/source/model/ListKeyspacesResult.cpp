/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/ListKeyspacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Keyspaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKeyspacesResult::ListKeyspacesResult()
{
}

ListKeyspacesResult::ListKeyspacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKeyspacesResult& ListKeyspacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("keyspaces"))
  {
    Aws::Utils::Array<JsonView> keyspacesJsonList = jsonValue.GetArray("keyspaces");
    for(unsigned keyspacesIndex = 0; keyspacesIndex < keyspacesJsonList.GetLength(); ++keyspacesIndex)
    {
      m_keyspaces.push_back(keyspacesJsonList[keyspacesIndex].AsObject());
    }
  }



  return *this;
}
