/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ReportGroupTrendStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ReportGroupTrendStats::ReportGroupTrendStats() : 
    m_averageHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false)
{
}

ReportGroupTrendStats::ReportGroupTrendStats(JsonView jsonValue) : 
    m_averageHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false)
{
  *this = jsonValue;
}

ReportGroupTrendStats& ReportGroupTrendStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("average"))
  {
    m_average = jsonValue.GetString("average");

    m_averageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("max"))
  {
    m_max = jsonValue.GetString("max");

    m_maxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("min"))
  {
    m_min = jsonValue.GetString("min");

    m_minHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportGroupTrendStats::Jsonize() const
{
  JsonValue payload;

  if(m_averageHasBeenSet)
  {
   payload.WithString("average", m_average);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithString("max", m_max);

  }

  if(m_minHasBeenSet)
  {
   payload.WithString("min", m_min);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
