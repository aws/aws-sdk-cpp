/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DataFormatConversionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DataFormatConversionConfiguration::DataFormatConversionConfiguration() : 
    m_schemaConfigurationHasBeenSet(false),
    m_inputFormatConfigurationHasBeenSet(false),
    m_outputFormatConfigurationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

DataFormatConversionConfiguration::DataFormatConversionConfiguration(JsonView jsonValue) : 
    m_schemaConfigurationHasBeenSet(false),
    m_inputFormatConfigurationHasBeenSet(false),
    m_outputFormatConfigurationHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

DataFormatConversionConfiguration& DataFormatConversionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SchemaConfiguration"))
  {
    m_schemaConfiguration = jsonValue.GetObject("SchemaConfiguration");

    m_schemaConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputFormatConfiguration"))
  {
    m_inputFormatConfiguration = jsonValue.GetObject("InputFormatConfiguration");

    m_inputFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputFormatConfiguration"))
  {
    m_outputFormatConfiguration = jsonValue.GetObject("OutputFormatConfiguration");

    m_outputFormatConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue DataFormatConversionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_schemaConfigurationHasBeenSet)
  {
   payload.WithObject("SchemaConfiguration", m_schemaConfiguration.Jsonize());

  }

  if(m_inputFormatConfigurationHasBeenSet)
  {
   payload.WithObject("InputFormatConfiguration", m_inputFormatConfiguration.Jsonize());

  }

  if(m_outputFormatConfigurationHasBeenSet)
  {
   payload.WithObject("OutputFormatConfiguration", m_outputFormatConfiguration.Jsonize());

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
