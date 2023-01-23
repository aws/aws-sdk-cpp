/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/BusinessReportRecurrence.h>
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

BusinessReportRecurrence::BusinessReportRecurrence() : 
    m_startDateHasBeenSet(false)
{
}

BusinessReportRecurrence::BusinessReportRecurrence(JsonView jsonValue) : 
    m_startDateHasBeenSet(false)
{
  *this = jsonValue;
}

BusinessReportRecurrence& BusinessReportRecurrence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetString("StartDate");

    m_startDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BusinessReportRecurrence::Jsonize() const
{
  JsonValue payload;

  if(m_startDateHasBeenSet)
  {
   payload.WithString("StartDate", m_startDate);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
