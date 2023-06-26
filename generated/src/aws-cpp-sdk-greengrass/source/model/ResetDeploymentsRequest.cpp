/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ResetDeploymentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetDeploymentsRequest::ResetDeploymentsRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_force(false),
    m_forceHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

Aws::String ResetDeploymentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_forceHasBeenSet)
  {
   payload.WithBool("Force", m_force);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ResetDeploymentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_amznClientTokenHasBeenSet)
  {
    ss << m_amznClientToken;
    headers.emplace("x-amzn-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




