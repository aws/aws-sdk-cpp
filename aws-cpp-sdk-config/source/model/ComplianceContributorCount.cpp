/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/config/model/ComplianceContributorCount.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ComplianceContributorCount::ComplianceContributorCount() : 
    m_cappedCount(0),
    m_cappedCountHasBeenSet(false),
    m_capExceeded(false),
    m_capExceededHasBeenSet(false)
{
}

ComplianceContributorCount::ComplianceContributorCount(const JsonValue& jsonValue) : 
    m_cappedCount(0),
    m_cappedCountHasBeenSet(false),
    m_capExceeded(false),
    m_capExceededHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceContributorCount& ComplianceContributorCount::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CappedCount"))
  {
    m_cappedCount = jsonValue.GetInteger("CappedCount");

    m_cappedCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapExceeded"))
  {
    m_capExceeded = jsonValue.GetBool("CapExceeded");

    m_capExceededHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceContributorCount::Jsonize() const
{
  JsonValue payload;

  if(m_cappedCountHasBeenSet)
  {
   payload.WithInteger("CappedCount", m_cappedCount);

  }

  if(m_capExceededHasBeenSet)
  {
   payload.WithBool("CapExceeded", m_capExceeded);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws