﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/appstream/model/CreateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFleetRequest::CreateFleetRequest() : 
    m_nameHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_computeCapacityHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_maxUserDurationInSeconds(0),
    m_maxUserDurationInSecondsHasBeenSet(false),
    m_disconnectTimeoutInSeconds(0),
    m_disconnectTimeoutInSecondsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false)
{
}

Aws::String CreateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_computeCapacityHasBeenSet)
  {
   payload.WithObject("ComputeCapacity", m_computeCapacity.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_maxUserDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxUserDurationInSeconds", m_maxUserDurationInSeconds);

  }

  if(m_disconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("DisconnectTimeoutInSeconds", m_disconnectTimeoutInSeconds);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateFleet"));
  return headers;

}



