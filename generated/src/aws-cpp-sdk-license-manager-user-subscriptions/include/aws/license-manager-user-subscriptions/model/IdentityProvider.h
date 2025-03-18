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
   * <p>Refers to an identity provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/IdentityProvider">AWS
   * API Reference</a></p>
   */
  class IdentityProvider
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProvider() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API IdentityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ActiveDirectoryIdentityProvider</code> resource contains settings
     * and other details about a specific Active Directory identity provider.</p>
     */
    inline const ActiveDirectoryIdentityProvider& GetActiveDirectoryIdentityProvider() const { return m_activeDirectoryIdentityProvider; }
    inline bool ActiveDirectoryIdentityProviderHasBeenSet() const { return m_activeDirectoryIdentityProviderHasBeenSet; }
    template<typename ActiveDirectoryIdentityProviderT = ActiveDirectoryIdentityProvider>
    void SetActiveDirectoryIdentityProvider(ActiveDirectoryIdentityProviderT&& value) { m_activeDirectoryIdentityProviderHasBeenSet = true; m_activeDirectoryIdentityProvider = std::forward<ActiveDirectoryIdentityProviderT>(value); }
    template<typename ActiveDirectoryIdentityProviderT = ActiveDirectoryIdentityProvider>
    IdentityProvider& WithActiveDirectoryIdentityProvider(ActiveDirectoryIdentityProviderT&& value) { SetActiveDirectoryIdentityProvider(std::forward<ActiveDirectoryIdentityProviderT>(value)); return *this;}
    ///@}
  private:

    ActiveDirectoryIdentityProvider m_activeDirectoryIdentityProvider;
    bool m_activeDirectoryIdentityProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
