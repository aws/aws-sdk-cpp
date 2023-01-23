/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/MeetingSetting.h>
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

MeetingSetting::MeetingSetting() : 
    m_requirePin(RequirePin::NOT_SET),
    m_requirePinHasBeenSet(false)
{
}

MeetingSetting::MeetingSetting(JsonView jsonValue) : 
    m_requirePin(RequirePin::NOT_SET),
    m_requirePinHasBeenSet(false)
{
  *this = jsonValue;
}

MeetingSetting& MeetingSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequirePin"))
  {
    m_requirePin = RequirePinMapper::GetRequirePinForName(jsonValue.GetString("RequirePin"));

    m_requirePinHasBeenSet = true;
  }

  return *this;
}

JsonValue MeetingSetting::Jsonize() const
{
  JsonValue payload;

  if(m_requirePinHasBeenSet)
  {
   payload.WithString("RequirePin", RequirePinMapper::GetNameForRequirePin(m_requirePin));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
