/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApplicationRequest::UpdateApplicationRequest() : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconS3LocationHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_launchParametersHasBeenSet(false),
    m_appBlockArnHasBeenSet(false),
    m_attributesToDeleteHasBeenSet(false)
{
}

Aws::String UpdateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_iconS3LocationHasBeenSet)
  {
   payload.WithObject("IconS3Location", m_iconS3Location.Jsonize());

  }

  if(m_launchPathHasBeenSet)
  {
   payload.WithString("LaunchPath", m_launchPath);

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("WorkingDirectory", m_workingDirectory);

  }

  if(m_launchParametersHasBeenSet)
  {
   payload.WithString("LaunchParameters", m_launchParameters);

  }

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_attributesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToDeleteJsonList(m_attributesToDelete.size());
   for(unsigned attributesToDeleteIndex = 0; attributesToDeleteIndex < attributesToDeleteJsonList.GetLength(); ++attributesToDeleteIndex)
   {
     attributesToDeleteJsonList[attributesToDeleteIndex].AsString(ApplicationAttributeMapper::GetNameForApplicationAttribute(m_attributesToDelete[attributesToDeleteIndex]));
   }
   payload.WithArray("AttributesToDelete", std::move(attributesToDeleteJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.UpdateApplication"));
  return headers;

}




