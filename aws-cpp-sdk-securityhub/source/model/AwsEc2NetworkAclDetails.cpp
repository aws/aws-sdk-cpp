/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2NetworkAclDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2NetworkAclDetails::AwsEc2NetworkAclDetails() : 
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_associationsHasBeenSet(false),
    m_entriesHasBeenSet(false)
{
}

AwsEc2NetworkAclDetails::AwsEc2NetworkAclDetails(JsonView jsonValue) : 
    m_isDefault(false),
    m_isDefaultHasBeenSet(false),
    m_networkAclIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_associationsHasBeenSet(false),
    m_entriesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2NetworkAclDetails& AwsEc2NetworkAclDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");

    m_isDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkAclId"))
  {
    m_networkAclId = jsonValue.GetString("NetworkAclId");

    m_networkAclIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Associations"))
  {
    Aws::Utils::Array<JsonView> associationsJsonList = jsonValue.GetArray("Associations");
    for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
    {
      m_associations.push_back(associationsJsonList[associationsIndex].AsObject());
    }
    m_associationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Entries"))
  {
    Aws::Utils::Array<JsonView> entriesJsonList = jsonValue.GetArray("Entries");
    for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
    {
      m_entries.push_back(entriesJsonList[entriesIndex].AsObject());
    }
    m_entriesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2NetworkAclDetails::Jsonize() const
{
  JsonValue payload;

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("IsDefault", m_isDefault);

  }

  if(m_networkAclIdHasBeenSet)
  {
   payload.WithString("NetworkAclId", m_networkAclId);

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_associationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationsJsonList(m_associations.size());
   for(unsigned associationsIndex = 0; associationsIndex < associationsJsonList.GetLength(); ++associationsIndex)
   {
     associationsJsonList[associationsIndex].AsObject(m_associations[associationsIndex].Jsonize());
   }
   payload.WithArray("Associations", std::move(associationsJsonList));

  }

  if(m_entriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
   for(unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex)
   {
     entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
   }
   payload.WithArray("Entries", std::move(entriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
