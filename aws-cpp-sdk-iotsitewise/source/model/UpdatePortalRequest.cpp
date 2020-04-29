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

#include <aws/iotsitewise/model/UpdatePortalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePortalRequest::UpdatePortalRequest() : 
    m_portalIdHasBeenSet(false),
    m_portalNameHasBeenSet(false),
    m_portalDescriptionHasBeenSet(false),
    m_portalContactEmailHasBeenSet(false),
    m_portalLogoImageFileHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdatePortalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portalNameHasBeenSet)
  {
   payload.WithString("portalName", m_portalName);

  }

  if(m_portalDescriptionHasBeenSet)
  {
   payload.WithString("portalDescription", m_portalDescription);

  }

  if(m_portalContactEmailHasBeenSet)
  {
   payload.WithString("portalContactEmail", m_portalContactEmail);

  }

  if(m_portalLogoImageFileHasBeenSet)
  {
   payload.WithObject("portalLogoImageFile", m_portalLogoImageFile.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




