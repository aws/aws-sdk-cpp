/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/Instance.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

Instance::Instance(JsonView jsonValue)
{
  *this = jsonValue;
}

Instance& Instance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountID"))
  {
    m_accountID = jsonValue.GetString("AccountID");
    m_accountIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AmiId"))
  {
    m_amiId = jsonValue.GetString("AmiId");
    m_amiIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DualSubscription"))
  {
    m_dualSubscription = jsonValue.GetString("DualSubscription");
    m_dualSubscriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceID"))
  {
    m_instanceID = jsonValue.GetString("InstanceID");
    m_instanceIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetString("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OsVersion"))
  {
    m_osVersion = jsonValue.GetString("OsVersion");
    m_osVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProductCode"))
  {
    Aws::Utils::Array<JsonView> productCodeJsonList = jsonValue.GetArray("ProductCode");
    for(unsigned productCodeIndex = 0; productCodeIndex < productCodeJsonList.GetLength(); ++productCodeIndex)
    {
      m_productCode.push_back(productCodeJsonList[productCodeIndex].AsString());
    }
    m_productCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RegisteredWithSubscriptionProvider"))
  {
    m_registeredWithSubscriptionProvider = jsonValue.GetString("RegisteredWithSubscriptionProvider");
    m_registeredWithSubscriptionProviderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionName"))
  {
    m_subscriptionName = jsonValue.GetString("SubscriptionName");
    m_subscriptionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderCreateTime"))
  {
    m_subscriptionProviderCreateTime = jsonValue.GetString("SubscriptionProviderCreateTime");
    m_subscriptionProviderCreateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderUpdateTime"))
  {
    m_subscriptionProviderUpdateTime = jsonValue.GetString("SubscriptionProviderUpdateTime");
    m_subscriptionProviderUpdateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UsageOperation"))
  {
    m_usageOperation = jsonValue.GetString("UsageOperation");
    m_usageOperationHasBeenSet = true;
  }
  return *this;
}

JsonValue Instance::Jsonize() const
{
  JsonValue payload;

  if(m_accountIDHasBeenSet)
  {
   payload.WithString("AccountID", m_accountID);

  }

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("AmiId", m_amiId);

  }

  if(m_dualSubscriptionHasBeenSet)
  {
   payload.WithString("DualSubscription", m_dualSubscription);

  }

  if(m_instanceIDHasBeenSet)
  {
   payload.WithString("InstanceID", m_instanceID);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithString("LastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_osVersionHasBeenSet)
  {
   payload.WithString("OsVersion", m_osVersion);

  }

  if(m_productCodeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productCodeJsonList(m_productCode.size());
   for(unsigned productCodeIndex = 0; productCodeIndex < productCodeJsonList.GetLength(); ++productCodeIndex)
   {
     productCodeJsonList[productCodeIndex].AsString(m_productCode[productCodeIndex]);
   }
   payload.WithArray("ProductCode", std::move(productCodeJsonList));

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_registeredWithSubscriptionProviderHasBeenSet)
  {
   payload.WithString("RegisteredWithSubscriptionProvider", m_registeredWithSubscriptionProvider);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_subscriptionNameHasBeenSet)
  {
   payload.WithString("SubscriptionName", m_subscriptionName);

  }

  if(m_subscriptionProviderCreateTimeHasBeenSet)
  {
   payload.WithString("SubscriptionProviderCreateTime", m_subscriptionProviderCreateTime);

  }

  if(m_subscriptionProviderUpdateTimeHasBeenSet)
  {
   payload.WithString("SubscriptionProviderUpdateTime", m_subscriptionProviderUpdateTime);

  }

  if(m_usageOperationHasBeenSet)
  {
   payload.WithString("UsageOperation", m_usageOperation);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
