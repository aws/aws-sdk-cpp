/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/SipRuleTargetApplication.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

SipRuleTargetApplication::SipRuleTargetApplication() : 
    m_sipMediaApplicationIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
}

SipRuleTargetApplication::SipRuleTargetApplication(JsonView jsonValue) : 
    m_sipMediaApplicationIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_awsRegionHasBeenSet(false)
{
  *this = jsonValue;
}

SipRuleTargetApplication& SipRuleTargetApplication::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SipMediaApplicationId"))
  {
    m_sipMediaApplicationId = jsonValue.GetString("SipMediaApplicationId");

    m_sipMediaApplicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsRegion"))
  {
    m_awsRegion = jsonValue.GetString("AwsRegion");

    m_awsRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue SipRuleTargetApplication::Jsonize() const
{
  JsonValue payload;

  if(m_sipMediaApplicationIdHasBeenSet)
  {
   payload.WithString("SipMediaApplicationId", m_sipMediaApplicationId);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_awsRegionHasBeenSet)
  {
   payload.WithString("AwsRegion", m_awsRegion);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
