/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderSource.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   */
  class ListRegisteredSubscriptionProvidersRequest : public LicenseManagerLinuxSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListRegisteredSubscriptionProvidersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRegisteredSubscriptionProviders"; }

    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRegisteredSubscriptionProvidersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRegisteredSubscriptionProvidersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To filter your results, specify which subscription providers to return in the
     * list.</p>
     */
    inline const Aws::Vector<SubscriptionProviderSource>& GetSubscriptionProviderSources() const { return m_subscriptionProviderSources; }
    inline bool SubscriptionProviderSourcesHasBeenSet() const { return m_subscriptionProviderSourcesHasBeenSet; }
    template<typename SubscriptionProviderSourcesT = Aws::Vector<SubscriptionProviderSource>>
    void SetSubscriptionProviderSources(SubscriptionProviderSourcesT&& value) { m_subscriptionProviderSourcesHasBeenSet = true; m_subscriptionProviderSources = std::forward<SubscriptionProviderSourcesT>(value); }
    template<typename SubscriptionProviderSourcesT = Aws::Vector<SubscriptionProviderSource>>
    ListRegisteredSubscriptionProvidersRequest& WithSubscriptionProviderSources(SubscriptionProviderSourcesT&& value) { SetSubscriptionProviderSources(std::forward<SubscriptionProviderSourcesT>(value)); return *this;}
    inline ListRegisteredSubscriptionProvidersRequest& AddSubscriptionProviderSources(SubscriptionProviderSource value) { m_subscriptionProviderSourcesHasBeenSet = true; m_subscriptionProviderSources.push_back(value); return *this; }
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SubscriptionProviderSource> m_subscriptionProviderSources;
    bool m_subscriptionProviderSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
