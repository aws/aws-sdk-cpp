/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediapackage-vod/model/CreatePackagingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePackagingConfigurationRequest::CreatePackagingConfigurationRequest() : 
    m_cmafPackageHasBeenSet(false),
    m_dashPackageHasBeenSet(false),
    m_hlsPackageHasBeenSet(false),
    m_idHasBeenSet(false),
    m_mssPackageHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false)
{
}

Aws::String CreatePackagingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_cmafPackageHasBeenSet)
  {
   payload.WithObject("cmafPackage", m_cmafPackage.Jsonize());

  }

  if(m_dashPackageHasBeenSet)
  {
   payload.WithObject("dashPackage", m_dashPackage.Jsonize());

  }

  if(m_hlsPackageHasBeenSet)
  {
   payload.WithObject("hlsPackage", m_hlsPackage.Jsonize());

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_mssPackageHasBeenSet)
  {
   payload.WithObject("mssPackage", m_mssPackage.Jsonize());

  }

  if(m_packagingGroupIdHasBeenSet)
  {
   payload.WithString("packagingGroupId", m_packagingGroupId);

  }

  return payload.View().WriteReadable();
}




