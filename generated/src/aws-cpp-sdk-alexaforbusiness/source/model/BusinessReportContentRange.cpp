/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/BusinessReportContentRange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

BusinessReportContentRange::BusinessReportContentRange() : 
    m_interval(BusinessReportInterval::NOT_SET),
    m_intervalHasBeenSet(false)
{
}

BusinessReportContentRange::BusinessReportContentRange(JsonView jsonValue) : 
    m_interval(BusinessReportInterval::NOT_SET),
    m_intervalHasBeenSet(false)
{
  *this = jsonValue;
}

BusinessReportContentRange& BusinessReportContentRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = BusinessReportIntervalMapper::GetBusinessReportIntervalForName(jsonValue.GetString("Interval"));

    m_intervalHasBeenSet = true;
  }

  return *this;
}

JsonValue BusinessReportContentRange::Jsonize() const
{
  JsonValue payload;

  if(m_intervalHasBeenSet)
  {
   payload.WithString("Interval", BusinessReportIntervalMapper::GetNameForBusinessReportInterval(m_interval));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
