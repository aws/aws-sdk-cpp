/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AutoSnapshotAddOnRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AutoSnapshotAddOnRequest::AutoSnapshotAddOnRequest() : 
    m_snapshotTimeOfDayHasBeenSet(false)
{
}

AutoSnapshotAddOnRequest::AutoSnapshotAddOnRequest(JsonView jsonValue) : 
    m_snapshotTimeOfDayHasBeenSet(false)
{
  *this = jsonValue;
}

AutoSnapshotAddOnRequest& AutoSnapshotAddOnRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("snapshotTimeOfDay"))
  {
    m_snapshotTimeOfDay = jsonValue.GetString("snapshotTimeOfDay");

    m_snapshotTimeOfDayHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoSnapshotAddOnRequest::Jsonize() const
{
  JsonValue payload;

  if(m_snapshotTimeOfDayHasBeenSet)
  {
   payload.WithString("snapshotTimeOfDay", m_snapshotTimeOfDay);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
