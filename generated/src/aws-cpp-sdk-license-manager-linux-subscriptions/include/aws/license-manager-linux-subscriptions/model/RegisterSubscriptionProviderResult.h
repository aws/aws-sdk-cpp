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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderResult();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisterSubscriptionProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Linux subscription provider resource
     * that you registered.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const{ return m_subscriptionProviderArn; }
    inline void SetSubscriptionProviderArn(const Aws::String& value) { m_subscriptionProviderArn = value; }
    inline void SetSubscriptionProviderArn(Aws::String&& value) { m_subscriptionProviderArn = std::move(value); }
    inline void SetSubscriptionProviderArn(const char* value) { m_subscriptionProviderArn.assign(value); }
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderArn(const Aws::String& value) { SetSubscriptionProviderArn(value); return *this;}
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderArn(Aws::String&& value) { SetSubscriptionProviderArn(std::move(value)); return *this;}
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderArn(const char* value) { SetSubscriptionProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux subscription provider that you registered.</p>
     */
    inline const SubscriptionProviderSource& GetSubscriptionProviderSource() const{ return m_subscriptionProviderSource; }
    inline void SetSubscriptionProviderSource(const SubscriptionProviderSource& value) { m_subscriptionProviderSource = value; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource&& value) { m_subscriptionProviderSource = std::move(value); }
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderSource(const SubscriptionProviderSource& value) { SetSubscriptionProviderSource(value); return *this;}
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderSource(SubscriptionProviderSource&& value) { SetSubscriptionProviderSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the registration action for the Linux subscription
     * provider that you requested.</p>
     */
    inline const SubscriptionProviderStatus& GetSubscriptionProviderStatus() const{ return m_subscriptionProviderStatus; }
    inline void SetSubscriptionProviderStatus(const SubscriptionProviderStatus& value) { m_subscriptionProviderStatus = value; }
    inline void SetSubscriptionProviderStatus(SubscriptionProviderStatus&& value) { m_subscriptionProviderStatus = std::move(value); }
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderStatus(const SubscriptionProviderStatus& value) { SetSubscriptionProviderStatus(value); return *this;}
    inline RegisterSubscriptionProviderResult& WithSubscriptionProviderStatus(SubscriptionProviderStatus&& value) { SetSubscriptionProviderStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterSubscriptionProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterSubscriptionProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterSubscriptionProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionProviderArn;

    SubscriptionProviderSource m_subscriptionProviderSource;

    SubscriptionProviderStatus m_subscriptionProviderStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
