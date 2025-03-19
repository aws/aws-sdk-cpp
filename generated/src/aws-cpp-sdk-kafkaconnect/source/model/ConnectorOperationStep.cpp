/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ConnectorOperationStep.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

ConnectorOperationStep::ConnectorOperationStep(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorOperationStep& ConnectorOperationStep::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepType"))
  {
    m_stepType = ConnectorOperationStepTypeMapper::GetConnectorOperationStepTypeForName(jsonValue.GetString("stepType"));
    m_stepTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepState"))
  {
    m_stepState = ConnectorOperationStepStateMapper::GetConnectorOperationStepStateForName(jsonValue.GetString("stepState"));
    m_stepStateHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorOperationStep::Jsonize() const
{
  JsonValue payload;

  if(m_stepTypeHasBeenSet)
  {
   payload.WithString("stepType", ConnectorOperationStepTypeMapper::GetNameForConnectorOperationStepType(m_stepType));
  }

  if(m_stepStateHasBeenSet)
  {
   payload.WithString("stepState", ConnectorOperationStepStateMapper::GetNameForConnectorOperationStepState(m_stepState));
  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
