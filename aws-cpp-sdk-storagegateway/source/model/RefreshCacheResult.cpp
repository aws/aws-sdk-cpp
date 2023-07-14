/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/RefreshCacheResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RefreshCacheResult::RefreshCacheResult()
{
}

RefreshCacheResult::RefreshCacheResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RefreshCacheResult& RefreshCacheResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileShareARN"))
  {
    m_fileShareARN = jsonValue.GetString("FileShareARN");

  }

  if(jsonValue.ValueExists("NotificationId"))
  {
    m_notificationId = jsonValue.GetString("NotificationId");

  }



  return *this;
}
