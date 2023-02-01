/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/UpdateSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

UpdateSettings::UpdateSettings() : 
    m_addSubnetsHasBeenSet(false),
    m_removeSubnetsHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false)
{
}

UpdateSettings::UpdateSettings(JsonView jsonValue) : 
    m_addSubnetsHasBeenSet(false),
    m_removeSubnetsHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateSettings& UpdateSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddSubnets"))
  {
    Aws::Utils::Array<JsonView> addSubnetsJsonList = jsonValue.GetArray("AddSubnets");
    for(unsigned addSubnetsIndex = 0; addSubnetsIndex < addSubnetsJsonList.GetLength(); ++addSubnetsIndex)
    {
      m_addSubnets.push_back(addSubnetsJsonList[addSubnetsIndex].AsString());
    }
    m_addSubnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveSubnets"))
  {
    Aws::Utils::Array<JsonView> removeSubnetsJsonList = jsonValue.GetArray("RemoveSubnets");
    for(unsigned removeSubnetsIndex = 0; removeSubnetsIndex < removeSubnetsJsonList.GetLength(); ++removeSubnetsIndex)
    {
      m_removeSubnets.push_back(removeSubnetsJsonList[removeSubnetsIndex].AsString());
    }
    m_removeSubnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupId"))
  {
    m_securityGroupId = jsonValue.GetString("SecurityGroupId");

    m_securityGroupIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateSettings::Jsonize() const
{
  JsonValue payload;

  if(m_addSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addSubnetsJsonList(m_addSubnets.size());
   for(unsigned addSubnetsIndex = 0; addSubnetsIndex < addSubnetsJsonList.GetLength(); ++addSubnetsIndex)
   {
     addSubnetsJsonList[addSubnetsIndex].AsString(m_addSubnets[addSubnetsIndex]);
   }
   payload.WithArray("AddSubnets", std::move(addSubnetsJsonList));

  }

  if(m_removeSubnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeSubnetsJsonList(m_removeSubnets.size());
   for(unsigned removeSubnetsIndex = 0; removeSubnetsIndex < removeSubnetsJsonList.GetLength(); ++removeSubnetsIndex)
   {
     removeSubnetsJsonList[removeSubnetsIndex].AsString(m_removeSubnets[removeSubnetsIndex]);
   }
   payload.WithArray("RemoveSubnets", std::move(removeSubnetsJsonList));

  }

  if(m_securityGroupIdHasBeenSet)
  {
   payload.WithString("SecurityGroupId", m_securityGroupId);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
