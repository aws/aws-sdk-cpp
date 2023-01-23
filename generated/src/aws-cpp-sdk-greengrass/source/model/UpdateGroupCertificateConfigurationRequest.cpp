/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/UpdateGroupCertificateConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGroupCertificateConfigurationRequest::UpdateGroupCertificateConfigurationRequest() : 
    m_certificateExpiryInMillisecondsHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

Aws::String UpdateGroupCertificateConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateExpiryInMillisecondsHasBeenSet)
  {
   payload.WithString("CertificateExpiryInMilliseconds", m_certificateExpiryInMilliseconds);

  }

  return payload.View().WriteReadable();
}




