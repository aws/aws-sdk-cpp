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
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisteredSubscriptionProvider();
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisteredSubscriptionProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API RegisteredSubscriptionProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp from the last time that License Manager accessed third-party
     * subscription data for your account from your registered Linux subscription
     * provider.</p>
     */
    inline const Aws::String& GetLastSuccessfulDataRetrievalTime() const{ return m_lastSuccessfulDataRetrievalTime; }
    inline bool LastSuccessfulDataRetrievalTimeHasBeenSet() const { return m_lastSuccessfulDataRetrievalTimeHasBeenSet; }
    inline void SetLastSuccessfulDataRetrievalTime(const Aws::String& value) { m_lastSuccessfulDataRetrievalTimeHasBeenSet = true; m_lastSuccessfulDataRetrievalTime = value; }
    inline void SetLastSuccessfulDataRetrievalTime(Aws::String&& value) { m_lastSuccessfulDataRetrievalTimeHasBeenSet = true; m_lastSuccessfulDataRetrievalTime = std::move(value); }
    inline void SetLastSuccessfulDataRetrievalTime(const char* value) { m_lastSuccessfulDataRetrievalTimeHasBeenSet = true; m_lastSuccessfulDataRetrievalTime.assign(value); }
    inline RegisteredSubscriptionProvider& WithLastSuccessfulDataRetrievalTime(const Aws::String& value) { SetLastSuccessfulDataRetrievalTime(value); return *this;}
    inline RegisteredSubscriptionProvider& WithLastSuccessfulDataRetrievalTime(Aws::String&& value) { SetLastSuccessfulDataRetrievalTime(std::move(value)); return *this;}
    inline RegisteredSubscriptionProvider& WithLastSuccessfulDataRetrievalTime(const char* value) { SetLastSuccessfulDataRetrievalTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Secrets Manager secret that stores your
     * registered Linux subscription provider access token. For RHEL account
     * subscriptions, this is the offline token.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline RegisteredSubscriptionProvider& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline RegisteredSubscriptionProvider& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline RegisteredSubscriptionProvider& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Linux subscription provider resource
     * that you registered.</p>
     */
    inline const Aws::String& GetSubscriptionProviderArn() const{ return m_subscriptionProviderArn; }
    inline bool SubscriptionProviderArnHasBeenSet() const { return m_subscriptionProviderArnHasBeenSet; }
    inline void SetSubscriptionProviderArn(const Aws::String& value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn = value; }
    inline void SetSubscriptionProviderArn(Aws::String&& value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn = std::move(value); }
    inline void SetSubscriptionProviderArn(const char* value) { m_subscriptionProviderArnHasBeenSet = true; m_subscriptionProviderArn.assign(value); }
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderArn(const Aws::String& value) { SetSubscriptionProviderArn(value); return *this;}
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderArn(Aws::String&& value) { SetSubscriptionProviderArn(std::move(value)); return *this;}
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderArn(const char* value) { SetSubscriptionProviderArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A supported third-party Linux subscription provider. License Manager
     * currently supports Red Hat subscriptions.</p>
     */
    inline const SubscriptionProviderSource& GetSubscriptionProviderSource() const{ return m_subscriptionProviderSource; }
    inline bool SubscriptionProviderSourceHasBeenSet() const { return m_subscriptionProviderSourceHasBeenSet; }
    inline void SetSubscriptionProviderSource(const SubscriptionProviderSource& value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = value; }
    inline void SetSubscriptionProviderSource(SubscriptionProviderSource&& value) { m_subscriptionProviderSourceHasBeenSet = true; m_subscriptionProviderSource = std::move(value); }
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderSource(const SubscriptionProviderSource& value) { SetSubscriptionProviderSource(value); return *this;}
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderSource(SubscriptionProviderSource&& value) { SetSubscriptionProviderSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of your registered Linux subscription provider access
     * token from the last time License Manager retrieved subscription data. For RHEL
     * account subscriptions, this is the status of the offline token.</p>
     */
    inline const SubscriptionProviderStatus& GetSubscriptionProviderStatus() const{ return m_subscriptionProviderStatus; }
    inline bool SubscriptionProviderStatusHasBeenSet() const { return m_subscriptionProviderStatusHasBeenSet; }
    inline void SetSubscriptionProviderStatus(const SubscriptionProviderStatus& value) { m_subscriptionProviderStatusHasBeenSet = true; m_subscriptionProviderStatus = value; }
    inline void SetSubscriptionProviderStatus(SubscriptionProviderStatus&& value) { m_subscriptionProviderStatusHasBeenSet = true; m_subscriptionProviderStatus = std::move(value); }
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderStatus(const SubscriptionProviderStatus& value) { SetSubscriptionProviderStatus(value); return *this;}
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderStatus(SubscriptionProviderStatus&& value) { SetSubscriptionProviderStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed message that's associated with your BYOL subscription provider
     * token status.</p>
     */
    inline const Aws::String& GetSubscriptionProviderStatusMessage() const{ return m_subscriptionProviderStatusMessage; }
    inline bool SubscriptionProviderStatusMessageHasBeenSet() const { return m_subscriptionProviderStatusMessageHasBeenSet; }
    inline void SetSubscriptionProviderStatusMessage(const Aws::String& value) { m_subscriptionProviderStatusMessageHasBeenSet = true; m_subscriptionProviderStatusMessage = value; }
    inline void SetSubscriptionProviderStatusMessage(Aws::String&& value) { m_subscriptionProviderStatusMessageHasBeenSet = true; m_subscriptionProviderStatusMessage = std::move(value); }
    inline void SetSubscriptionProviderStatusMessage(const char* value) { m_subscriptionProviderStatusMessageHasBeenSet = true; m_subscriptionProviderStatusMessage.assign(value); }
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderStatusMessage(const Aws::String& value) { SetSubscriptionProviderStatusMessage(value); return *this;}
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderStatusMessage(Aws::String&& value) { SetSubscriptionProviderStatusMessage(std::move(value)); return *this;}
    inline RegisteredSubscriptionProvider& WithSubscriptionProviderStatusMessage(const char* value) { SetSubscriptionProviderStatusMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_lastSuccessfulDataRetrievalTime;
    bool m_lastSuccessfulDataRetrievalTimeHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_subscriptionProviderArn;
    bool m_subscriptionProviderArnHasBeenSet = false;

    SubscriptionProviderSource m_subscriptionProviderSource;
    bool m_subscriptionProviderSourceHasBeenSet = false;

    SubscriptionProviderStatus m_subscriptionProviderStatus;
    bool m_subscriptionProviderStatusHasBeenSet = false;

    Aws::String m_subscriptionProviderStatusMessage;
    bool m_subscriptionProviderStatusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
