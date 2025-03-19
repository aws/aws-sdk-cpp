/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateThemeForStackRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateThemeForStackRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_stackNameHasBeenSet)
  {
   payload.WithString("StackName", m_stackName);

  }

  if(m_footerLinksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> footerLinksJsonList(m_footerLinks.size());
   for(unsigned footerLinksIndex = 0; footerLinksIndex < footerLinksJsonList.GetLength(); ++footerLinksIndex)
   {
     footerLinksJsonList[footerLinksIndex].AsObject(m_footerLinks[footerLinksIndex].Jsonize());
   }
   payload.WithArray("FooterLinks", std::move(footerLinksJsonList));

  }

  if(m_titleTextHasBeenSet)
  {
   payload.WithString("TitleText", m_titleText);

  }

  if(m_themeStylingHasBeenSet)
  {
   payload.WithString("ThemeStyling", ThemeStylingMapper::GetNameForThemeStyling(m_themeStyling));
  }

  if(m_organizationLogoS3LocationHasBeenSet)
  {
   payload.WithObject("OrganizationLogoS3Location", m_organizationLogoS3Location.Jsonize());

  }

  if(m_faviconS3LocationHasBeenSet)
  {
   payload.WithObject("FaviconS3Location", m_faviconS3Location.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateThemeForStackRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateThemeForStack"));
  return headers;

}




