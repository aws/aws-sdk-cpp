/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/LastExecutionStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

LastExecutionStatus::LastExecutionStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

LastExecutionStatus& LastExecutionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionStatus"))
  {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("ExecutionStatus"));
    m_executionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue LastExecutionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_executionStatusHasBeenSet)
  {
   payload.WithString("ExecutionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
