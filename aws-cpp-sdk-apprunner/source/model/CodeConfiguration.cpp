/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/CodeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

CodeConfiguration::CodeConfiguration() : 
    m_configurationSource(ConfigurationSource::NOT_SET),
    m_configurationSourceHasBeenSet(false),
    m_codeConfigurationValuesHasBeenSet(false)
{
}

CodeConfiguration::CodeConfiguration(JsonView jsonValue) : 
    m_configurationSource(ConfigurationSource::NOT_SET),
    m_configurationSourceHasBeenSet(false),
    m_codeConfigurationValuesHasBeenSet(false)
{
  *this = jsonValue;
}

CodeConfiguration& CodeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationSource"))
  {
    m_configurationSource = ConfigurationSourceMapper::GetConfigurationSourceForName(jsonValue.GetString("ConfigurationSource"));

    m_configurationSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CodeConfigurationValues"))
  {
    m_codeConfigurationValues = jsonValue.GetObject("CodeConfigurationValues");

    m_codeConfigurationValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue CodeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationSourceHasBeenSet)
  {
   payload.WithString("ConfigurationSource", ConfigurationSourceMapper::GetNameForConfigurationSource(m_configurationSource));
  }

  if(m_codeConfigurationValuesHasBeenSet)
  {
   payload.WithObject("CodeConfigurationValues", m_codeConfigurationValues.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
