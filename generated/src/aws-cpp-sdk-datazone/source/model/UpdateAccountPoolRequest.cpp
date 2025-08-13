/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateAccountPoolRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAccountPoolRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountSourceHasBeenSet)
  {
   payload.WithObject("accountSource", m_accountSource.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_resolutionStrategyHasBeenSet)
  {
   payload.WithString("resolutionStrategy", ResolutionStrategyMapper::GetNameForResolutionStrategy(m_resolutionStrategy));
  }

  return payload.View().WriteReadable();
}




