/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/ChannelNotBroadcasting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

ChannelNotBroadcasting::ChannelNotBroadcasting() : 
    m_exceptionMessageHasBeenSet(false)
{
}

ChannelNotBroadcasting::ChannelNotBroadcasting(JsonView jsonValue) : 
    m_exceptionMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelNotBroadcasting& ChannelNotBroadcasting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exceptionMessage"))
  {
    m_exceptionMessage = jsonValue.GetString("exceptionMessage");

    m_exceptionMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelNotBroadcasting::Jsonize() const
{
  JsonValue payload;

  if(m_exceptionMessageHasBeenSet)
  {
   payload.WithString("exceptionMessage", m_exceptionMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
