/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/RealTimeContactAnalysisTimeData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

RealTimeContactAnalysisTimeData::RealTimeContactAnalysisTimeData() : 
    m_absoluteTimeHasBeenSet(false)
{
}

RealTimeContactAnalysisTimeData::RealTimeContactAnalysisTimeData(JsonView jsonValue) : 
    m_absoluteTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RealTimeContactAnalysisTimeData& RealTimeContactAnalysisTimeData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AbsoluteTime"))
  {
    m_absoluteTime = jsonValue.GetString("AbsoluteTime");

    m_absoluteTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RealTimeContactAnalysisTimeData::Jsonize() const
{
  JsonValue payload;

  if(m_absoluteTimeHasBeenSet)
  {
   payload.WithString("AbsoluteTime", m_absoluteTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
