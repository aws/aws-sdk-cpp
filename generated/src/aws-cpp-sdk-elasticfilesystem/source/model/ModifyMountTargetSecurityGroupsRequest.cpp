/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/ModifyMountTargetSecurityGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyMountTargetSecurityGroupsRequest::ModifyMountTargetSecurityGroupsRequest() : 
    m_mountTargetIdHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
}

Aws::String ModifyMountTargetSecurityGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  return payload.View().WriteReadable();
}




