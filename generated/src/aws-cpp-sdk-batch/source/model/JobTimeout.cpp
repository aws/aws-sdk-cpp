/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/JobTimeout.h>
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

JobTimeout::JobTimeout() : 
    m_attemptDurationSeconds(0),
    m_attemptDurationSecondsHasBeenSet(false)
{
}

JobTimeout::JobTimeout(JsonView jsonValue) : 
    m_attemptDurationSeconds(0),
    m_attemptDurationSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

JobTimeout& JobTimeout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attemptDurationSeconds"))
  {
    m_attemptDurationSeconds = jsonValue.GetInteger("attemptDurationSeconds");

    m_attemptDurationSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobTimeout::Jsonize() const
{
  JsonValue payload;

  if(m_attemptDurationSecondsHasBeenSet)
  {
   payload.WithInteger("attemptDurationSeconds", m_attemptDurationSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
