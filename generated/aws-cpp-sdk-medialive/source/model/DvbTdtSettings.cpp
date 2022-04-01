/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DvbTdtSettings.h>
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

DvbTdtSettings::DvbTdtSettings() : 
    m_repInterval(0),
    m_repIntervalHasBeenSet(false)
{
}

DvbTdtSettings::DvbTdtSettings(JsonView jsonValue) : 
    m_repInterval(0),
    m_repIntervalHasBeenSet(false)
{
  *this = jsonValue;
}

DvbTdtSettings& DvbTdtSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repInterval"))
  {
    m_repInterval = jsonValue.GetInteger("repInterval");

    m_repIntervalHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbTdtSettings::Jsonize() const
{
  JsonValue payload;

  if(m_repIntervalHasBeenSet)
  {
   payload.WithInteger("repInterval", m_repInterval);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
