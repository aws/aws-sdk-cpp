/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/AlexaForBusinessMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

AlexaForBusinessMetadata::AlexaForBusinessMetadata() : 
    m_isAlexaForBusinessEnabled(false),
    m_isAlexaForBusinessEnabledHasBeenSet(false),
    m_alexaForBusinessRoomArnHasBeenSet(false)
{
}

AlexaForBusinessMetadata::AlexaForBusinessMetadata(JsonView jsonValue) : 
    m_isAlexaForBusinessEnabled(false),
    m_isAlexaForBusinessEnabledHasBeenSet(false),
    m_alexaForBusinessRoomArnHasBeenSet(false)
{
  *this = jsonValue;
}

AlexaForBusinessMetadata& AlexaForBusinessMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsAlexaForBusinessEnabled"))
  {
    m_isAlexaForBusinessEnabled = jsonValue.GetBool("IsAlexaForBusinessEnabled");

    m_isAlexaForBusinessEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlexaForBusinessRoomArn"))
  {
    m_alexaForBusinessRoomArn = jsonValue.GetString("AlexaForBusinessRoomArn");

    m_alexaForBusinessRoomArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AlexaForBusinessMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_isAlexaForBusinessEnabledHasBeenSet)
  {
   payload.WithBool("IsAlexaForBusinessEnabled", m_isAlexaForBusinessEnabled);

  }

  if(m_alexaForBusinessRoomArnHasBeenSet)
  {
   payload.WithString("AlexaForBusinessRoomArn", m_alexaForBusinessRoomArn);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
