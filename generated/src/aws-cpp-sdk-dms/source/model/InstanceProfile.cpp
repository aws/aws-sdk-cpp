/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/InstanceProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

InstanceProfile::InstanceProfile() : 
    m_instanceProfileArnHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceProfileCreationTimeHasBeenSet(false),
    m_subnetGroupIdentifierHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
}

InstanceProfile::InstanceProfile(JsonView jsonValue) : 
    m_instanceProfileArnHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_kmsKeyArnHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_networkTypeHasBeenSet(false),
    m_instanceProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_instanceProfileCreationTimeHasBeenSet(false),
    m_subnetGroupIdentifierHasBeenSet(false),
    m_vpcSecurityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceProfile& InstanceProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceProfileArn"))
  {
    m_instanceProfileArn = jsonValue.GetString("InstanceProfileArn");

    m_instanceProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PubliclyAccessible"))
  {
    m_publiclyAccessible = jsonValue.GetBool("PubliclyAccessible");

    m_publiclyAccessibleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkType"))
  {
    m_networkType = jsonValue.GetString("NetworkType");

    m_networkTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileName"))
  {
    m_instanceProfileName = jsonValue.GetString("InstanceProfileName");

    m_instanceProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceProfileCreationTime"))
  {
    m_instanceProfileCreationTime = jsonValue.GetString("InstanceProfileCreationTime");

    m_instanceProfileCreationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetGroupIdentifier"))
  {
    m_subnetGroupIdentifier = jsonValue.GetString("SubnetGroupIdentifier");

    m_subnetGroupIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> vpcSecurityGroupsJsonList = jsonValue.GetArray("VpcSecurityGroups");
    for(unsigned vpcSecurityGroupsIndex = 0; vpcSecurityGroupsIndex < vpcSecurityGroupsJsonList.GetLength(); ++vpcSecurityGroupsIndex)
    {
      m_vpcSecurityGroups.push_back(vpcSecurityGroupsJsonList[vpcSecurityGroupsIndex].AsString());
    }
    m_vpcSecurityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceProfile::Jsonize() const
{
  JsonValue payload;

  if(m_instanceProfileArnHasBeenSet)
  {
   payload.WithString("InstanceProfileArn", m_instanceProfileArn);

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

  if(m_instanceProfileCreationTimeHasBeenSet)
  {
   payload.WithString("InstanceProfileCreationTime", m_instanceProfileCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
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

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
