/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/kinesisvideo/model/UpdateSignalingChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSignalingChannelRequest::UpdateSignalingChannelRequest() : 
    m_channelARNHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_singleMasterConfigurationHasBeenSet(false)
{
}

Aws::String UpdateSignalingChannelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_channelARNHasBeenSet)
  {
   payload.WithString("ChannelARN", m_channelARN);

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("CurrentVersion", m_currentVersion);

  }

  if(m_singleMasterConfigurationHasBeenSet)
  {
   payload.WithObject("SingleMasterConfiguration", m_singleMasterConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




