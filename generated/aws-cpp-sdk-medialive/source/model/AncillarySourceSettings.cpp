/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AncillarySourceSettings.h>
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

AncillarySourceSettings::AncillarySourceSettings() : 
    m_sourceAncillaryChannelNumber(0),
    m_sourceAncillaryChannelNumberHasBeenSet(false)
{
}

AncillarySourceSettings::AncillarySourceSettings(JsonView jsonValue) : 
    m_sourceAncillaryChannelNumber(0),
    m_sourceAncillaryChannelNumberHasBeenSet(false)
{
  *this = jsonValue;
}

AncillarySourceSettings& AncillarySourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceAncillaryChannelNumber"))
  {
    m_sourceAncillaryChannelNumber = jsonValue.GetInteger("sourceAncillaryChannelNumber");

    m_sourceAncillaryChannelNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue AncillarySourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_sourceAncillaryChannelNumberHasBeenSet)
  {
   payload.WithInteger("sourceAncillaryChannelNumber", m_sourceAncillaryChannelNumber);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
