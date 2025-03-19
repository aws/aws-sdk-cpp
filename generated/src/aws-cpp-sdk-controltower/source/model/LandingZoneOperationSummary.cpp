/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/LandingZoneOperationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

LandingZoneOperationSummary::LandingZoneOperationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

LandingZoneOperationSummary& LandingZoneOperationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("operationIdentifier"))
  {
    m_operationIdentifier = jsonValue.GetString("operationIdentifier");
    m_operationIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationType"))
  {
    m_operationType = LandingZoneOperationTypeMapper::GetLandingZoneOperationTypeForName(jsonValue.GetString("operationType"));
    m_operationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = LandingZoneOperationStatusMapper::GetLandingZoneOperationStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue LandingZoneOperationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_operationIdentifierHasBeenSet)
  {
   payload.WithString("operationIdentifier", m_operationIdentifier);

  }

  if(m_operationTypeHasBeenSet)
  {
   payload.WithString("operationType", LandingZoneOperationTypeMapper::GetNameForLandingZoneOperationType(m_operationType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LandingZoneOperationStatusMapper::GetNameForLandingZoneOperationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
