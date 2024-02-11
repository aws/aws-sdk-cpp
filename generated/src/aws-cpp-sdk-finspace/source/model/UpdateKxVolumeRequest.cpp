/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxVolumeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKxVolumeRequest::UpdateKxVolumeRequest() : 
    m_environmentIdHasBeenSet(false),
    m_volumeNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_nas1ConfigurationHasBeenSet(false)
{
}

Aws::String UpdateKxVolumeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_nas1ConfigurationHasBeenSet)
  {
   payload.WithObject("nas1Configuration", m_nas1Configuration.Jsonize());

  }

  return payload.View().WriteReadable();
}




