/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdatePartnerAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdatePartnerAccountRequest::UpdatePartnerAccountRequest() : 
    m_sidewalkHasBeenSet(false),
    m_partnerAccountIdHasBeenSet(false),
    m_partnerType(PartnerType::NOT_SET),
    m_partnerTypeHasBeenSet(false)
{
}

Aws::String UpdatePartnerAccountRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sidewalkHasBeenSet)
  {
   payload.WithObject("Sidewalk", m_sidewalk.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdatePartnerAccountRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_partnerTypeHasBeenSet)
    {
      ss << PartnerTypeMapper::GetNameForPartnerType(m_partnerType);
      uri.AddQueryStringParameter("partnerType", ss.str());
      ss.str("");
    }

}



