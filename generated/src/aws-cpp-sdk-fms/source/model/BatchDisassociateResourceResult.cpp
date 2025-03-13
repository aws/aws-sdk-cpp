/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/BatchDisassociateResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDisassociateResourceResult::BatchDisassociateResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDisassociateResourceResult& BatchDisassociateResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceSetIdentifier"))
  {
    m_resourceSetIdentifier = jsonValue.GetString("ResourceSetIdentifier");
    m_resourceSetIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedItems"))
  {
    Aws::Utils::Array<JsonView> failedItemsJsonList = jsonValue.GetArray("FailedItems");
    for(unsigned failedItemsIndex = 0; failedItemsIndex < failedItemsJsonList.GetLength(); ++failedItemsIndex)
    {
      m_failedItems.push_back(failedItemsJsonList[failedItemsIndex].AsObject());
    }
    m_failedItemsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
