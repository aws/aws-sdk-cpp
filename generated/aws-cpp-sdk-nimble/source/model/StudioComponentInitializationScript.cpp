/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/StudioComponentInitializationScript.h>
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

StudioComponentInitializationScript::StudioComponentInitializationScript() : 
    m_launchProfileProtocolVersionHasBeenSet(false),
    m_platform(LaunchProfilePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_runContext(StudioComponentInitializationScriptRunContext::NOT_SET),
    m_runContextHasBeenSet(false),
    m_scriptHasBeenSet(false)
{
}

StudioComponentInitializationScript::StudioComponentInitializationScript(JsonView jsonValue) : 
    m_launchProfileProtocolVersionHasBeenSet(false),
    m_platform(LaunchProfilePlatform::NOT_SET),
    m_platformHasBeenSet(false),
    m_runContext(StudioComponentInitializationScriptRunContext::NOT_SET),
    m_runContextHasBeenSet(false),
    m_scriptHasBeenSet(false)
{
  *this = jsonValue;
}

StudioComponentInitializationScript& StudioComponentInitializationScript::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchProfileProtocolVersion"))
  {
    m_launchProfileProtocolVersion = jsonValue.GetString("launchProfileProtocolVersion");

    m_launchProfileProtocolVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = LaunchProfilePlatformMapper::GetLaunchProfilePlatformForName(jsonValue.GetString("platform"));

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runContext"))
  {
    m_runContext = StudioComponentInitializationScriptRunContextMapper::GetStudioComponentInitializationScriptRunContextForName(jsonValue.GetString("runContext"));

    m_runContextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("script"))
  {
    m_script = jsonValue.GetString("script");

    m_scriptHasBeenSet = true;
  }

  return *this;
}

JsonValue StudioComponentInitializationScript::Jsonize() const
{
  JsonValue payload;

  if(m_launchProfileProtocolVersionHasBeenSet)
  {
   payload.WithString("launchProfileProtocolVersion", m_launchProfileProtocolVersion);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", LaunchProfilePlatformMapper::GetNameForLaunchProfilePlatform(m_platform));
  }

  if(m_runContextHasBeenSet)
  {
   payload.WithString("runContext", StudioComponentInitializationScriptRunContextMapper::GetNameForStudioComponentInitializationScriptRunContext(m_runContext));
  }

  if(m_scriptHasBeenSet)
  {
   payload.WithString("script", m_script);

  }

  return payload;
}

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
