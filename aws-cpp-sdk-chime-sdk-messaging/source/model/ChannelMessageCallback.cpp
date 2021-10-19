/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ChannelMessageCallback.h>
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

ChannelMessageCallback::ChannelMessageCallback() : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
}

ChannelMessageCallback::ChannelMessageCallback(JsonView jsonValue) : 
    m_messageIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_metadataHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMessageCallback& ChannelMessageCallback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMessageCallback::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
