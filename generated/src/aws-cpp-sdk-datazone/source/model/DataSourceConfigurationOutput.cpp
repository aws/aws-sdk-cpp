/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceConfigurationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DataSourceConfigurationOutput::DataSourceConfigurationOutput() : 
    m_glueRunConfigurationHasBeenSet(false),
    m_redshiftRunConfigurationHasBeenSet(false)
{
}

DataSourceConfigurationOutput::DataSourceConfigurationOutput(JsonView jsonValue) : 
    m_glueRunConfigurationHasBeenSet(false),
    m_redshiftRunConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfigurationOutput& DataSourceConfigurationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueRunConfiguration"))
  {
    m_glueRunConfiguration = jsonValue.GetObject("glueRunConfiguration");

    m_glueRunConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redshiftRunConfiguration"))
  {
    m_redshiftRunConfiguration = jsonValue.GetObject("redshiftRunConfiguration");

    m_redshiftRunConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfigurationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_glueRunConfigurationHasBeenSet)
  {
   payload.WithObject("glueRunConfiguration", m_glueRunConfiguration.Jsonize());

  }

  if(m_redshiftRunConfigurationHasBeenSet)
  {
   payload.WithObject("redshiftRunConfiguration", m_redshiftRunConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
