/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ModifyInstanceProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ModifyInstanceProfileRequest::ModifyInstanceProfileRequest() : 
    m_instanceProfileIdentifierHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_subnetGroupIdentifierHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
}

Aws::String ModifyInstanceProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_instanceProfileIdentifierHasBeenSet)
  {
   payload.WithString("InstanceProfileIdentifier", m_instanceProfileIdentifier);

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("KmsKeyArn", m_kmsKeyArn);

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("PubliclyAccessible", m_publiclyAccessible);

  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("NetworkType", m_networkType);

  }

  if(m_instanceProfileNameHasBeenSet)
  {
   payload.WithString("InstanceProfileName", m_instanceProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_subnetGroupIdentifierHasBeenSet)
  {
   payload.WithString("SubnetGroupIdentifier", m_subnetGroupIdentifier);

  }

  if(m_vpcSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupsJsonList(m_vpcSecurityGroups.size());
   for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
   {
     vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsString(m_vpcSecurityGroups[vpcSecurityGroupsIndex]);
   }
   payload.WithArray("VpcSecurityGroups", std::move(vpcSecurityGroupsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ModifyInstanceProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.ModifyInstanceProfile"));
  return headers;

}




