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

#include <aws/quicksight/model/UpdateDataSetPermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDataSetPermissionsRequest::UpdateDataSetPermissionsRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_grantPermissionsHasBeenSet(false),
    m_revokePermissionsHasBeenSet(false)
{
}

Aws::String UpdateDataSetPermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_grantPermissionsHasBeenSet)
  {
   Array<JsonValue> grantPermissionsJsonList(m_grantPermissions.size());
   for(unsigned grantPermissionsIndex = 0; grantPermissionsIndex < grantPermissionsJsonList.GetLength(); ++grantPermissionsIndex)
   {
     grantPermissionsJsonList[grantPermissionsIndex].AsObject(m_grantPermissions[grantPermissionsIndex].Jsonize());
   }
   payload.WithArray("GrantPermissions", std::move(grantPermissionsJsonList));

  }

  if(m_revokePermissionsHasBeenSet)
  {
   Array<JsonValue> revokePermissionsJsonList(m_revokePermissions.size());
   for(unsigned revokePermissionsIndex = 0; revokePermissionsIndex < revokePermissionsJsonList.GetLength(); ++revokePermissionsIndex)
   {
     revokePermissionsJsonList[revokePermissionsIndex].AsObject(m_revokePermissions[revokePermissionsIndex].Jsonize());
   }
   payload.WithArray("RevokePermissions", std::move(revokePermissionsJsonList));

  }

  return payload.View().WriteReadable();
}




