/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AvailBlanking.h>
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

AvailBlanking::AvailBlanking() : 
    m_availBlankingImageHasBeenSet(false),
    m_state(AvailBlankingState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AvailBlanking::AvailBlanking(JsonView jsonValue) : 
    m_availBlankingImageHasBeenSet(false),
    m_state(AvailBlankingState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AvailBlanking& AvailBlanking::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availBlankingImage"))
  {
    m_availBlankingImage = jsonValue.GetObject("availBlankingImage");

    m_availBlankingImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = AvailBlankingStateMapper::GetAvailBlankingStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AvailBlanking::Jsonize() const
{
  JsonValue payload;

  if(m_availBlankingImageHasBeenSet)
  {
   payload.WithObject("availBlankingImage", m_availBlankingImage.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AvailBlankingStateMapper::GetNameForAvailBlankingState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
