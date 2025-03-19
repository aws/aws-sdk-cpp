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
  class GetRegisteredSubscriptionProviderResult
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderResult() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp from the last time License Manager retrieved subscription
     * details from your registered third-party Linux subscription provider.</p>
     */
    inline const Aws::String& GetLastSuccessfulDataRetrievalTime() const { return m_lastSuccessfulDataRetrievalTime; }
    template<typename LastSuccessfulDataRetrievalTimeT = Aws::String>
    void SetLastSuccessfulDataRetrievalTime(LastSuccessfulDataRetrievalTimeT&& value) { m_lastSuccessfulDataRetrievalTimeHasBeenSet = true; m_lastSuccessfulDataRetrievalTime = std::forward<LastSuccessfulDataRetrievalTimeT>(value); }
    template<typename LastSuccessfulDataRetrievalTimeT = Aws::String>
    GetRegisteredSubscriptionProviderResult& WithLastSuccessfulDataRetrievalTime(LastSuccessfulDataRetrievalTimeT&& value) { SetLastSuccessfulDataRetrievalTime(std::forward<LastSuccessfulDataRetrievalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the third-party access secret stored in
     * Secrets Manager for the BYOL registration resource specified in the request.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    GetRegisteredSubscriptionProviderResult& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the BYOL registration resource specified
     * in the request.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const { return m_subscriptionProviderArn; }
    template<typename SubscriptionProviderArnT = Aws::String>
    void SetSubscriptionProviderArn(SubscriptionProviderArnT&& value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn = std::forward<SubscriptionProviderArnT>(value); }
    template<typename SubscriptionProviderArnT = Aws::String>
    GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderArn(SubscriptionProviderArnT&& value) { SetSubscriptionProviderArn(std::forward<SubscriptionProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription provider for the BYOL registration resource specified in the
     * request.</p>
     */
    inline SubscriptionProviderSource GetSubscriptionProviderSource() const { return m_subscriptionProviderSource; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = value; }
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderSource(SubscriptionProviderSource value) { SetSubscriptionProviderSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Linux subscription provider access token from the last
     * successful subscription data request.</p>
     */
    inline SubscriptionProviderStatus GetSubscriptionProviderStatus() const { return m_subscriptionProviderStatus; }
    inline void SetSubscriptionProviderStatus(SubscriptionProviderStatus value) { m_subscriptionProviderStatusHasBeenSet = true; m_subscriptionProviderStatus = value; }
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatus(SubscriptionProviderStatus value) { SetSubscriptionProviderStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed message from your subscription provider token status.</p>
     */
    inline const Aws::String& GetSubscriptionProviderStatusMessage() const { return m_subscriptionProviderStatusMessage; }
    template<typename SubscriptionProviderStatusMessageT = Aws::String>
    void SetSubscriptionProviderStatusMessage(SubscriptionProviderStatusMessageT&& value) { m_subscriptionProviderStatusMessageHasBeenSet = true; m_subscriptionProviderStatusMessage = std::forward<SubscriptionProviderStatusMessageT>(value); }
    template<typename SubscriptionProviderStatusMessageT = Aws::String>
    GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatusMessage(SubscriptionProviderStatusMessageT&& value) { SetSubscriptionProviderStatusMessage(std::forward<SubscriptionProviderStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRegisteredSubscriptionProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lastSuccessfulDataRetrievalTime;
    bool m_lastSuccessfulDataRetrievalTimeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_subscriptionProviderArn;
    bool m_subscriptionProviderArnHasBeenSet = false;

    SubscriptionProviderSource m_subscriptionProviderSource{SubscriptionProviderSource::NOT_SET};
    bool m_subscriptionProviderSourceHasBeenSet = false;

    SubscriptionProviderStatus m_subscriptionProviderStatus{SubscriptionProviderStatus::NOT_SET};
    bool m_subscriptionProviderStatusHasBeenSet = false;

    Aws::String m_subscriptionProviderStatusMessage;
    bool m_subscriptionProviderStatusMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
