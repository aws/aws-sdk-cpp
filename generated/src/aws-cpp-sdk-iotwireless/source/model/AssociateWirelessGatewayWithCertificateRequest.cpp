/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AssociateWirelessGatewayWithCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateWirelessGatewayWithCertificateRequest::AssociateWirelessGatewayWithCertificateRequest() : 
    m_idHasBeenSet(false),
    m_iotCertificateIdHasBeenSet(false)
{
}

Aws::String AssociateWirelessGatewayWithCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iotCertificateIdHasBeenSet)
  {
   payload.WithString("IotCertificateId", m_iotCertificateId);

  }

  return payload.View().WriteReadable();
}




