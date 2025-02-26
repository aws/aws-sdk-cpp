/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateConsumableResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateConsumableResourceResult::UpdateConsumableResourceResult() : 
    m_totalQuantity(0)
{
}

UpdateConsumableResourceResult::UpdateConsumableResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateConsumableResourceResult()
{
  *this = result;
}

UpdateConsumableResourceResult& UpdateConsumableResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("consumableResourceName"))
  {
    m_consumableResourceName = jsonValue.GetString("consumableResourceName");

  }

  if(jsonValue.ValueExists("consumableResourceArn"))
  {
    m_consumableResourceArn = jsonValue.GetString("consumableResourceArn");

  }

  if(jsonValue.ValueExists("totalQuantity"))
  {
    m_totalQuantity = jsonValue.GetInt64("totalQuantity");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
