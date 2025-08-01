/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CodeRepositoryOnDemandScan.h>
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

CodeRepositoryOnDemandScan::CodeRepositoryOnDemandScan(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeRepositoryOnDemandScan& CodeRepositoryOnDemandScan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastScannedCommitId"))
  {
    m_lastScannedCommitId = jsonValue.GetString("lastScannedCommitId");
    m_lastScannedCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastScanAt"))
  {
    m_lastScanAt = jsonValue.GetDouble("lastScanAt");
    m_lastScanAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanStatus"))
  {
    m_scanStatus = jsonValue.GetObject("scanStatus");
    m_scanStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRepositoryOnDemandScan::Jsonize() const
{
  JsonValue payload;

  if(m_lastScannedCommitIdHasBeenSet)
  {
   payload.WithString("lastScannedCommitId", m_lastScannedCommitId);

  }

  if(m_lastScanAtHasBeenSet)
  {
   payload.WithDouble("lastScanAt", m_lastScanAt.SecondsWithMSPrecision());
  }

  if(m_scanStatusHasBeenSet)
  {
   payload.WithObject("scanStatus", m_scanStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
