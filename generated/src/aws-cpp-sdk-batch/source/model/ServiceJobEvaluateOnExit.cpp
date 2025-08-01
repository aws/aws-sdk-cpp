/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobEvaluateOnExit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ServiceJobEvaluateOnExit::ServiceJobEvaluateOnExit(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceJobEvaluateOnExit& ServiceJobEvaluateOnExit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = ServiceJobRetryActionMapper::GetServiceJobRetryActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("onStatusReason"))
  {
    m_onStatusReason = jsonValue.GetString("onStatusReason");
    m_onStatusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobEvaluateOnExit::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", ServiceJobRetryActionMapper::GetNameForServiceJobRetryAction(m_action));
  }

  if(m_onStatusReasonHasBeenSet)
  {
   payload.WithString("onStatusReason", m_onStatusReason);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
