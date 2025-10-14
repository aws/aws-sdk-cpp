/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AdminAppLicenseUsageRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

AdminAppLicenseUsageRecord::AdminAppLicenseUsageRecord(JsonView jsonValue)
{
  *this = jsonValue;
}

AdminAppLicenseUsageRecord& AdminAppLicenseUsageRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserArn"))
  {
    m_userArn = jsonValue.GetString("UserArn");
    m_userArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BillingPeriod"))
  {
    m_billingPeriod = jsonValue.GetString("BillingPeriod");
    m_billingPeriodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OwnerAWSAccountId"))
  {
    m_ownerAWSAccountId = jsonValue.GetString("OwnerAWSAccountId");
    m_ownerAWSAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionFirstUsedDate"))
  {
    m_subscriptionFirstUsedDate = jsonValue.GetDouble("SubscriptionFirstUsedDate");
    m_subscriptionFirstUsedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionLastUsedDate"))
  {
    m_subscriptionLastUsedDate = jsonValue.GetDouble("SubscriptionLastUsedDate");
    m_subscriptionLastUsedDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicenseType"))
  {
    m_licenseType = jsonValue.GetString("LicenseType");
    m_licenseTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserId"))
  {
    m_userId = jsonValue.GetString("UserId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AdminAppLicenseUsageRecord::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("UserArn", m_userArn);

  }

  if(m_billingPeriodHasBeenSet)
  {
   payload.WithString("BillingPeriod", m_billingPeriod);

  }

  if(m_ownerAWSAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAWSAccountId", m_ownerAWSAccountId);

  }

  if(m_subscriptionFirstUsedDateHasBeenSet)
  {
   payload.WithDouble("SubscriptionFirstUsedDate", m_subscriptionFirstUsedDate.SecondsWithMSPrecision());
  }

  if(m_subscriptionLastUsedDateHasBeenSet)
  {
   payload.WithDouble("SubscriptionLastUsedDate", m_subscriptionLastUsedDate.SecondsWithMSPrecision());
  }

  if(m_licenseTypeHasBeenSet)
  {
   payload.WithString("LicenseType", m_licenseType);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("UserId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
