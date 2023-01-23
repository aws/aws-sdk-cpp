/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/IpRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

IpRoute::IpRoute() : 
    m_cidrIpHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

IpRoute::IpRoute(JsonView jsonValue) : 
    m_cidrIpHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

IpRoute& IpRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CidrIp"))
  {
    m_cidrIp = jsonValue.GetString("CidrIp");

    m_cidrIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue IpRoute::Jsonize() const
{
  JsonValue payload;

  if(m_cidrIpHasBeenSet)
  {
   payload.WithString("CidrIp", m_cidrIp);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
