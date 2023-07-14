/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FeatureActivations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

FeatureActivations::FeatureActivations() : 
    m_inputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions::NOT_SET),
    m_inputPrepareScheduleActionsHasBeenSet(false)
{
}

FeatureActivations::FeatureActivations(JsonView jsonValue) : 
    m_inputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions::NOT_SET),
    m_inputPrepareScheduleActionsHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureActivations& FeatureActivations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputPrepareScheduleActions"))
  {
    m_inputPrepareScheduleActions = FeatureActivationsInputPrepareScheduleActionsMapper::GetFeatureActivationsInputPrepareScheduleActionsForName(jsonValue.GetString("inputPrepareScheduleActions"));

    m_inputPrepareScheduleActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureActivations::Jsonize() const
{
  JsonValue payload;

  if(m_inputPrepareScheduleActionsHasBeenSet)
  {
   payload.WithString("inputPrepareScheduleActions", FeatureActivationsInputPrepareScheduleActionsMapper::GetNameForFeatureActivationsInputPrepareScheduleActions(m_inputPrepareScheduleActions));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
