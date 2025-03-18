/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/FrontOfQueueJobSummary.h>
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

FrontOfQueueJobSummary::FrontOfQueueJobSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

FrontOfQueueJobSummary& FrontOfQueueJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("earliestTimeAtPosition"))
  {
    m_earliestTimeAtPosition = jsonValue.GetInt64("earliestTimeAtPosition");
    m_earliestTimeAtPositionHasBeenSet = true;
  }
  return *this;
}

JsonValue FrontOfQueueJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobArnHasBeenSet)
  {
   payload.WithString("jobArn", m_jobArn);

  }

  if(m_earliestTimeAtPositionHasBeenSet)
  {
   payload.WithInt64("earliestTimeAtPosition", m_earliestTimeAtPosition);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
