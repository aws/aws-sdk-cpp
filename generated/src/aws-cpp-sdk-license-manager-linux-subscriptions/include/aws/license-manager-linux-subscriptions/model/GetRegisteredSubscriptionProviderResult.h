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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderResult();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API GetRegisteredSubscriptionProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp from the last time License Manager retrieved subscription
     * details from your registered third-party Linux subscription provider.</p>
     */
    inline const Aws::String& GetLastSuccessfulDataRetrievalTime() const{ return m_lastSuccessfulDataRetrievalTime; }
    inline void SetLastSuccessfulDataRetrievalTime(const Aws::String& value) { m_lastSuccessfulDataRetrievalTime = value; }
    inline void SetLastSuccessfulDataRetrievalTime(Aws::String&& value) { m_lastSuccessfulDataRetrievalTime = std::move(value); }
    inline void SetLastSuccessfulDataRetrievalTime(const char* value) { m_lastSuccessfulDataRetrievalTime.assign(value); }
    inline GetRegisteredSubscriptionProviderResult& WithLastSuccessfulDataRetrievalTime(const Aws::String& value) { SetLastSuccessfulDataRetrievalTime(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithLastSuccessfulDataRetrievalTime(Aws::String&& value) { SetLastSuccessfulDataRetrievalTime(std::move(value)); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithLastSuccessfulDataRetrievalTime(const char* value) { SetLastSuccessfulDataRetrievalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the third-party access secret stored in
     * Secrets Manager for the BYOL registration resource specified in the request.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArn.assign(value); }
    inline GetRegisteredSubscriptionProviderResult& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the BYOL registration resource specified
     * in the request.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const{ return m_subscriptionProviderArn; }
    inline void SetSubscriptionProviderArn(const Aws::String& value) { m_subscriptionProviderArn = value; }
    inline void SetSubscriptionProviderArn(Aws::String&& value) { m_subscriptionProviderArn = std::move(value); }
    inline void SetSubscriptionProviderArn(const char* value) { m_subscriptionProviderArn.assign(value); }
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderArn(const Aws::String& value) { SetSubscriptionProviderArn(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderArn(Aws::String&& value) { SetSubscriptionProviderArn(std::move(value)); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderArn(const char* value) { SetSubscriptionProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription provider for the BYOL registration resource specified in the
     * request.</p>
     */
    inline const SubscriptionProviderSource& GetSubscriptionProviderSource() const{ return m_subscriptionProviderSource; }
    inline void SetSubscriptionProviderSource(const SubscriptionProviderSource& value) { m_subscriptionProviderSource = value; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource&& value) { m_subscriptionProviderSource = std::move(value); }
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderSource(const SubscriptionProviderSource& value) { SetSubscriptionProviderSource(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderSource(SubscriptionProviderSource&& value) { SetSubscriptionProviderSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Linux subscription provider access token from the last
     * successful subscription data request.</p>
     */
    inline const SubscriptionProviderStatus& GetSubscriptionProviderStatus() const{ return m_subscriptionProviderStatus; }
    inline void SetSubscriptionProviderStatus(const SubscriptionProviderStatus& value) { m_subscriptionProviderStatus = value; }
    inline void SetSubscriptionProviderStatus(SubscriptionProviderStatus&& value) { m_subscriptionProviderStatus = std::move(value); }
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatus(const SubscriptionProviderStatus& value) { SetSubscriptionProviderStatus(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatus(SubscriptionProviderStatus&& value) { SetSubscriptionProviderStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed message from your subscription provider token status.</p>
     */
    inline const Aws::String& GetSubscriptionProviderStatusMessage() const{ return m_subscriptionProviderStatusMessage; }
    inline void SetSubscriptionProviderStatusMessage(const Aws::String& value) { m_subscriptionProviderStatusMessage = value; }
    inline void SetSubscriptionProviderStatusMessage(Aws::String&& value) { m_subscriptionProviderStatusMessage = std::move(value); }
    inline void SetSubscriptionProviderStatusMessage(const char* value) { m_subscriptionProviderStatusMessage.assign(value); }
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatusMessage(const Aws::String& value) { SetSubscriptionProviderStatusMessage(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatusMessage(Aws::String&& value) { SetSubscriptionProviderStatusMessage(std::move(value)); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithSubscriptionProviderStatusMessage(const char* value) { SetSubscriptionProviderStatusMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRegisteredSubscriptionProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRegisteredSubscriptionProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_lastSuccessfulDataRetrievalTime;

    Aws::String m_secretArn;

    Aws::String m_subscriptionProviderArn;

    SubscriptionProviderSource m_subscriptionProviderSource;

    SubscriptionProviderStatus m_subscriptionProviderStatus;

    Aws::String m_subscriptionProviderStatusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
