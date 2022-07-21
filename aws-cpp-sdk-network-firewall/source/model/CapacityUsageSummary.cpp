/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/CapacityUsageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkFirewall
{
namespace Model
{

CapacityUsageSummary::CapacityUsageSummary() : 
    m_cIDRsHasBeenSet(false)
{
}

CapacityUsageSummary::CapacityUsageSummary(JsonView jsonValue) : 
    m_cIDRsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityUsageSummary& CapacityUsageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CIDRs"))
  {
    m_cIDRs = jsonValue.GetObject("CIDRs");

    m_cIDRsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityUsageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_cIDRsHasBeenSet)
  {
   payload.WithObject("CIDRs", m_cIDRs.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
