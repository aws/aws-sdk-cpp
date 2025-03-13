/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/PointInTimeRecovery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

PointInTimeRecovery::PointInTimeRecovery(JsonView jsonValue)
{
  *this = jsonValue;
}

PointInTimeRecovery& PointInTimeRecovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = PointInTimeRecoveryStatusMapper::GetPointInTimeRecoveryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue PointInTimeRecovery::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PointInTimeRecoveryStatusMapper::GetNameForPointInTimeRecoveryStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
