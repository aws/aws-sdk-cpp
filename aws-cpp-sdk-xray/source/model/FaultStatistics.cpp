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

#include <aws/xray/model/FaultStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

FaultStatistics::FaultStatistics() : 
    m_otherCount(0),
    m_otherCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
}

FaultStatistics::FaultStatistics(const JsonValue& jsonValue) : 
    m_otherCount(0),
    m_otherCountHasBeenSet(false),
    m_totalCount(0),
    m_totalCountHasBeenSet(false)
{
  *this = jsonValue;
}

FaultStatistics& FaultStatistics::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("OtherCount"))
  {
    m_otherCount = jsonValue.GetInt64("OtherCount");

    m_otherCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCount"))
  {
    m_totalCount = jsonValue.GetInt64("TotalCount");

    m_totalCountHasBeenSet = true;
  }

  return *this;
}

JsonValue FaultStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_otherCountHasBeenSet)
  {
   payload.WithInt64("OtherCount", m_otherCount);

  }

  if(m_totalCountHasBeenSet)
  {
   payload.WithInt64("TotalCount", m_totalCount);

  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws