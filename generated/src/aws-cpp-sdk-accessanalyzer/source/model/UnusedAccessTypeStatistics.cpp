/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/UnusedAccessTypeStatistics.h>
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

UnusedAccessTypeStatistics::UnusedAccessTypeStatistics(JsonView jsonValue)
{
  *this = jsonValue;
}

UnusedAccessTypeStatistics& UnusedAccessTypeStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unusedAccessType"))
  {
    m_unusedAccessType = jsonValue.GetString("unusedAccessType");
    m_unusedAccessTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetInteger("total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue UnusedAccessTypeStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_unusedAccessTypeHasBeenSet)
  {
   payload.WithString("unusedAccessType", m_unusedAccessType);

  }

  if(m_totalHasBeenSet)
  {
   payload.WithInteger("total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
