/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/RemoteAccessConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

RemoteAccessConfig::RemoteAccessConfig() : 
    m_ec2SshKeyHasBeenSet(false),
    m_sourceSecurityGroupsHasBeenSet(false)
{
}

RemoteAccessConfig::RemoteAccessConfig(JsonView jsonValue) : 
    m_ec2SshKeyHasBeenSet(false),
    m_sourceSecurityGroupsHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteAccessConfig& RemoteAccessConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ec2SshKey"))
  {
    m_ec2SshKey = jsonValue.GetString("ec2SshKey");

    m_ec2SshKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceSecurityGroups"))
  {
    Aws::Utils::Array<JsonView> sourceSecurityGroupsJsonList = jsonValue.GetArray("sourceSecurityGroups");
    for(unsigned sourceSecurityGroupsIndex = 0; sourceSecurityGroupsIndex < sourceSecurityGroupsJsonList.GetLength(); ++sourceSecurityGroupsIndex)
    {
      m_sourceSecurityGroups.push_back(sourceSecurityGroupsJsonList[sourceSecurityGroupsIndex].AsString());
    }
    m_sourceSecurityGroupsHasBeenSet = true;
  }

  return *this;
}

JsonValue RemoteAccessConfig::Jsonize() const
{
  JsonValue payload;

  if(m_ec2SshKeyHasBeenSet)
  {
   payload.WithString("ec2SshKey", m_ec2SshKey);

  }

  if(m_sourceSecurityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceSecurityGroupsJsonList(m_sourceSecurityGroups.size());
   for(unsigned sourceSecurityGroupsIndex = 0; sourceSecurityGroupsIndex < sourceSecurityGroupsJsonList.GetLength(); ++sourceSecurityGroupsIndex)
   {
     sourceSecurityGroupsJsonList[sourceSecurityGroupsIndex].AsString(m_sourceSecurityGroups[sourceSecurityGroupsIndex]);
   }
   payload.WithArray("sourceSecurityGroups", std::move(sourceSecurityGroupsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
