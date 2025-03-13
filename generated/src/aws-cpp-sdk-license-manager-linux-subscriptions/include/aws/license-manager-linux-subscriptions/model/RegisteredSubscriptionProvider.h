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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>A third-party provider for operating system (OS) platform software and
   * license subscriptions, such as Red Hat. When you register a third-party Linux
   * subscription provider, License Manager can get subscription data from the
   * registered provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/RegisteredSubscriptionProvider">AWS
   * API Reference</a></p>
   */
  class RegisteredSubscriptionProvider
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisteredSubscriptionProvider() = default;
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisteredSubscriptionProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisteredSubscriptionProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp from the last time that License Manager accessed third-party
     * subscription data for your account from your registered Linux subscription
     * provider.</p>
     */
    inline const Aws::String& GetLastSuccessfulDataRetrievalTime() const { return m_lastSuccessfulDataRetrievalTime; }
    inline bool LastSuccessfulDataRetrievalTimeHasBeenSet() const { return m_lastSuccessfulDataRetrievalTimeHasBeenSet; }
    template<typename LastSuccessfulDataRetrievalTimeT = Aws::String>
    void SetLastSuccessfulDataRetrievalTime(LastSuccessfulDataRetrievalTimeT&& value) { m_lastSuccessfulDataRetrievalTimeHasBeenSet = true; m_lastSuccessfulDataRetrievalTime = std::forward<LastSuccessfulDataRetrievalTimeT>(value); }
    template<typename LastSuccessfulDataRetrievalTimeT = Aws::String>
    RegisteredSubscriptionProvider& WithLastSuccessfulDataRetrievalTime(LastSuccessfulDataRetrievalTimeT&& value) { SetLastSuccessfulDataRetrievalTime(std::forward<LastSuccessfulDataRetrievalTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret that stores your
     * registered Linux subscription provider access token. For RHEL account
     * subscriptions, this is the offline token.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    RegisteredSubscriptionProvider& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Linux subscription provider resource
     * that you registered.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const { return m_subscriptionProviderArn; }
    inline bool SubscriptionProviderArnHasBeenSet() const { return m_subscriptionProviderArnHasBeenSet; }
    template<typename SubscriptionProviderArnT = Aws::String>
    void SetSubscriptionProviderArn(SubscriptionProviderArnT&& value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn = std::forward<SubscriptionProviderArnT>(value); }
    template<typename SubscriptionProviderArnT = Aws::String>
    RegisteredSubscriptionProvider& WithSubscriptionProviderArn(SubscriptionProviderArnT&& value) { SetSubscriptionProviderArn(std::forward<SubscriptionProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A supported third-party Linux subscription provider. License Manager
     * currently supports Red Hat subscriptions.</p>
     */
    inline SubscriptionProviderSource GetSubscriptionProviderSource() const { return m_subscriptionProviderSource; }
    inline bool SubscriptionProviderSourceHasBeenSet() const { return m_subscriptionProviderSourceHasBeenSet; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = value; }
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderSource(SubscriptionProviderSource value) { SetSubscriptionProviderSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of your registered Linux subscription provider access
     * token from the last time License Manager retrieved subscription data. For RHEL
     * account subscriptions, this is the status of the offline token.</p>
     */
    inline SubscriptionProviderStatus GetSubscriptionProviderStatus() const { return m_subscriptionProviderStatus; }
    inline bool SubscriptionProviderStatusHasBeenSet() const { return m_subscriptionProviderStatusHasBeenSet; }
    inline void SetSubscriptionProviderStatus(SubscriptionProviderStatus value) { m_subscriptionProviderStatusHasBeenSet = true; m_subscriptionProviderStatus = value; }
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderStatus(SubscriptionProviderStatus value) { SetSubscriptionProviderStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message that's associated with your BYOL subscription provider
     * token status.</p>
     */
    inline const Aws::String& GetSubscriptionProviderStatusMessage() const { return m_subscriptionProviderStatusMessage; }
    inline bool SubscriptionProviderStatusMessageHasBeenSet() const { return m_subscriptionProviderStatusMessageHasBeenSet; }
    template<typename SubscriptionProviderStatusMessageT = Aws::String>
    void SetSubscriptionProviderStatusMessage(SubscriptionProviderStatusMessageT&& value) { m_subscriptionProviderStatusMessageHasBeenSet = true; m_subscriptionProviderStatusMessage = std::forward<SubscriptionProviderStatusMessageT>(value); }
    template<typename SubscriptionProviderStatusMessageT = Aws::String>
    RegisteredSubscriptionProvider& WithSubscriptionProviderStatusMessage(SubscriptionProviderStatusMessageT&& value) { SetSubscriptionProviderStatusMessage(std::forward<SubscriptionProviderStatusMessageT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
