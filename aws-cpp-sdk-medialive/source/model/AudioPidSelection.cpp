/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioPidSelection.h>
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

AudioPidSelection::AudioPidSelection() : 
    m_pid(0),
    m_pidHasBeenSet(false)
{
}

AudioPidSelection::AudioPidSelection(JsonView jsonValue) : 
    m_pid(0),
    m_pidHasBeenSet(false)
{
  *this = jsonValue;
}

AudioPidSelection& AudioPidSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pid"))
  {
    m_pid = jsonValue.GetInteger("pid");

    m_pidHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioPidSelection::Jsonize() const
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
