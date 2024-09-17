/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   */
  class RegisterSubscriptionProviderRequest : public LicenseManagerLinuxSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterSubscriptionProvider"; }

    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret where you've stored your
     * subscription provider's access token. For RHEL subscriptions managed through the
     * Red Hat Subscription Manager (RHSM), the secret contains your Red Hat Offline
     * token.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline RegisterSubscriptionProviderRequest& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline RegisterSubscriptionProviderRequest& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline RegisterSubscriptionProviderRequest& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported Linux subscription provider to register.</p>
     */
    inline const SubscriptionProviderSource& GetSubscriptionProviderSource() const{ return m_subscriptionProviderSource; }
    inline bool SubscriptionProviderSourceHasBeenSet() const { return m_subscriptionProviderSourceHasBeenSet; }
    inline void SetSubscriptionProviderSource(const SubscriptionProviderSource& value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = value; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource&& value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = std::move(value); }
    inline RegisterSubscriptionProviderRequest& WithSubscriptionProviderSource(const SubscriptionProviderSource& value) { SetSubscriptionProviderSource(value); return *this;}
    inline RegisterSubscriptionProviderRequest& WithSubscriptionProviderSource(SubscriptionProviderSource&& value) { SetSubscriptionProviderSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata tags to assign to your registered Linux subscription provider
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RegisterSubscriptionProviderRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RegisterSubscriptionProviderRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RegisterSubscriptionProviderRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RegisterSubscriptionProviderRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RegisterSubscriptionProviderRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RegisterSubscriptionProviderRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RegisterSubscriptionProviderRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RegisterSubscriptionProviderRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RegisterSubscriptionProviderRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    SubscriptionProviderSource m_subscriptionProviderSource;
    bool m_subscriptionProviderSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
