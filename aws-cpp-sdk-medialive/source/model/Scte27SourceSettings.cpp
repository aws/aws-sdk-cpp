/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Scte27SourceSettings.h>
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

Scte27SourceSettings::Scte27SourceSettings() : 
    m_pid(0),
    m_pidHasBeenSet(false)
{
}

Scte27SourceSettings::Scte27SourceSettings(JsonView jsonValue) : 
    m_pid(0),
    m_pidHasBeenSet(false)
{
  *this = jsonValue;
}

Scte27SourceSettings& Scte27SourceSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  return *this;
}

JsonValue Scte27SourceSettings::Jsonize() const
{
  JsonValue payload;

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("pid", m_pid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
