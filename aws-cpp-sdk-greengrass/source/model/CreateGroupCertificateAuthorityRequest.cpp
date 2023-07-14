/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/CreateGroupCertificateAuthorityRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateGroupCertificateAuthorityRequest::CreateGroupCertificateAuthorityRequest() : 
    m_amznClientTokenHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

Aws::String CreateGroupCertificateAuthorityRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection CreateGroupCertificateAuthorityRequest::GetRequestSpecificHeaders() const
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




