/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

ExperimentSchedule::ExperimentSchedule() : 
    m_analysisCompleteTimeHasBeenSet(false)
{
}

ExperimentSchedule::ExperimentSchedule(JsonView jsonValue) : 
    m_analysisCompleteTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExperimentSchedule& ExperimentSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("analysisCompleteTime"))
  {
    m_analysisCompleteTime = jsonValue.GetDouble("analysisCompleteTime");

    m_analysisCompleteTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExperimentSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_analysisCompleteTimeHasBeenSet)
  {
   payload.WithDouble("analysisCompleteTime", m_analysisCompleteTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
