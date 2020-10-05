/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/MxfSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

MxfSettings::MxfSettings() : 
    m_afdSignaling(MxfAfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_profile(MxfProfile::NOT_SET),
    m_profileHasBeenSet(false)
{
}

MxfSettings::MxfSettings(JsonView jsonValue) : 
    m_afdSignaling(MxfAfdSignaling::NOT_SET),
    m_afdSignalingHasBeenSet(false),
    m_profile(MxfProfile::NOT_SET),
    m_profileHasBeenSet(false)
{
  *this = jsonValue;
}

MxfSettings& MxfSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("afdSignaling"))
  {
    m_afdSignaling = MxfAfdSignalingMapper::GetMxfAfdSignalingForName(jsonValue.GetString("afdSignaling"));

    m_afdSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("profile"))
  {
    m_profile = MxfProfileMapper::GetMxfProfileForName(jsonValue.GetString("profile"));

    m_profileHasBeenSet = true;
  }

  return *this;
}

JsonValue MxfSettings::Jsonize() const
{
  JsonValue payload;

  if(m_afdSignalingHasBeenSet)
  {
   payload.WithString("afdSignaling", MxfAfdSignalingMapper::GetNameForMxfAfdSignaling(m_afdSignaling));
  }

  if(m_profileHasBeenSet)
  {
   payload.WithString("profile", MxfProfileMapper::GetNameForMxfProfile(m_profile));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
