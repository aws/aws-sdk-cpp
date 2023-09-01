/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateViewVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateViewVersionRequest::CreateViewVersionRequest() : 
    m_instanceIdHasBeenSet(false),
    m_viewIdHasBeenSet(false),
    m_versionDescriptionHasBeenSet(false),
    m_viewContentSha256HasBeenSet(false)
{
}

Aws::String CreateViewVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_versionDescriptionHasBeenSet)
  {
   payload.WithString("VersionDescription", m_versionDescription);

  }

  if(m_viewContentSha256HasBeenSet)
  {
   payload.WithString("ViewContentSha256", m_viewContentSha256);

  }

  return payload.View().WriteReadable();
}




