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

ScanStatus::ScanStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

ScanStatus& ScanStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = ScanStatusCodeMapper::GetScanStatusCodeForName(jsonValue.GetString("statusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reason"))
  {
    m_reason = ScanStatusReasonMapper::GetScanStatusReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ScanStatus::Jsonize() const
{
  JsonValue payload;

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", ScanStatusCodeMapper::GetNameForScanStatusCode(m_statusCode));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", ScanStatusReasonMapper::GetNameForScanStatusReason(m_reason));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
