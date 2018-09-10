﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/discovery/model/ConfigurationTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

ConfigurationTag::ConfigurationTag() : 
    m_configurationType(ConfigurationItemType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_configurationIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_timeOfCreationHasBeenSet(false)
{
}

ConfigurationTag::ConfigurationTag(JsonView jsonValue) : 
    m_configurationType(ConfigurationItemType::NOT_SET),
    m_configurationTypeHasBeenSet(false),
    m_configurationIdHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_timeOfCreationHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationTag& ConfigurationTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configurationType"))
  {
    m_configurationType = ConfigurationItemTypeMapper::GetConfigurationItemTypeForName(jsonValue.GetString("configurationType"));

    m_configurationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationId"))
  {
    m_configurationId = jsonValue.GetString("configurationId");

    m_configurationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeOfCreation"))
  {
    m_timeOfCreation = jsonValue.GetDouble("timeOfCreation");

    m_timeOfCreationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationTag::Jsonize() const
{
  JsonValue payload;

  if(m_configurationTypeHasBeenSet)
  {
   payload.WithString("configurationType", ConfigurationItemTypeMapper::GetNameForConfigurationItemType(m_configurationType));
  }

  if(m_configurationIdHasBeenSet)
  {
   payload.WithString("configurationId", m_configurationId);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_timeOfCreationHasBeenSet)
  {
   payload.WithDouble("timeOfCreation", m_timeOfCreation.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
