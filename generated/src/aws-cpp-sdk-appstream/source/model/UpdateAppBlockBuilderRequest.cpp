/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateAppBlockBuilderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAppBlockBuilderRequest::UpdateAppBlockBuilderRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_accessEndpointsHasBeenSet(false),
    m_attributesToDeleteHasBeenSet(false)
{
}

Aws::String UpdateAppBlockBuilderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformTypeMapper::GetNameForPlatformType(m_platform));
  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_enableDefaultInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableDefaultInternetAccess", m_enableDefaultInternetAccess);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_accessEndpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accessEndpointsJsonList(m_accessEndpoints.size());
   for(unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex)
   {
     accessEndpointsJsonList[accessEndpointsIndex].AsObject(m_accessEndpoints[accessEndpointsIndex].Jsonize());
   }
   payload.WithArray("AccessEndpoints", std::move(accessEndpointsJsonList));

  }

  if(m_attributesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToDeleteJsonList(m_attributesToDelete.size());
   for(unsigned attributesToDeleteIndex = 0; attributesToDeleteIndex < attributesToDeleteJsonList.GetLength(); ++attributesToDeleteIndex)
   {
     attributesToDeleteJsonList[attributesToDeleteIndex].AsString(AppBlockBuilderAttributeMapper::GetNameForAppBlockBuilderAttribute(m_attributesToDelete[attributesToDeleteIndex]));
   }
   payload.WithArray("AttributesToDelete", std::move(attributesToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAppBlockBuilderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.UpdateAppBlockBuilder"));
  return headers;

}




