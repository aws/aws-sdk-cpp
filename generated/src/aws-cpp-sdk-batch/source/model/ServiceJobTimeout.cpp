/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobTimeout.h>
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

ServiceJobTimeout::ServiceJobTimeout(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceJobTimeout& ServiceJobTimeout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attemptDurationSeconds"))
  {
    m_attemptDurationSeconds = jsonValue.GetInteger("attemptDurationSeconds");
    m_attemptDurationSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobTimeout::Jsonize() const
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
