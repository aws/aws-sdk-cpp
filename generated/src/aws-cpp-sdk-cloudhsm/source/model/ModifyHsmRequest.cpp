/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/ModifyHsmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyHsmRequest::ModifyHsmRequest() : 
    m_hsmArnHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_eniIpHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_syslogIpHasBeenSet(false)
{
}

Aws::String ModifyHsmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hsmArnHasBeenSet)
  {
   payload.WithString("HsmArn", m_hsmArn);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_eniIpHasBeenSet)
  {
   payload.WithString("EniIp", m_eniIp);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_syslogIpHasBeenSet)
  {
   payload.WithString("SyslogIp", m_syslogIp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyHsmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CloudHsmFrontendService.ModifyHsm"));
  return headers;

}




