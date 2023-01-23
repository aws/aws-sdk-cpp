/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallMissingExpectedRoutesViolation.h>
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

NetworkFirewallMissingExpectedRoutesViolation::NetworkFirewallMissingExpectedRoutesViolation() : 
    m_violationTargetHasBeenSet(false),
    m_expectedRoutesHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

NetworkFirewallMissingExpectedRoutesViolation::NetworkFirewallMissingExpectedRoutesViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_expectedRoutesHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallMissingExpectedRoutesViolation& NetworkFirewallMissingExpectedRoutesViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedRoutes"))
  {
    Aws::Utils::Array<JsonView> expectedRoutesJsonList = jsonValue.GetArray("ExpectedRoutes");
    for(unsigned expectedRoutesIndex = 0; expectedRoutesIndex < expectedRoutesJsonList.GetLength(); ++expectedRoutesIndex)
    {
      m_expectedRoutes.push_back(expectedRoutesJsonList[expectedRoutesIndex].AsObject());
    }
    m_expectedRoutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallMissingExpectedRoutesViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_expectedRoutesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> expectedRoutesJsonList(m_expectedRoutes.size());
   for(unsigned expectedRoutesIndex = 0; expectedRoutesIndex < expectedRoutesJsonList.GetLength(); ++expectedRoutesIndex)
   {
     expectedRoutesJsonList[expectedRoutesIndex].AsObject(m_expectedRoutes[expectedRoutesIndex].Jsonize());
   }
   payload.WithArray("ExpectedRoutes", std::move(expectedRoutesJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
