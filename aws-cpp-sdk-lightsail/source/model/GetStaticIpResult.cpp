/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetStaticIpResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStaticIpResult::GetStaticIpResult()
{
}

GetStaticIpResult::GetStaticIpResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetStaticIpResult& GetStaticIpResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("staticIp"))
  {
    m_staticIp = jsonValue.GetObject("staticIp");

  }



  return *this;
}
