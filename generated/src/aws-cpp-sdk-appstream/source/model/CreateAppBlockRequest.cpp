/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateAppBlockRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAppBlockRequest::CreateAppBlockRequest() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_sourceS3LocationHasBeenSet(false),
    m_setupScriptDetailsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_postSetupScriptDetailsHasBeenSet(false),
    m_packagingType(PackagingType::NOT_SET),
    m_packagingTypeHasBeenSet(false)
{
}

Aws::String CreateAppBlockRequest::SerializePayload() const
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

  if(m_sourceS3LocationHasBeenSet)
  {
   payload.WithObject("SourceS3Location", m_sourceS3Location.Jsonize());

  }

  if(m_setupScriptDetailsHasBeenSet)
  {
   payload.WithObject("SetupScriptDetails", m_setupScriptDetails.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  if(m_postSetupScriptDetailsHasBeenSet)
  {
   payload.WithObject("PostSetupScriptDetails", m_postSetupScriptDetails.Jsonize());

  }

  if(m_packagingTypeHasBeenSet)
  {
   payload.WithString("PackagingType", PackagingTypeMapper::GetNameForPackagingType(m_packagingType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAppBlockRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateAppBlock"));
  return headers;

}




