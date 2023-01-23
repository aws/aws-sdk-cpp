/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/AttemptDetail.h>
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

AttemptDetail::AttemptDetail() : 
    m_containerHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_stoppedAt(0),
    m_stoppedAtHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
}

AttemptDetail::AttemptDetail(JsonView jsonValue) : 
    m_containerHasBeenSet(false),
    m_startedAt(0),
    m_startedAtHasBeenSet(false),
    m_stoppedAt(0),
    m_stoppedAtHasBeenSet(false),
    m_statusReasonHasBeenSet(false)
{
  *this = jsonValue;
}

AttemptDetail& AttemptDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("container"))
  {
    m_container = jsonValue.GetObject("container");

    m_containerHasBeenSet = true;
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

JsonValue AttemptDetail::Jsonize() const
{
  JsonValue payload;

  if(m_containerHasBeenSet)
  {
   payload.WithObject("container", m_container.Jsonize());

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
