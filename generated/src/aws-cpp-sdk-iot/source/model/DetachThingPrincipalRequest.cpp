/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetachThingPrincipalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DetachThingPrincipalRequest::DetachThingPrincipalRequest() : 
    m_thingNameHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

Aws::String DetachThingPrincipalRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DetachThingPrincipalRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_principalHasBeenSet)
  {
    ss << m_principal;
    headers.emplace("x-amzn-principal",  ss.str());
    ss.str("");
  }

  return headers;

}




