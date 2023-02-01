/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/CreateExperimentTemplateStopConditionInput.h>
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

CreateExperimentTemplateStopConditionInput::CreateExperimentTemplateStopConditionInput() : 
    m_sourceHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CreateExperimentTemplateStopConditionInput::CreateExperimentTemplateStopConditionInput(JsonView jsonValue) : 
    m_sourceHasBeenSet(false),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

CreateExperimentTemplateStopConditionInput& CreateExperimentTemplateStopConditionInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetString("source");

    m_sourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateExperimentTemplateStopConditionInput::Jsonize() const
{
  JsonValue payload;

  if(m_sourceHasBeenSet)
  {
   payload.WithString("source", m_source);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace FIS
} // namespace Aws
