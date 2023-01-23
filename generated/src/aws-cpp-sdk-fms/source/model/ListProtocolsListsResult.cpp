/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ListProtocolsListsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProtocolsListsResult::ListProtocolsListsResult()
{
}

ListProtocolsListsResult::ListProtocolsListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProtocolsListsResult& ListProtocolsListsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProtocolsLists"))
  {
    Aws::Utils::Array<JsonView> protocolsListsJsonList = jsonValue.GetArray("ProtocolsLists");
    for(unsigned protocolsListsIndex = 0; protocolsListsIndex < protocolsListsJsonList.GetLength(); ++protocolsListsIndex)
    {
      m_protocolsLists.push_back(protocolsListsJsonList[protocolsListsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
