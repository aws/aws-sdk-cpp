/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   */
  class GetRegisteredSubscriptionProviderRequest : public LicenseManagerLinuxSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRegisteredSubscriptionProvider"; }

    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the BYOL registration resource to get
     * details for.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const { return m_subscriptionProviderArn; }
    inline bool SubscriptionProviderArnHasBeenSet() const { return m_subscriptionProviderArnHasBeenSet; }
    template<typename SubscriptionProviderArnT = Aws::String>
    void SetSubscriptionProviderArn(SubscriptionProviderArnT&& value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn = std::forward<SubscriptionProviderArnT>(value); }
    template<typename SubscriptionProviderArnT = Aws::String>
    GetRegisteredSubscriptionProviderRequest& WithSubscriptionProviderArn(SubscriptionProviderArnT&& value) { SetSubscriptionProviderArn(std::forward<SubscriptionProviderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionProviderArn;
    bool m_subscriptionProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
