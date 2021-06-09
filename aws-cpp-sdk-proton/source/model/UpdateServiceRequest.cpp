/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/UpdateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceRequest::UpdateServiceRequest() : 
    m_descriptionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_specHasBeenSet(false)
{
}

Aws::String UpdateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_specHasBeenSet)
  {
   payload.WithString("spec", m_spec);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.UpdateService"));
  return headers;

}




