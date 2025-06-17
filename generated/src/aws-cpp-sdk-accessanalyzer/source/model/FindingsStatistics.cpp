/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingsStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

FindingsStatistics::FindingsStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

FindingsStatistics& FindingsStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("externalAccessFindingsStatistics"))
  {
    m_externalAccessFindingsStatistics = jsonValue.GetObject("externalAccessFindingsStatistics");
    m_externalAccessFindingsStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("internalAccessFindingsStatistics"))
  {
    m_internalAccessFindingsStatistics = jsonValue.GetObject("internalAccessFindingsStatistics");
    m_internalAccessFindingsStatisticsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("unusedAccessFindingsStatistics"))
  {
    m_unusedAccessFindingsStatistics = jsonValue.GetObject("unusedAccessFindingsStatistics");
    m_unusedAccessFindingsStatisticsHasBeenSet = true;
  }
  return *this;
}

JsonValue FindingsStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_externalAccessFindingsStatisticsHasBeenSet)
  {
   payload.WithObject("externalAccessFindingsStatistics", m_externalAccessFindingsStatistics.Jsonize());

  }

  if(m_internalAccessFindingsStatisticsHasBeenSet)
  {
   payload.WithObject("internalAccessFindingsStatistics", m_internalAccessFindingsStatistics.Jsonize());

  }

  if(m_unusedAccessFindingsStatisticsHasBeenSet)
  {
   payload.WithObject("unusedAccessFindingsStatistics", m_unusedAccessFindingsStatistics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
