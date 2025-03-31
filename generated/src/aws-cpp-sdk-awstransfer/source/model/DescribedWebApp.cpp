/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedWebApp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedWebApp::DescribedWebApp(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribedWebApp& DescribedWebApp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppId"))
  {
    m_webAppId = jsonValue.GetString("WebAppId");
    m_webAppIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DescribedIdentityProviderDetails"))
  {
    m_describedIdentityProviderDetails = jsonValue.GetObject("DescribedIdentityProviderDetails");
    m_describedIdentityProviderDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccessEndpoint"))
  {
    m_accessEndpoint = jsonValue.GetString("AccessEndpoint");
    m_accessEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppEndpoint"))
  {
    m_webAppEndpoint = jsonValue.GetString("WebAppEndpoint");
    m_webAppEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppUnits"))
  {
    m_webAppUnits = jsonValue.GetObject("WebAppUnits");
    m_webAppUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WebAppEndpointPolicy"))
  {
    m_webAppEndpointPolicy = WebAppEndpointPolicyMapper::GetWebAppEndpointPolicyForName(jsonValue.GetString("WebAppEndpointPolicy"));
    m_webAppEndpointPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedWebApp::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_webAppIdHasBeenSet)
  {
   payload.WithString("WebAppId", m_webAppId);

  }

  if(m_describedIdentityProviderDetailsHasBeenSet)
  {
   payload.WithObject("DescribedIdentityProviderDetails", m_describedIdentityProviderDetails.Jsonize());

  }

  if(m_accessEndpointHasBeenSet)
  {
   payload.WithString("AccessEndpoint", m_accessEndpoint);

  }

  if(m_webAppEndpointHasBeenSet)
  {
   payload.WithString("WebAppEndpoint", m_webAppEndpoint);

  }

  if(m_webAppUnitsHasBeenSet)
  {
   payload.WithObject("WebAppUnits", m_webAppUnits.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_webAppEndpointPolicyHasBeenSet)
  {
   payload.WithString("WebAppEndpointPolicy", WebAppEndpointPolicyMapper::GetNameForWebAppEndpointPolicy(m_webAppEndpointPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
