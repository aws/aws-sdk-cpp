﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <aws/license-manager-user-subscriptions/model/Settings.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Describes an identity provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/IdentityProviderSummary">AWS
   * API Reference</a></p>
   */
  class IdentityProviderSummary
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProviderSummary();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The failure message associated with an identity provider.</p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessageHasBeenSet = true; m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessageHasBeenSet = true; m_failureMessage.assign(value); }
    inline IdentityProviderSummary& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline IdentityProviderSummary& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline IdentityProviderSummary& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }
    inline IdentityProviderSummary& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}
    inline IdentityProviderSummary& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }
    inline IdentityProviderSummary& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}
    inline IdentityProviderSummary& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}
    inline IdentityProviderSummary& WithProduct(const char* value) { SetProduct(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that details the registered identity provider’s product related
     * configuration settings such as the subnets to provision VPC endpoints.</p>
     */
    inline const Settings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const Settings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(Settings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline IdentityProviderSummary& WithSettings(const Settings& value) { SetSettings(value); return *this;}
    inline IdentityProviderSummary& WithSettings(Settings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an identity provider.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline IdentityProviderSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline IdentityProviderSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline IdentityProviderSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;

    Settings m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
