/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/robomaker/model/FailedCreateSimulationJobRequest.h>
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

FailedCreateSimulationJobRequest::FailedCreateSimulationJobRequest() : 
    m_requestHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_failureCode(SimulationJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failedAtHasBeenSet(false)
{
}

FailedCreateSimulationJobRequest::FailedCreateSimulationJobRequest(JsonView jsonValue) : 
    m_requestHasBeenSet(false),
    m_failureReasonHasBeenSet(false),
    m_failureCode(SimulationJobErrorCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failedAtHasBeenSet(false)
{
  *this = jsonValue;
}

FailedCreateSimulationJobRequest& FailedCreateSimulationJobRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("request"))
  {
    m_request = jsonValue.GetObject("request");

    m_requestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = SimulationJobErrorCodeMapper::GetSimulationJobErrorCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failedAt"))
  {
    m_failedAt = jsonValue.GetDouble("failedAt");

    m_failedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedCreateSimulationJobRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestHasBeenSet)
  {
   payload.WithObject("request", m_request.Jsonize());

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", SimulationJobErrorCodeMapper::GetNameForSimulationJobErrorCode(m_failureCode));
  }

  if(m_failedAtHasBeenSet)
  {
   payload.WithDouble("failedAt", m_failedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
