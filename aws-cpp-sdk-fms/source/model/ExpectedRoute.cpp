/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/ExpectedRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

ExpectedRoute::ExpectedRoute() : 
    m_ipV4CidrHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_ipV6CidrHasBeenSet(false),
    m_contributingSubnetsHasBeenSet(false),
    m_allowedTargetsHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
}

ExpectedRoute::ExpectedRoute(JsonView jsonValue) : 
    m_ipV4CidrHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_ipV6CidrHasBeenSet(false),
    m_contributingSubnetsHasBeenSet(false),
    m_allowedTargetsHasBeenSet(false),
    m_routeTableIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExpectedRoute& ExpectedRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IpV4Cidr"))
  {
    m_ipV4Cidr = jsonValue.GetString("IpV4Cidr");

    m_ipV4CidrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrefixListId"))
  {
    m_prefixListId = jsonValue.GetString("PrefixListId");

    m_prefixListIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IpV6Cidr"))
  {
    m_ipV6Cidr = jsonValue.GetString("IpV6Cidr");

    m_ipV6CidrHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContributingSubnets"))
  {
    Aws::Utils::Array<JsonView> contributingSubnetsJsonList = jsonValue.GetArray("ContributingSubnets");
    for(unsigned contributingSubnetsIndex = 0; contributingSubnetsIndex < contributingSubnetsJsonList.GetLength(); ++contributingSubnetsIndex)
    {
      m_contributingSubnets.push_back(contributingSubnetsJsonList[contributingSubnetsIndex].AsString());
    }
    m_contributingSubnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedTargets"))
  {
    Aws::Utils::Array<JsonView> allowedTargetsJsonList = jsonValue.GetArray("AllowedTargets");
    for(unsigned allowedTargetsIndex = 0; allowedTargetsIndex < allowedTargetsJsonList.GetLength(); ++allowedTargetsIndex)
    {
      m_allowedTargets.push_back(allowedTargetsJsonList[allowedTargetsIndex].AsString());
    }
    m_allowedTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetString("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpectedRoute::Jsonize() const
{
  JsonValue payload;

  if(m_ipV4CidrHasBeenSet)
  {
   payload.WithString("IpV4Cidr", m_ipV4Cidr);

  }

  if(m_prefixListIdHasBeenSet)
  {
   payload.WithString("PrefixListId", m_prefixListId);

  }

  if(m_ipV6CidrHasBeenSet)
  {
   payload.WithString("IpV6Cidr", m_ipV6Cidr);

  }

  if(m_contributingSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> contributingSubnetsJsonList(m_contributingSubnets.size());
   for(unsigned contributingSubnetsIndex = 0; contributingSubnetsIndex < contributingSubnetsJsonList.GetLength(); ++contributingSubnetsIndex)
   {
     contributingSubnetsJsonList[contributingSubnetsIndex].AsString(m_contributingSubnets[contributingSubnetsIndex]);
   }
   payload.WithArray("ContributingSubnets", std::move(contributingSubnetsJsonList));

  }

  if(m_allowedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedTargetsJsonList(m_allowedTargets.size());
   for(unsigned allowedTargetsIndex = 0; allowedTargetsIndex < allowedTargetsJsonList.GetLength(); ++allowedTargetsIndex)
   {
     allowedTargetsJsonList[allowedTargetsIndex].AsString(m_allowedTargets[allowedTargetsIndex]);
   }
   payload.WithArray("AllowedTargets", std::move(allowedTargetsJsonList));

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
