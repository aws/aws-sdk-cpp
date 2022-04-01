/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ResetDistributionCacheResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ResetDistributionCacheResult::ResetDistributionCacheResult()
{
}

ResetDistributionCacheResult::ResetDistributionCacheResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ResetDistributionCacheResult& ResetDistributionCacheResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

  }

  if(jsonValue.ValueExists("operation"))
  {
    m_operation = jsonValue.GetObject("operation");

  }



  return *this;
}
