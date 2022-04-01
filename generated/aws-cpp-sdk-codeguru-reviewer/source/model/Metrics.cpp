/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/Metrics.h>
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

Metrics::Metrics() : 
    m_meteredLinesOfCodeCount(0),
    m_meteredLinesOfCodeCountHasBeenSet(false),
    m_findingsCount(0),
    m_findingsCountHasBeenSet(false)
{
}

Metrics::Metrics(JsonView jsonValue) : 
    m_meteredLinesOfCodeCount(0),
    m_meteredLinesOfCodeCountHasBeenSet(false),
    m_findingsCount(0),
    m_findingsCountHasBeenSet(false)
{
  *this = jsonValue;
}

Metrics& Metrics::operator =(JsonView jsonValue)
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

JsonValue Metrics::Jsonize() const
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
