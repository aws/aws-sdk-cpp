/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/JobDetailsError.h>
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

JobDetailsError::JobDetailsError() : 
    m_code(JobEntityErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

JobDetailsError::JobDetailsError(JsonView jsonValue) : 
    m_code(JobEntityErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

JobDetailsError& JobDetailsError::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue JobDetailsError::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
