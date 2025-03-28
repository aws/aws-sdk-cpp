﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-voice/model/TerminationHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

TerminationHealth::TerminationHealth(JsonView jsonValue)
{
  *this = jsonValue;
}

TerminationHealth& TerminationHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue TerminationHealth::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
