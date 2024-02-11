/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ProactiveJoin.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

ProactiveJoin::ProactiveJoin() : 
    m_enabledByMotion(false),
    m_enabledByMotionHasBeenSet(false)
{
}

ProactiveJoin::ProactiveJoin(JsonView jsonValue) : 
    m_enabledByMotion(false),
    m_enabledByMotionHasBeenSet(false)
{
  *this = jsonValue;
}

ProactiveJoin& ProactiveJoin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnabledByMotion"))
  {
    m_enabledByMotion = jsonValue.GetBool("EnabledByMotion");

    m_enabledByMotionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProactiveJoin::Jsonize() const
{
  JsonValue payload;

  if(m_enabledByMotionHasBeenSet)
  {
   payload.WithBool("EnabledByMotion", m_enabledByMotion);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
