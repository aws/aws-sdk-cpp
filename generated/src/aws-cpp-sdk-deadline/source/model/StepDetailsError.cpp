/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepDetailsError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

StepDetailsError::StepDetailsError() : 
    m_code(JobEntityErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_stepIdHasBeenSet(false)
{
}

StepDetailsError::StepDetailsError(JsonView jsonValue) : 
    m_code(JobEntityErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_stepIdHasBeenSet(false)
{
  *this = jsonValue;
}

StepDetailsError& StepDetailsError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = JobEntityErrorCodeMapper::GetJobEntityErrorCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");

    m_jobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");

    m_stepIdHasBeenSet = true;
  }

  return *this;
}

JsonValue StepDetailsError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", JobEntityErrorCodeMapper::GetNameForJobEntityErrorCode(m_code));
  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_stepIdHasBeenSet)
  {
   payload.WithString("stepId", m_stepId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
