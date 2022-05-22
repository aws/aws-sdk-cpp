/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/SOAChange.h>
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

SOAChange::SOAChange() : 
    m_tTL(0),
    m_tTLHasBeenSet(false)
{
}

SOAChange::SOAChange(JsonView jsonValue) : 
    m_tTL(0),
    m_tTLHasBeenSet(false)
{
  *this = jsonValue;
}

SOAChange& SOAChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TTL"))
  {
    m_tTL = jsonValue.GetInt64("TTL");

    m_tTLHasBeenSet = true;
  }

  return *this;
}

JsonValue SOAChange::Jsonize() const
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
