/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ConnectorOperationSummary.h>
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

ConnectorOperationSummary::ConnectorOperationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorOperationSummary& ConnectorOperationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectorOperationArn"))
  {
    m_connectorOperationArn = jsonValue.GetString("connectorOperationArn");
    m_connectorOperationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorOperationType"))
  {
    m_connectorOperationType = ConnectorOperationTypeMapper::GetConnectorOperationTypeForName(jsonValue.GetString("connectorOperationType"));
    m_connectorOperationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorOperationState"))
  {
    m_connectorOperationState = ConnectorOperationStateMapper::GetConnectorOperationStateForName(jsonValue.GetString("connectorOperationState"));
    m_connectorOperationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorOperationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_connectorOperationArnHasBeenSet)
  {
   payload.WithString("connectorOperationArn", m_connectorOperationArn);

  }

  if(m_connectorOperationTypeHasBeenSet)
  {
   payload.WithString("connectorOperationType", ConnectorOperationTypeMapper::GetNameForConnectorOperationType(m_connectorOperationType));
  }

  if(m_connectorOperationStateHasBeenSet)
  {
   payload.WithString("connectorOperationState", ConnectorOperationStateMapper::GetNameForConnectorOperationState(m_connectorOperationState));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
