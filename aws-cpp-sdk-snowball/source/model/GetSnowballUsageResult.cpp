/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/GetSnowballUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSnowballUsageResult::GetSnowballUsageResult() : 
    m_snowballLimit(0),
    m_snowballsInUse(0)
{
}

GetSnowballUsageResult::GetSnowballUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_snowballLimit(0),
    m_snowballsInUse(0)
{
  *this = result;
}

GetSnowballUsageResult& GetSnowballUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnowballLimit"))
  {
    m_snowballLimit = jsonValue.GetInteger("SnowballLimit");

  }

  if(jsonValue.ValueExists("SnowballsInUse"))
  {
    m_snowballsInUse = jsonValue.GetInteger("SnowballsInUse");

  }



  return *this;
}
