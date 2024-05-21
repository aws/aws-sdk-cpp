/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/CreateIngressPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateIngressPointRequest::CreateIngressPointRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_ingressPointConfigurationHasBeenSet(false),
    m_ingressPointNameHasBeenSet(false),
    m_ruleSetIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false),
    m_type(IngressPointType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String CreateIngressPointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_ingressPointConfigurationHasBeenSet)
  {
   payload.WithObject("IngressPointConfiguration", m_ingressPointConfiguration.Jsonize());

  }

  if(m_ingressPointNameHasBeenSet)
  {
   payload.WithString("IngressPointName", m_ingressPointName);

  }

  if(m_ruleSetIdHasBeenSet)
  {
   payload.WithString("RuleSetId", m_ruleSetId);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   payload.WithString("TrafficPolicyId", m_trafficPolicyId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", IngressPointTypeMapper::GetNameForIngressPointType(m_type));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateIngressPointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MailManagerSvc.CreateIngressPoint"));
  return headers;

}




