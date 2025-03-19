/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/OperationFailureDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

OperationFailureDetails::OperationFailureDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

OperationFailureDetails& OperationFailureDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RollbackOperationId"))
  {
    m_rollbackOperationId = jsonValue.GetString("RollbackOperationId");
    m_rollbackOperationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("ErrorInfo");
    m_errorInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue OperationFailureDetails::Jsonize() const
{
  JsonValue payload;

  if(m_rollbackOperationIdHasBeenSet)
  {
   payload.WithString("RollbackOperationId", m_rollbackOperationId);

  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("ErrorInfo", m_errorInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
