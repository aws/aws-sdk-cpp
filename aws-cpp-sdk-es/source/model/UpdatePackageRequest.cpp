/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/UpdatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdatePackageRequest::UpdatePackageRequest() : 
    m_packageIDHasBeenSet(false),
    m_packageSourceHasBeenSet(false),
    m_packageDescriptionHasBeenSet(false),
    m_commitMessageHasBeenSet(false)
{
}

Aws::String UpdatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_packageSourceHasBeenSet)
  {
   payload.WithObject("PackageSource", m_packageSource.Jsonize());

  }

  if(m_packageDescriptionHasBeenSet)
  {
   payload.WithString("PackageDescription", m_packageDescription);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("CommitMessage", m_commitMessage);

  }

  return payload.View().WriteReadable();
}




