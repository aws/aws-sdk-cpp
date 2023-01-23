/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ScanStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ScanStatus::ScanStatus() : 
    m_reason(ScanStatusReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_statusCode(ScanStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
}

ScanStatus::ScanStatus(JsonView jsonValue) : 
    m_reason(ScanStatusReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_statusCode(ScanStatusCode::NOT_SET),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ScanStatus& ScanStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ScanStatusReasonMapper::GetScanStatusReasonForName(jsonValue.GetString("reason"));

    m_reasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = ScanStatusCodeMapper::GetScanStatusCodeForName(jsonValue.GetString("statusCode"));

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanStatus::Jsonize() const
{
  JsonValue payload;

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ScanStatusReasonMapper::GetNameForScanStatusReason(m_reason));
  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", ScanStatusCodeMapper::GetNameForScanStatusCode(m_statusCode));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
