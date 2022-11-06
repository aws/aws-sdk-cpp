/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/ListNetworksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListNetworksResult::ListNetworksResult()
{
}

ListNetworksResult::ListNetworksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListNetworksResult& ListNetworksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Networks"))
  {
    Aws::Utils::Array<JsonView> networksJsonList = jsonValue.GetArray("Networks");
    for(unsigned networksIndex = 0; networksIndex < networksJsonList.GetLength(); ++networksIndex)
    {
      m_networks.push_back(networksJsonList[networksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
