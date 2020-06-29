/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/DeleteHsmRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudHSMV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHsmRequest::DeleteHsmRequest() : 
    m_clusterIdHasBeenSet(false),
    m_hsmIdHasBeenSet(false),
    m_eniIdHasBeenSet(false),
    m_eniIpHasBeenSet(false)
{
}

Aws::String DeleteHsmRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_hsmIdHasBeenSet)
  {
   payload.WithString("HsmId", m_hsmId);

  }

  if(m_eniIdHasBeenSet)
  {
   payload.WithString("EniId", m_eniId);

  }

  if(m_eniIpHasBeenSet)
  {
   payload.WithString("EniIp", m_eniIp);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHsmRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "BaldrApiService.DeleteHsm"));
  return headers;

}




