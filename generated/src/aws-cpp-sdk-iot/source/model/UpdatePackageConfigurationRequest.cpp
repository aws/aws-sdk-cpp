/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdatePackageConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdatePackageConfigurationRequest::UpdatePackageConfigurationRequest() : 
    m_versionUpdateByJobsConfigHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdatePackageConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionUpdateByJobsConfigHasBeenSet)
  {
   payload.WithObject("versionUpdateByJobsConfig", m_versionUpdateByJobsConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdatePackageConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

}



