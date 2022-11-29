/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ActivateReadSetFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Omics
{
namespace Model
{

ActivateReadSetFilter::ActivateReadSetFilter() : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_status(ReadSetActivationJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ActivateReadSetFilter::ActivateReadSetFilter(JsonView jsonValue) : 
    m_createdAfterHasBeenSet(false),
    m_createdBeforeHasBeenSet(false),
    m_status(ReadSetActivationJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ActivateReadSetFilter& ActivateReadSetFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAfter"))
  {
    m_createdAfter = jsonValue.GetString("createdAfter");

    m_createdAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBefore"))
  {
    m_createdBefore = jsonValue.GetString("createdBefore");

    m_createdBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReadSetActivationJobStatusMapper::GetReadSetActivationJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ActivateReadSetFilter::Jsonize() const
{
  JsonValue payload;

  if(m_createdAfterHasBeenSet)
  {
   payload.WithString("createdAfter", m_createdAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdBeforeHasBeenSet)
  {
   payload.WithString("createdBefore", m_createdBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReadSetActivationJobStatusMapper::GetNameForReadSetActivationJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Omics
} // namespace Aws
