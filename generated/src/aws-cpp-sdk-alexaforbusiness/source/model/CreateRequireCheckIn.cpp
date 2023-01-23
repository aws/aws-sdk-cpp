/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/CreateRequireCheckIn.h>
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

CreateRequireCheckIn::CreateRequireCheckIn() : 
    m_releaseAfterMinutes(0),
    m_releaseAfterMinutesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

CreateRequireCheckIn::CreateRequireCheckIn(JsonView jsonValue) : 
    m_releaseAfterMinutes(0),
    m_releaseAfterMinutesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

CreateRequireCheckIn& CreateRequireCheckIn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReleaseAfterMinutes"))
  {
    m_releaseAfterMinutes = jsonValue.GetInteger("ReleaseAfterMinutes");

    m_releaseAfterMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateRequireCheckIn::Jsonize() const
{
  JsonValue payload;

  if(m_releaseAfterMinutesHasBeenSet)
  {
   payload.WithInteger("ReleaseAfterMinutes", m_releaseAfterMinutes);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
