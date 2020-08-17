/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/WorldFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

WorldFailure::WorldFailure() : 
    m_failureCode(WorldGenerationJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_sampleFailureReasonHasBeenSet(false),
    m_failureCount(0),
    m_failureCountHasBeenSet(false)
{
}

WorldFailure::WorldFailure(JsonView jsonValue) : 
    m_failureCode(WorldGenerationJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_sampleFailureReasonHasBeenSet(false),
    m_failureCount(0),
    m_failureCountHasBeenSet(false)
{
  *this = jsonValue;
}

WorldFailure& WorldFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = WorldGenerationJobErrorCodeMapper::GetWorldGenerationJobErrorCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sampleFailureReason"))
  {
    m_sampleFailureReason = jsonValue.GetString("sampleFailureReason");

    m_sampleFailureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCount"))
  {
    m_failureCount = jsonValue.GetInteger("failureCount");

    m_failureCountHasBeenSet = true;
  }

  return *this;
}

JsonValue WorldFailure::Jsonize() const
{
  JsonValue payload;

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", WorldGenerationJobErrorCodeMapper::GetNameForWorldGenerationJobErrorCode(m_failureCode));
  }

  if(m_sampleFailureReasonHasBeenSet)
  {
   payload.WithString("sampleFailureReason", m_sampleFailureReason);

  }

  if(m_failureCountHasBeenSet)
  {
   payload.WithInteger("failureCount", m_failureCount);

  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
