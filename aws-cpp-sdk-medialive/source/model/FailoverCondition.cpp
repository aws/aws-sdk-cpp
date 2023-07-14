/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FailoverCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

FailoverCondition::FailoverCondition() : 
    m_failoverConditionSettingsHasBeenSet(false)
{
}

FailoverCondition::FailoverCondition(JsonView jsonValue) : 
    m_failoverConditionSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

FailoverCondition& FailoverCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failoverConditionSettings"))
  {
    m_failoverConditionSettings = jsonValue.GetObject("failoverConditionSettings");

    m_failoverConditionSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue FailoverCondition::Jsonize() const
{
  JsonValue payload;

  if(m_failoverConditionSettingsHasBeenSet)
  {
   payload.WithObject("failoverConditionSettings", m_failoverConditionSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
