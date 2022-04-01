/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/RouteFilterPrefix.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

RouteFilterPrefix::RouteFilterPrefix() : 
    m_cidrHasBeenSet(false)
{
}

RouteFilterPrefix::RouteFilterPrefix(JsonView jsonValue) : 
    m_cidrHasBeenSet(false)
{
  *this = jsonValue;
}

RouteFilterPrefix& RouteFilterPrefix::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidr"))
  {
    m_cidr = jsonValue.GetString("cidr");

    m_cidrHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteFilterPrefix::Jsonize() const
{
  JsonValue payload;

  if(m_cidrHasBeenSet)
  {
   payload.WithString("cidr", m_cidr);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
