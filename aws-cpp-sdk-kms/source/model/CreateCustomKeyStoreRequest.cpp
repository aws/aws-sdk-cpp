/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/CreateCustomKeyStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCustomKeyStoreRequest::CreateCustomKeyStoreRequest() : 
    m_customKeyStoreNameHasBeenSet(false),
    m_cloudHsmClusterIdHasBeenSet(false),
    m_trustAnchorCertificateHasBeenSet(false),
    m_keyStorePasswordHasBeenSet(false),
    m_customKeyStoreType(CustomKeyStoreType::NOT_SET),
    m_customKeyStoreTypeHasBeenSet(false),
    m_xksProxyUriEndpointHasBeenSet(false),
    m_xksProxyUriPathHasBeenSet(false),
    m_xksProxyVpcEndpointServiceNameHasBeenSet(false),
    m_xksProxyAuthenticationCredentialHasBeenSet(false),
    m_xksProxyConnectivity(XksProxyConnectivityType::NOT_SET),
    m_xksProxyConnectivityHasBeenSet(false)
{
}

Aws::String CreateCustomKeyStoreRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_customKeyStoreNameHasBeenSet)
  {
   payload.WithString("CustomKeyStoreName", m_customKeyStoreName);

  }

  if(m_cloudHsmClusterIdHasBeenSet)
  {
   payload.WithString("CloudHsmClusterId", m_cloudHsmClusterId);

  }

  if(m_trustAnchorCertificateHasBeenSet)
  {
   payload.WithString("TrustAnchorCertificate", m_trustAnchorCertificate);

  }

  if(m_keyStorePasswordHasBeenSet)
  {
   payload.WithString("KeyStorePassword", m_keyStorePassword);

  }

  if(m_customKeyStoreTypeHasBeenSet)
  {
   payload.WithString("CustomKeyStoreType", CustomKeyStoreTypeMapper::GetNameForCustomKeyStoreType(m_customKeyStoreType));
  }

  if(m_xksProxyUriEndpointHasBeenSet)
  {
   payload.WithString("XksProxyUriEndpoint", m_xksProxyUriEndpoint);

  }

  if(m_xksProxyUriPathHasBeenSet)
  {
   payload.WithString("XksProxyUriPath", m_xksProxyUriPath);

  }

  if(m_xksProxyVpcEndpointServiceNameHasBeenSet)
  {
   payload.WithString("XksProxyVpcEndpointServiceName", m_xksProxyVpcEndpointServiceName);

  }

  if(m_xksProxyAuthenticationCredentialHasBeenSet)
  {
   payload.WithObject("XksProxyAuthenticationCredential", m_xksProxyAuthenticationCredential.Jsonize());

  }

  if(m_xksProxyConnectivityHasBeenSet)
  {
   payload.WithString("XksProxyConnectivity", XksProxyConnectivityTypeMapper::GetNameForXksProxyConnectivityType(m_xksProxyConnectivity));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCustomKeyStoreRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.CreateCustomKeyStore"));
  return headers;

}




