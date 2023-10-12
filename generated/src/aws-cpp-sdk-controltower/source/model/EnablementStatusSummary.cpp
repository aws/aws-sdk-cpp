/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnablementStatusSummary.h>
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

EnablementStatusSummary::EnablementStatusSummary() : 
    m_lastOperationIdentifierHasBeenSet(false),
    m_status(EnablementStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

EnablementStatusSummary::EnablementStatusSummary(JsonView jsonValue) : 
    m_lastOperationIdentifierHasBeenSet(false),
    m_status(EnablementStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

EnablementStatusSummary& EnablementStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastOperationIdentifier"))
  {
    m_lastOperationIdentifier = jsonValue.GetString("lastOperationIdentifier");

    m_lastOperationIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnablementStatusMapper::GetEnablementStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue EnablementStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_lastOperationIdentifierHasBeenSet)
  {
   payload.WithString("lastOperationIdentifier", m_lastOperationIdentifier);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnablementStatusMapper::GetNameForEnablementStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
