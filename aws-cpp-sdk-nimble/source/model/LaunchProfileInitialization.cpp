/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/LaunchProfileInitialization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

LaunchProfileInitialization::LaunchProfileInitialization() : 
    m_activeDirectoryHasBeenSet(false),
    m_ec2SecurityGroupIdsHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_launchProfileProtocolVersionHasBeenSet(false),
    m_launchPurposeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_platform(LaunchProfilePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_systemInitializationScriptsHasBeenSet(false),
    m_userInitializationScriptsHasBeenSet(false)
{
}

LaunchProfileInitialization::LaunchProfileInitialization(JsonView jsonValue) : 
    m_activeDirectoryHasBeenSet(false),
    m_ec2SecurityGroupIdsHasBeenSet(false),
    m_launchProfileIdHasBeenSet(false),
    m_launchProfileProtocolVersionHasBeenSet(false),
    m_launchPurposeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_platform(LaunchProfilePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_systemInitializationScriptsHasBeenSet(false),
    m_userInitializationScriptsHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchProfileInitialization& LaunchProfileInitialization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeDirectory"))
  {
    m_activeDirectory = jsonValue.GetObject("activeDirectory");

    m_activeDirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2SecurityGroupIds"))
  {
    Aws::Utils::Array<JsonView> ec2SecurityGroupIdsJsonList = jsonValue.GetArray("ec2SecurityGroupIds");
    for(unsigned ec2SecurityGroupIdsIndex = 0; ec2SecurityGroupIdsIndex < ec2SecurityGroupIdsJsonList.GetLength(); ++ec2SecurityGroupIdsIndex)
    {
      m_ec2SecurityGroupIds.push_back(ec2SecurityGroupIdsJsonList[ec2SecurityGroupIdsIndex].AsString());
    }
    m_ec2SecurityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchProfileId"))
  {
    m_launchProfileId = jsonValue.GetString("launchProfileId");

    m_launchProfileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchProfileProtocolVersion"))
  {
    m_launchProfileProtocolVersion = jsonValue.GetString("launchProfileProtocolVersion");

    m_launchProfileProtocolVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchPurpose"))
  {
    m_launchPurpose = jsonValue.GetString("launchPurpose");

    m_launchPurposeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = LaunchProfilePlatformMapper::GetLaunchProfilePlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemInitializationScripts"))
  {
    Aws::Utils::Array<JsonView> systemInitializationScriptsJsonList = jsonValue.GetArray("systemInitializationScripts");
    for(unsigned systemInitializationScriptsIndex = 0; systemInitializationScriptsIndex < systemInitializationScriptsJsonList.GetLength(); ++systemInitializationScriptsIndex)
    {
      m_systemInitializationScripts.push_back(systemInitializationScriptsJsonList[systemInitializationScriptsIndex].AsObject());
    }
    m_systemInitializationScriptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userInitializationScripts"))
  {
    Aws::Utils::Array<JsonView> userInitializationScriptsJsonList = jsonValue.GetArray("userInitializationScripts");
    for(unsigned userInitializationScriptsIndex = 0; userInitializationScriptsIndex < userInitializationScriptsJsonList.GetLength(); ++userInitializationScriptsIndex)
    {
      m_userInitializationScripts.push_back(userInitializationScriptsJsonList[userInitializationScriptsIndex].AsObject());
    }
    m_userInitializationScriptsHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchProfileInitialization::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryHasBeenSet)
  {
   payload.WithObject("activeDirectory", m_activeDirectory.Jsonize());

  }

  if(m_ec2SecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2SecurityGroupIdsJsonList(m_ec2SecurityGroupIds.size());
   for(unsigned ec2SecurityGroupIdsIndex = 0; ec2SecurityGroupIdsIndex < ec2SecurityGroupIdsJsonList.GetLength(); ++ec2SecurityGroupIdsIndex)
   {
     ec2SecurityGroupIdsJsonList[ec2SecurityGroupIdsIndex].AsString(m_ec2SecurityGroupIds[ec2SecurityGroupIdsIndex]);
   }
   payload.WithArray("ec2SecurityGroupIds", std::move(ec2SecurityGroupIdsJsonList));

  }

  if(m_launchProfileIdHasBeenSet)
  {
   payload.WithString("launchProfileId", m_launchProfileId);

  }

  if(m_launchProfileProtocolVersionHasBeenSet)
  {
   payload.WithString("launchProfileProtocolVersion", m_launchProfileProtocolVersion);

  }

  if(m_launchPurposeHasBeenSet)
  {
   payload.WithString("launchPurpose", m_launchPurpose);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", LaunchProfilePlatformMapper::GetNameForLaunchProfilePlatform(m_platform));
  }

  if(m_systemInitializationScriptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemInitializationScriptsJsonList(m_systemInitializationScripts.size());
   for(unsigned systemInitializationScriptsIndex = 0; systemInitializationScriptsIndex < systemInitializationScriptsJsonList.GetLength(); ++systemInitializationScriptsIndex)
   {
     systemInitializationScriptsJsonList[systemInitializationScriptsIndex].AsObject(m_systemInitializationScripts[systemInitializationScriptsIndex].Jsonize());
   }
   payload.WithArray("systemInitializationScripts", std::move(systemInitializationScriptsJsonList));

  }

  if(m_userInitializationScriptsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userInitializationScriptsJsonList(m_userInitializationScripts.size());
   for(unsigned userInitializationScriptsIndex = 0; userInitializationScriptsIndex < userInitializationScriptsJsonList.GetLength(); ++userInitializationScriptsIndex)
   {
     userInitializationScriptsJsonList[userInitializationScriptsIndex].AsObject(m_userInitializationScripts[userInitializationScriptsIndex].Jsonize());
   }
   payload.WithArray("userInitializationScripts", std::move(userInitializationScriptsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
