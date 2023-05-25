/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewaymanagementapi/model/Identity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayManagementApi
{
namespace Model
{

Identity::Identity() : 
    m_sourceIpHasBeenSet(false),
    m_userAgentHasBeenSet(false)
{
}

Identity::Identity(JsonView jsonValue) : 
    m_sourceIpHasBeenSet(false),
    m_userAgentHasBeenSet(false)
{
  *this = jsonValue;
}

Identity& Identity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceIp"))
  {
    m_sourceIp = jsonValue.GetString("sourceIp");

    m_sourceIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAgent"))
  {
    m_userAgent = jsonValue.GetString("userAgent");

    m_userAgentHasBeenSet = true;
  }

  return *this;
}

JsonValue Identity::Jsonize() const
{
  JsonValue payload;

  if(m_sourceIpHasBeenSet)
  {
   payload.WithString("sourceIp", m_sourceIp);

  }

  if(m_userAgentHasBeenSet)
  {
   payload.WithString("userAgent", m_userAgent);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayManagementApi
} // namespace Aws
