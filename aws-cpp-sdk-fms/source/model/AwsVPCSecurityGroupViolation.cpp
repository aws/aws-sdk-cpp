/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/AwsVPCSecurityGroupViolation.h>
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

AwsVPCSecurityGroupViolation::AwsVPCSecurityGroupViolation() : 
    m_violationTargetHasBeenSet(false),
    m_violationTargetDescriptionHasBeenSet(false),
    m_partialMatchesHasBeenSet(false),
    m_possibleSecurityGroupRemediationActionsHasBeenSet(false)
{
}

AwsVPCSecurityGroupViolation::AwsVPCSecurityGroupViolation(JsonView jsonValue) : 
    m_violationTargetHasBeenSet(false),
    m_violationTargetDescriptionHasBeenSet(false),
    m_partialMatchesHasBeenSet(false),
    m_possibleSecurityGroupRemediationActionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsVPCSecurityGroupViolation& AwsVPCSecurityGroupViolation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ViolationTarget"))
  {
    m_violationTarget = jsonValue.GetString("ViolationTarget");

    m_violationTargetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolationTargetDescription"))
  {
    m_violationTargetDescription = jsonValue.GetString("ViolationTargetDescription");

    m_violationTargetDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartialMatches"))
  {
    Aws::Utils::Array<JsonView> partialMatchesJsonList = jsonValue.GetArray("PartialMatches");
    for(unsigned partialMatchesIndex = 0; partialMatchesIndex < partialMatchesJsonList.GetLength(); ++partialMatchesIndex)
    {
      m_partialMatches.push_back(partialMatchesJsonList[partialMatchesIndex].AsObject());
    }
    m_partialMatchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PossibleSecurityGroupRemediationActions"))
  {
    Aws::Utils::Array<JsonView> possibleSecurityGroupRemediationActionsJsonList = jsonValue.GetArray("PossibleSecurityGroupRemediationActions");
    for(unsigned possibleSecurityGroupRemediationActionsIndex = 0; possibleSecurityGroupRemediationActionsIndex < possibleSecurityGroupRemediationActionsJsonList.GetLength(); ++possibleSecurityGroupRemediationActionsIndex)
    {
      m_possibleSecurityGroupRemediationActions.push_back(possibleSecurityGroupRemediationActionsJsonList[possibleSecurityGroupRemediationActionsIndex].AsObject());
    }
    m_possibleSecurityGroupRemediationActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsVPCSecurityGroupViolation::Jsonize() const
{
  JsonValue payload;

  if(m_violationTargetHasBeenSet)
  {
   payload.WithString("ViolationTarget", m_violationTarget);

  }

  if(m_violationTargetDescriptionHasBeenSet)
  {
   payload.WithString("ViolationTargetDescription", m_violationTargetDescription);

  }

  if(m_partialMatchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partialMatchesJsonList(m_partialMatches.size());
   for(unsigned partialMatchesIndex = 0; partialMatchesIndex < partialMatchesJsonList.GetLength(); ++partialMatchesIndex)
   {
     partialMatchesJsonList[partialMatchesIndex].AsObject(m_partialMatches[partialMatchesIndex].Jsonize());
   }
   payload.WithArray("PartialMatches", std::move(partialMatchesJsonList));

  }

  if(m_possibleSecurityGroupRemediationActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> possibleSecurityGroupRemediationActionsJsonList(m_possibleSecurityGroupRemediationActions.size());
   for(unsigned possibleSecurityGroupRemediationActionsIndex = 0; possibleSecurityGroupRemediationActionsIndex < possibleSecurityGroupRemediationActionsJsonList.GetLength(); ++possibleSecurityGroupRemediationActionsIndex)
   {
     possibleSecurityGroupRemediationActionsJsonList[possibleSecurityGroupRemediationActionsIndex].AsObject(m_possibleSecurityGroupRemediationActions[possibleSecurityGroupRemediationActionsIndex].Jsonize());
   }
   payload.WithArray("PossibleSecurityGroupRemediationActions", std::move(possibleSecurityGroupRemediationActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
