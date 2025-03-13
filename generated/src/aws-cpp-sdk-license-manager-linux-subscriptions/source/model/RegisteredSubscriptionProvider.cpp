/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/RegisteredSubscriptionProvider.h>
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

RegisteredSubscriptionProvider::RegisteredSubscriptionProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

RegisteredSubscriptionProvider& RegisteredSubscriptionProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LastSuccessfulDataRetrievalTime"))
  {
    m_lastSuccessfulDataRetrievalTime = jsonValue.GetString("LastSuccessfulDataRetrievalTime");
    m_lastSuccessfulDataRetrievalTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderArn"))
  {
    m_subscriptionProviderArn = jsonValue.GetString("SubscriptionProviderArn");
    m_subscriptionProviderArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderSource"))
  {
    m_subscriptionProviderSource = SubscriptionProviderSourceMapper::GetSubscriptionProviderSourceForName(jsonValue.GetString("SubscriptionProviderSource"));
    m_subscriptionProviderSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderStatus"))
  {
    m_subscriptionProviderStatus = SubscriptionProviderStatusMapper::GetSubscriptionProviderStatusForName(jsonValue.GetString("SubscriptionProviderStatus"));
    m_subscriptionProviderStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubscriptionProviderStatusMessage"))
  {
    m_subscriptionProviderStatusMessage = jsonValue.GetString("SubscriptionProviderStatusMessage");
    m_subscriptionProviderStatusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue RegisteredSubscriptionProvider::Jsonize() const
{
  JsonValue payload;

  if(m_lastSuccessfulDataRetrievalTimeHasBeenSet)
  {
   payload.WithString("LastSuccessfulDataRetrievalTime", m_lastSuccessfulDataRetrievalTime);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_subscriptionProviderArnHasBeenSet)
  {
   payload.WithString("SubscriptionProviderArn", m_subscriptionProviderArn);

  }

  if(m_subscriptionProviderSourceHasBeenSet)
  {
   payload.WithString("SubscriptionProviderSource", SubscriptionProviderSourceMapper::GetNameForSubscriptionProviderSource(m_subscriptionProviderSource));
  }

  if(m_subscriptionProviderStatusHasBeenSet)
  {
   payload.WithString("SubscriptionProviderStatus", SubscriptionProviderStatusMapper::GetNameForSubscriptionProviderStatus(m_subscriptionProviderStatus));
  }

  if(m_subscriptionProviderStatusMessageHasBeenSet)
  {
   payload.WithString("SubscriptionProviderStatusMessage", m_subscriptionProviderStatusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
