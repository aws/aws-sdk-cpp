/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListLocalDisksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLocalDisksResult::ListLocalDisksResult()
{
}

ListLocalDisksResult::ListLocalDisksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLocalDisksResult& ListLocalDisksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("Disks"))
  {
    Aws::Utils::Array<JsonView> disksJsonList = jsonValue.GetArray("Disks");
    for(unsigned disksIndex = 0; disksIndex < disksJsonList.GetLength(); ++disksIndex)
    {
      m_disks.push_back(disksJsonList[disksIndex].AsObject());
    }
  }



  return *this;
}
