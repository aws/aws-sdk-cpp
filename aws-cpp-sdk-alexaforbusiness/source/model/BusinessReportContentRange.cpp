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
