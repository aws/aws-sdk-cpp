/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opsworks/model/AgentVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

AgentVersion::AgentVersion() : 
    m_versionHasBeenSet(false),
    m_configurationManagerHasBeenSet(false)
{
}

AgentVersion::AgentVersion(JsonView jsonValue) : 
    m_versionHasBeenSet(false),
    m_configurationManagerHasBeenSet(false)
{
  *this = jsonValue;
}

AgentVersion& AgentVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationManager"))
  {
    m_configurationManager = jsonValue.GetObject("ConfigurationManager");

    m_configurationManagerHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_configurationManagerHasBeenSet)
  {
   payload.WithObject("ConfigurationManager", m_configurationManager.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
