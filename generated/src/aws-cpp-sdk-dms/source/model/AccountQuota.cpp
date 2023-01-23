/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AccountQuota::AccountQuota(JsonView jsonValue) : 
    m_accountQuotaNameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

AccountQuota& AccountQuota::operator =(JsonView jsonValue)
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
