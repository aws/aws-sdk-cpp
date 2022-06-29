/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/StreamingExperienceSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

StreamingExperienceSettings::StreamingExperienceSettings() : 
    m_preferredProtocol(PreferredProtocol::NOT_SET),
    m_preferredProtocolHasBeenSet(false)
{
}

StreamingExperienceSettings::StreamingExperienceSettings(JsonView jsonValue) : 
    m_preferredProtocol(PreferredProtocol::NOT_SET),
    m_preferredProtocolHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingExperienceSettings& StreamingExperienceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PreferredProtocol"))
  {
    m_preferredProtocol = PreferredProtocolMapper::GetPreferredProtocolForName(jsonValue.GetString("PreferredProtocol"));

    m_preferredProtocolHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingExperienceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_preferredProtocolHasBeenSet)
  {
   payload.WithString("PreferredProtocol", PreferredProtocolMapper::GetNameForPreferredProtocol(m_preferredProtocol));
  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
