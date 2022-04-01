/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryRuntimeStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryRuntimeStatistics::QueryRuntimeStatistics() : 
    m_timelineHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_outputStageHasBeenSet(false)
{
}

QueryRuntimeStatistics::QueryRuntimeStatistics(JsonView jsonValue) : 
    m_timelineHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_outputStageHasBeenSet(false)
{
  *this = jsonValue;
}

QueryRuntimeStatistics& QueryRuntimeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timeline"))
  {
    m_timeline = jsonValue.GetObject("Timeline");

    m_timelineHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rows"))
  {
    m_rows = jsonValue.GetObject("Rows");

    m_rowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputStage"))
  {
    m_outputStage = jsonValue.GetObject("OutputStage");

    m_outputStageHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryRuntimeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_timelineHasBeenSet)
  {
   payload.WithObject("Timeline", m_timeline.Jsonize());

  }

  if(m_rowsHasBeenSet)
  {
   payload.WithObject("Rows", m_rows.Jsonize());

  }

  if(m_outputStageHasBeenSet)
  {
   payload.WithObject("OutputStage", m_outputStage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
