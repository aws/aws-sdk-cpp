/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobAttemptDetail.h>
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

ServiceJobAttemptDetail::ServiceJobAttemptDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceJobAttemptDetail& ServiceJobAttemptDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceResourceId"))
  {
    m_serviceResourceId = jsonValue.GetObject("serviceResourceId");
    m_serviceResourceIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetInt64("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetInt64("stoppedAt");
    m_stoppedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobAttemptDetail::Jsonize() const
{
  JsonValue payload;

  if(m_serviceResourceIdHasBeenSet)
  {
   payload.WithObject("serviceResourceId", m_serviceResourceId.Jsonize());

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithInt64("startedAt", m_startedAt);

  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithInt64("stoppedAt", m_stoppedAt);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
