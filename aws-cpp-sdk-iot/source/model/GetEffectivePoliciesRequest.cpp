/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetEffectivePoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetEffectivePoliciesRequest::GetEffectivePoliciesRequest() : 
    m_principalHasBeenSet(false),
    m_cognitoIdentityPoolIdHasBeenSet(false),
    m_thingNameHasBeenSet(false)
{
}

Aws::String GetEffectivePoliciesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

  }

  if(m_cognitoIdentityPoolIdHasBeenSet)
  {
   payload.WithString("cognitoIdentityPoolId", m_cognitoIdentityPoolId);

  }

  return payload.View().WriteReadable();
}

void GetEffectivePoliciesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_thingNameHasBeenSet)
    {
      ss << m_thingName;
      uri.AddQueryStringParameter("thingName", ss.str());
      ss.str("");
    }

}



