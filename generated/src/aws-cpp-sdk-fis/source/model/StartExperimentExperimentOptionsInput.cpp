/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/StartExperimentExperimentOptionsInput.h>
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

StartExperimentExperimentOptionsInput::StartExperimentExperimentOptionsInput(JsonView jsonValue)
{
  *this = jsonValue;
}

StartExperimentExperimentOptionsInput& StartExperimentExperimentOptionsInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionsMode"))
  {
    m_actionsMode = ActionsModeMapper::GetActionsModeForName(jsonValue.GetString("actionsMode"));
    m_actionsModeHasBeenSet = true;
  }
  return *this;
}

JsonValue StartExperimentExperimentOptionsInput::Jsonize() const
{
  JsonValue payload;

  if(m_actionsModeHasBeenSet)
  {
   payload.WithString("actionsMode", ActionsModeMapper::GetNameForActionsMode(m_actionsMode));
  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
