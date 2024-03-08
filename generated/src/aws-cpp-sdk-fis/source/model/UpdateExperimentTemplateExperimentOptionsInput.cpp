/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/UpdateExperimentTemplateExperimentOptionsInput.h>
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

UpdateExperimentTemplateExperimentOptionsInput::UpdateExperimentTemplateExperimentOptionsInput() : 
    m_emptyTargetResolutionMode(EmptyTargetResolutionMode::NOT_SET),
    m_emptyTargetResolutionModeHasBeenSet(false)
{
}

UpdateExperimentTemplateExperimentOptionsInput::UpdateExperimentTemplateExperimentOptionsInput(JsonView jsonValue) : 
    m_emptyTargetResolutionMode(EmptyTargetResolutionMode::NOT_SET),
    m_emptyTargetResolutionModeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateExperimentTemplateExperimentOptionsInput& UpdateExperimentTemplateExperimentOptionsInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("emptyTargetResolutionMode"))
  {
    m_emptyTargetResolutionMode = EmptyTargetResolutionModeMapper::GetEmptyTargetResolutionModeForName(jsonValue.GetString("emptyTargetResolutionMode"));

    m_emptyTargetResolutionModeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateExperimentTemplateExperimentOptionsInput::Jsonize() const
{
  JsonValue payload;

  if(m_emptyTargetResolutionModeHasBeenSet)
  {
   payload.WithString("emptyTargetResolutionMode", EmptyTargetResolutionModeMapper::GetNameForEmptyTargetResolutionMode(m_emptyTargetResolutionMode));
  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
