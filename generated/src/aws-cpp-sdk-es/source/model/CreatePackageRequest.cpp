/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CreatePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePackageRequest::CreatePackageRequest() : 
    m_packageNameHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_packageDescriptionHasBeenSet(false),
    m_packageSourceHasBeenSet(false)
{
}

Aws::String CreatePackageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_packageDescriptionHasBeenSet)
  {
   payload.WithString("PackageDescription", m_packageDescription);

  }

  if(m_packageSourceHasBeenSet)
  {
   payload.WithObject("PackageSource", m_packageSource.Jsonize());

  }

  return payload.View().WriteReadable();
}




