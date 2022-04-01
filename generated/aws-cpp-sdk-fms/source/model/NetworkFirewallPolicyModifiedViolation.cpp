/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkFirewallPolicyModifiedViolation.h>
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

NetworkFirewallPolicyModifiedViolation::NetworkFirewallPolicyModifiedViolation() : 
    m_violationTargetHasBeenSet(false),
    m_currentPolicyDescriptionHasBeenSet(false),
    m_expectedPolicyDescriptionHasBeenSet(false)
{
}

NetworkFirewallPolicyModifiedViolation::NetworkFirewallPolicyModifiedViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_currentPolicyDescriptionHasBeenSet(false),
    m_expectedPolicyDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

NetworkFirewallPolicyModifiedViolation& NetworkFirewallPolicyModifiedViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentPolicyDescription"))
  {
    m_currentPolicyDescription = jsonValue.GetObject("CurrentPolicyDescription");

    m_currentPolicyDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpectedPolicyDescription"))
  {
    m_expectedPolicyDescription = jsonValue.GetObject("ExpectedPolicyDescription");

    m_expectedPolicyDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue NetworkFirewallPolicyModifiedViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_currentPolicyDescriptionHasBeenSet)
  {
   payload.WithObject("CurrentPolicyDescription", m_currentPolicyDescription.Jsonize());

  }

  if(m_expectedPolicyDescriptionHasBeenSet)
  {
   payload.WithObject("ExpectedPolicyDescription", m_expectedPolicyDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
