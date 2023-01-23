/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ActiveDirectoryIdentityProvider.h>
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
   * <p>Details about an identity provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/IdentityProvider">AWS
   * API Reference</a></p>
   */
  class IdentityProvider
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProvider();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that details an Active Directory identity provider.</p>
     */
    inline const ActiveDirectoryIdentityProvider& GetActiveDirectoryIdentityProvider() const{ return m_activeDirectoryIdentityProvider; }

    /**
     * <p>An object that details an Active Directory identity provider.</p>
     */
    inline bool ActiveDirectoryIdentityProviderHasBeenSet() const { return m_activeDirectoryIdentityProviderHasBeenSet; }

    /**
     * <p>An object that details an Active Directory identity provider.</p>
     */
    inline void SetActiveDirectoryIdentityProvider(const ActiveDirectoryIdentityProvider& value) { m_activeDirectoryIdentityProviderHasBeenSet = true; m_activeDirectoryIdentityProvider = value; }

    /**
     * <p>An object that details an Active Directory identity provider.</p>
     */
    inline void SetActiveDirectoryIdentityProvider(ActiveDirectoryIdentityProvider&& value) { m_activeDirectoryIdentityProviderHasBeenSet = true; m_activeDirectoryIdentityProvider = std::move(value); }

    /**
     * <p>An object that details an Active Directory identity provider.</p>
     */
    inline IdentityProvider& WithActiveDirectoryIdentityProvider(const ActiveDirectoryIdentityProvider& value) { SetActiveDirectoryIdentityProvider(value); return *this;}

    /**
     * <p>An object that details an Active Directory identity provider.</p>
     */
    inline IdentityProvider& WithActiveDirectoryIdentityProvider(ActiveDirectoryIdentityProvider&& value) { SetActiveDirectoryIdentityProvider(std::move(value)); return *this;}

  private:

    ActiveDirectoryIdentityProvider m_activeDirectoryIdentityProvider;
    bool m_activeDirectoryIdentityProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
