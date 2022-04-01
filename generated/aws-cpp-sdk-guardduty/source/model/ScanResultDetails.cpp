/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanResultDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ScanResultDetails::ScanResultDetails() : 
    m_scanResult(ScanResult::NOT_SET),
    m_scanResultHasBeenSet(false)
{
}

ScanResultDetails::ScanResultDetails(JsonView jsonValue) : 
    m_scanResult(ScanResult::NOT_SET),
    m_scanResultHasBeenSet(false)
{
  *this = jsonValue;
}

ScanResultDetails& ScanResultDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanResult"))
  {
    m_scanResult = ScanResultMapper::GetScanResultForName(jsonValue.GetString("scanResult"));

    m_scanResultHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanResultDetails::Jsonize() const
{
  JsonValue payload;

  if(m_scanResultHasBeenSet)
  {
   payload.WithString("scanResult", ScanResultMapper::GetNameForScanResult(m_scanResult));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
