/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MeetingFeaturesConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

MeetingFeaturesConfiguration::MeetingFeaturesConfiguration() : 
    m_audioHasBeenSet(false)
{
}

MeetingFeaturesConfiguration::MeetingFeaturesConfiguration(JsonView jsonValue) : 
    m_audioHasBeenSet(false)
{
  *this = jsonValue;
}

MeetingFeaturesConfiguration& MeetingFeaturesConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Audio"))
  {
    m_audio = jsonValue.GetObject("Audio");

    m_audioHasBeenSet = true;
  }

  return *this;
}

JsonValue MeetingFeaturesConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_audioHasBeenSet)
  {
   payload.WithObject("Audio", m_audio.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
