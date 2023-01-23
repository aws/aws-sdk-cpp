/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/BatchAssociateResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchAssociateResourceResult::BatchAssociateResourceResult()
{
}

BatchAssociateResourceResult::BatchAssociateResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchAssociateResourceResult& BatchAssociateResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceSetIdentifier"))
  {
    m_resourceSetIdentifier = jsonValue.GetString("ResourceSetIdentifier");

  }

  if(jsonValue.ValueExists("FailedItems"))
  {
    Aws::Utils::Array<JsonView> failedItemsJsonList = jsonValue.GetArray("FailedItems");
    for(unsigned failedItemsIndex = 0; failedItemsIndex < failedItemsJsonList.GetLength(); ++failedItemsIndex)
    {
      m_failedItems.push_back(failedItemsJsonList[failedItemsIndex].AsObject());
    }
  }



  return *this;
}
