/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderSource.h>
#include <aws/license-manager-linux-subscriptions/model/SubscriptionProviderStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{
  class RegisterSubscriptionProviderResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderResult() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Linux subscription provider resource
     * that you registered.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const { return m_subscriptionProviderArn; }
    template<typename SubscriptionProviderArnT = Aws::String>
    void SetSubscriptionProviderArn(SubscriptionProviderArnT&& value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn = std::forward<SubscriptionProviderArnT>(value); }
    template<typename SubscriptionProviderArnT = Aws::String>
    RegisterSubscriptionProviderResult& WithSubscriptionProviderArn(SubscriptionProviderArnT&& value) { SetSubscriptionProviderArn(std::forward<SubscriptionProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux subscription provider that you registered.</p>
     */
    inline SubscriptionProviderSource GetSubscriptionProviderSource() const { return m_subscriptionProviderSource; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = value; }
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderSource(SubscriptionProviderSource value) { SetSubscriptionProviderSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the registration action for the Linux subscription
     * provider that you requested.</p>
     */
    inline SubscriptionProviderStatus GetSubscriptionProviderStatus() const { return m_subscriptionProviderStatus; }
    inline void SetSubscriptionProviderStatus(SubscriptionProviderStatus value) { m_subscriptionProviderStatusHasBeenSet = true; m_subscriptionProviderStatus = value; }
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderStatus(SubscriptionProviderStatus value) { SetSubscriptionProviderStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterSubscriptionProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionProviderArn;
    bool m_subscriptionProviderArnHasBeenSet = false;

    SubscriptionProviderSource m_subscriptionProviderSource{SubscriptionProviderSource::NOT_SET};
    bool m_subscriptionProviderSourceHasBeenSet = false;

    SubscriptionProviderStatus m_subscriptionProviderStatus{SubscriptionProviderStatus::NOT_SET};
    bool m_subscriptionProviderStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
