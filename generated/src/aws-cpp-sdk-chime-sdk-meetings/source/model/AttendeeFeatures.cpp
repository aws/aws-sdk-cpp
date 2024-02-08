/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/AttendeeFeatures.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

AttendeeFeatures::AttendeeFeatures() : 
    m_maxCount(0),
    m_maxCountHasBeenSet(false)
{
}

AttendeeFeatures::AttendeeFeatures(JsonView jsonValue) : 
    m_maxCount(0),
    m_maxCountHasBeenSet(false)
{
  *this = jsonValue;
}

AttendeeFeatures& AttendeeFeatures::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxCount"))
  {
    m_maxCount = jsonValue.GetInteger("MaxCount");

    m_maxCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AttendeeFeatures::Jsonize() const
{
  JsonValue payload;

  if(m_maxCountHasBeenSet)
  {
   payload.WithInteger("MaxCount", m_maxCount);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
