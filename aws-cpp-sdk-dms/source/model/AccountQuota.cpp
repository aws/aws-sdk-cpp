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
#include <aws/dms/model/AccountQuota.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

AccountQuota::AccountQuota() : 
    m_accountQuotaNameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
}

AccountQuota::AccountQuota(const JsonValue& jsonValue) : 
    m_accountQuotaNameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

AccountQuota& AccountQuota::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AccountQuotaName"))
  {
    m_accountQuotaName = jsonValue.GetString("AccountQuotaName");

    m_accountQuotaNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Used"))
  {
    m_used = jsonValue.GetInt64("Used");

    m_usedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetInt64("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountQuota::Jsonize() const
{
  JsonValue payload;

  if(m_accountQuotaNameHasBeenSet)
  {
   payload.WithString("AccountQuotaName", m_accountQuotaName);

  }

  if(m_usedHasBeenSet)
  {
   payload.WithInt64("Used", m_used);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithInt64("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws