/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsecuretunneling/model/OpenTunnelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTSecureTunneling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

OpenTunnelResult::OpenTunnelResult()
{
}

OpenTunnelResult::OpenTunnelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

OpenTunnelResult& OpenTunnelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("tunnelId"))
  {
    m_tunnelId = jsonValue.GetString("tunnelId");

  }

  if(jsonValue.ValueExists("tunnelArn"))
  {
    m_tunnelArn = jsonValue.GetString("tunnelArn");

  }

  if(jsonValue.ValueExists("sourceAccessToken"))
  {
    m_sourceAccessToken = jsonValue.GetString("sourceAccessToken");

  }

  if(jsonValue.ValueExists("destinationAccessToken"))
  {
    m_destinationAccessToken = jsonValue.GetString("destinationAccessToken");

  }



  return *this;
}
