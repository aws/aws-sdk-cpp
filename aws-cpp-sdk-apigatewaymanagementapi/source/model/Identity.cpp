/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
