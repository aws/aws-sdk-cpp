/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/CreateExperimentTemplateReportConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FIS
{
namespace Model
{

CreateExperimentTemplateReportConfigurationInput::CreateExperimentTemplateReportConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateExperimentTemplateReportConfigurationInput& CreateExperimentTemplateReportConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputs"))
  {
    m_outputs = jsonValue.GetObject("outputs");
    m_outputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSources"))
  {
    m_dataSources = jsonValue.GetObject("dataSources");
    m_dataSourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("preExperimentDuration"))
  {
    m_preExperimentDuration = jsonValue.GetString("preExperimentDuration");
    m_preExperimentDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("postExperimentDuration"))
  {
    m_postExperimentDuration = jsonValue.GetString("postExperimentDuration");
    m_postExperimentDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue CreateExperimentTemplateReportConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_outputsHasBeenSet)
  {
   payload.WithObject("outputs", m_outputs.Jsonize());

  }

  if(m_dataSourcesHasBeenSet)
  {
   payload.WithObject("dataSources", m_dataSources.Jsonize());

  }

  if(m_preExperimentDurationHasBeenSet)
  {
   payload.WithString("preExperimentDuration", m_preExperimentDuration);

  }

  if(m_postExperimentDurationHasBeenSet)
  {
   payload.WithString("postExperimentDuration", m_postExperimentDuration);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
