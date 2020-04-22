/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codeguru-reviewer/model/MetricsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

MetricsSummary::MetricsSummary() : 
    m_meteredLinesOfCodeCount(0),
    m_meteredLinesOfCodeCountHasBeenSet(false),
    m_findingsCount(0),
    m_findingsCountHasBeenSet(false)
{
}

MetricsSummary::MetricsSummary(JsonView jsonValue) : 
    m_meteredLinesOfCodeCount(0),
    m_meteredLinesOfCodeCountHasBeenSet(false),
    m_findingsCount(0),
    m_findingsCountHasBeenSet(false)
{
  *this = jsonValue;
}

MetricsSummary& MetricsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeteredLinesOfCodeCount"))
  {
    m_meteredLinesOfCodeCount = jsonValue.GetInt64("MeteredLinesOfCodeCount");

    m_meteredLinesOfCodeCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FindingsCount"))
  {
    m_findingsCount = jsonValue.GetInt64("FindingsCount");

    m_findingsCountHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_meteredLinesOfCodeCountHasBeenSet)
  {
   payload.WithInt64("MeteredLinesOfCodeCount", m_meteredLinesOfCodeCount);

  }

  if(m_findingsCountHasBeenSet)
  {
   payload.WithInt64("FindingsCount", m_findingsCount);

  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
