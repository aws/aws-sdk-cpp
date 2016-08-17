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
#include <aws/support/model/TrustedAdvisorCheckRefreshStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorCheckRefreshStatus::TrustedAdvisorCheckRefreshStatus() : 
    m_checkIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_millisUntilNextRefreshable(0),
    m_millisUntilNextRefreshableHasBeenSet(false)
{
}

TrustedAdvisorCheckRefreshStatus::TrustedAdvisorCheckRefreshStatus(const JsonValue& jsonValue) : 
    m_checkIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_millisUntilNextRefreshable(0),
    m_millisUntilNextRefreshableHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCheckRefreshStatus& TrustedAdvisorCheckRefreshStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("checkId"))
  {
    m_checkId = jsonValue.GetString("checkId");

    m_checkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("millisUntilNextRefreshable"))
  {
    m_millisUntilNextRefreshable = jsonValue.GetInt64("millisUntilNextRefreshable");

    m_millisUntilNextRefreshableHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCheckRefreshStatus::Jsonize() const
{
  JsonValue payload;

  if(m_checkIdHasBeenSet)
  {
   payload.WithString("checkId", m_checkId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_millisUntilNextRefreshableHasBeenSet)
  {
   payload.WithInt64("millisUntilNextRefreshable", m_millisUntilNextRefreshable);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws