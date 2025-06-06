﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceConfigurationInput.h>
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

DataSourceConfigurationInput::DataSourceConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSourceConfigurationInput& DataSourceConfigurationInput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("sageMakerRunConfiguration"))
  {
    m_sageMakerRunConfiguration = jsonValue.GetObject("sageMakerRunConfiguration");
    m_sageMakerRunConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceConfigurationInput::Jsonize() const
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

  if(m_sageMakerRunConfigurationHasBeenSet)
  {
   payload.WithObject("sageMakerRunConfiguration", m_sageMakerRunConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
