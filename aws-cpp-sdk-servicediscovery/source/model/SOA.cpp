/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/SOA.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

SOA::SOA() : 
    m_tTL(0),
    m_tTLHasBeenSet(false)
{
}

SOA::SOA(JsonView jsonValue) : 
    m_tTL(0),
    m_tTLHasBeenSet(false)
{
  *this = jsonValue;
}

SOA& SOA::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TTL"))
  {
    m_tTL = jsonValue.GetInt64("TTL");

    m_tTLHasBeenSet = true;
  }

  return *this;
}

JsonValue SOA::Jsonize() const
{
  JsonValue payload;

  if(m_tTLHasBeenSet)
  {
   payload.WithInt64("TTL", m_tTL);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
