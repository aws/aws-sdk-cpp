/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ListVaultsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVaultsResult::ListVaultsResult()
{
}

ListVaultsResult::ListVaultsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVaultsResult& ListVaultsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VaultList"))
  {
    Aws::Utils::Array<JsonView> vaultListJsonList = jsonValue.GetArray("VaultList");
    for(unsigned vaultListIndex = 0; vaultListIndex < vaultListJsonList.GetLength(); ++vaultListIndex)
    {
      m_vaultList.push_back(vaultListJsonList[vaultListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
