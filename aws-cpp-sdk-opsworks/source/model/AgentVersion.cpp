/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

AgentVersion::AgentVersion(const JsonValue& jsonValue) : 
    m_versionHasBeenSet(false),
    m_configurationManagerHasBeenSet(false)
{
  *this = jsonValue;
}

AgentVersion& AgentVersion::operator =(const JsonValue& jsonValue)
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