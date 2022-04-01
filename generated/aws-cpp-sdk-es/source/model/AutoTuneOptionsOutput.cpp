/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AutoTuneOptionsOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AutoTuneOptionsOutput::AutoTuneOptionsOutput() : 
    m_state(AutoTuneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

AutoTuneOptionsOutput::AutoTuneOptionsOutput(JsonView jsonValue) : 
    m_state(AutoTuneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTuneOptionsOutput& AutoTuneOptionsOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = AutoTuneStateMapper::GetAutoTuneStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTuneOptionsOutput::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AutoTuneStateMapper::GetNameForAutoTuneState(m_state));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
