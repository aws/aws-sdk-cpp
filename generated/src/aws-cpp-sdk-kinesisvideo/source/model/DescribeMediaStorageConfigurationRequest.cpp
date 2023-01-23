/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/DescribeMediaStorageConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeMediaStorageConfigurationRequest::DescribeMediaStorageConfigurationRequest() : 
    m_channelNameHasBeenSet(false),
    m_channelARNHasBeenSet(false)
{
}

Aws::String DescribeMediaStorageConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelNameHasBeenSet)
  {
   payload.WithString("ChannelName", m_channelName);

  }

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  return payload.View().WriteReadable();
}




