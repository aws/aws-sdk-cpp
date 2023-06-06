/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdatePackageRequest::UpdatePackageRequest() : 
    m_packageNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false),
    m_unsetDefaultVersion(false),
    m_unsetDefaultVersionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_defaultVersionNameHasBeenSet)
  {
   payload.WithString("defaultVersionName", m_defaultVersionName);

  }

  if(m_unsetDefaultVersionHasBeenSet)
  {
   payload.WithBool("unsetDefaultVersion", m_unsetDefaultVersion);

  }

  return payload.View().WriteReadable();
}

void UpdatePackageRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



