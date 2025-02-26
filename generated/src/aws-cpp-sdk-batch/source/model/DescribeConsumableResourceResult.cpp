/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/DescribeConsumableResourceResult.h>
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

DescribeConsumableResourceResult::DescribeConsumableResourceResult() : 
    m_totalQuantity(0),
    m_inUseQuantity(0),
    m_availableQuantity(0),
    m_createdAt(0)
{
}

DescribeConsumableResourceResult::DescribeConsumableResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : DescribeConsumableResourceResult()
{
  *this = result;
}

DescribeConsumableResourceResult& DescribeConsumableResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("inUseQuantity"))
  {
    m_inUseQuantity = jsonValue.GetInt64("inUseQuantity");

  }

  if(jsonValue.ValueExists("availableQuantity"))
  {
    m_availableQuantity = jsonValue.GetInt64("availableQuantity");

  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetInt64("createdAt");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
