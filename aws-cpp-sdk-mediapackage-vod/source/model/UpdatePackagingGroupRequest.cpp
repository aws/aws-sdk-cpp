/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/UpdatePackagingGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePackagingGroupRequest::UpdatePackagingGroupRequest() : 
    m_authorizationHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

Aws::String UpdatePackagingGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizationHasBeenSet)
  {
   payload.WithObject("authorization", m_authorization.Jsonize());

  }

  return payload.View().WriteReadable();
}




