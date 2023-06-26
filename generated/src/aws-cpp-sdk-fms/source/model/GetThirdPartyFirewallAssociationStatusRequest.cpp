/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetThirdPartyFirewallAssociationStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetThirdPartyFirewallAssociationStatusRequest::GetThirdPartyFirewallAssociationStatusRequest() : 
    m_thirdPartyFirewall(ThirdPartyFirewall::NOT_SET),
    m_thirdPartyFirewallHasBeenSet(false)
{
}

Aws::String GetThirdPartyFirewallAssociationStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thirdPartyFirewallHasBeenSet)
  {
   payload.WithString("ThirdPartyFirewall", ThirdPartyFirewallMapper::GetNameForThirdPartyFirewall(m_thirdPartyFirewall));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetThirdPartyFirewallAssociationStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSFMS_20180101.GetThirdPartyFirewallAssociationStatus"));
  return headers;

}




