/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/RestartBatchJobIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

RestartBatchJobIdentifier::RestartBatchJobIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

RestartBatchJobIdentifier& RestartBatchJobIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionId"))
  {
    m_executionId = jsonValue.GetString("executionId");
    m_executionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobStepRestartMarker"))
  {
    m_jobStepRestartMarker = jsonValue.GetObject("jobStepRestartMarker");
    m_jobStepRestartMarkerHasBeenSet = true;
  }
  return *this;
}

JsonValue RestartBatchJobIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("executionId", m_executionId);

  }

  if(m_jobStepRestartMarkerHasBeenSet)
  {
   payload.WithObject("jobStepRestartMarker", m_jobStepRestartMarker.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
