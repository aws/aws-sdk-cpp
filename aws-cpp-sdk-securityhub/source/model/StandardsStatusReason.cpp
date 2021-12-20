/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsStatusReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsStatusReason::StandardsStatusReason() : 
    m_statusReasonCode(StatusReasonCode::NOT_SET),
    m_statusReasonCodeHasBeenSet(false)
{
}

StandardsStatusReason::StandardsStatusReason(JsonView jsonValue) : 
    m_statusReasonCode(StatusReasonCode::NOT_SET),
    m_statusReasonCodeHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsStatusReason& StandardsStatusReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatusReasonCode"))
  {
    m_statusReasonCode = StatusReasonCodeMapper::GetStatusReasonCodeForName(jsonValue.GetString("StatusReasonCode"));

    m_statusReasonCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsStatusReason::Jsonize() const
{
  JsonValue payload;

  if(m_statusReasonCodeHasBeenSet)
  {
   payload.WithString("StatusReasonCode", StatusReasonCodeMapper::GetNameForStatusReasonCode(m_statusReasonCode));
  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
