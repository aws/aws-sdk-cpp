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

#include <aws/mediapackage-vod/model/CreateAssetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAssetRequest::CreateAssetRequest() : 
    m_idHasBeenSet(false),
    m_packagingGroupIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_sourceRoleArnHasBeenSet(false)
{
}

Aws::String CreateAssetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_packagingGroupIdHasBeenSet)
  {
   payload.WithString("packagingGroupId", m_packagingGroupId);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_sourceArnHasBeenSet)
  {
   payload.WithString("sourceArn", m_sourceArn);

  }

  if(m_sourceRoleArnHasBeenSet)
  {
   payload.WithString("sourceRoleArn", m_sourceRoleArn);

  }

  return payload.View().WriteReadable();
}




