/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMessageStatusStructure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMessaging
{
namespace Model
{

ChannelMessageStatusStructure::ChannelMessageStatusStructure() : 
    m_value(ChannelMessageStatus::NOT_SET),
    m_valueHasBeenSet(false),
    m_detailHasBeenSet(false)
{
}

ChannelMessageStatusStructure::ChannelMessageStatusStructure(JsonView jsonValue) : 
    m_value(ChannelMessageStatus::NOT_SET),
    m_valueHasBeenSet(false),
    m_detailHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMessageStatusStructure& ChannelMessageStatusStructure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = ChannelMessageStatusMapper::GetChannelMessageStatusForName(jsonValue.GetString("Value"));

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Detail"))
  {
    m_detail = jsonValue.GetString("Detail");

    m_detailHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMessageStatusStructure::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", ChannelMessageStatusMapper::GetNameForChannelMessageStatus(m_value));
  }

  if(m_detailHasBeenSet)
  {
   payload.WithString("Detail", m_detail);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
