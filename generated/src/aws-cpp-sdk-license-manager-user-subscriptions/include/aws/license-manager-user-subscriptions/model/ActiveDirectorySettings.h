/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-user-subscriptions/model/CredentialsProvider.h>
#include <aws/license-manager-user-subscriptions/model/DomainNetworkSettings.h>
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
   * <p>Contains network access and credential details that are needed for user
   * administration in the Active Directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ActiveDirectorySettings">AWS
   * API Reference</a></p>
   */
  class ActiveDirectorySettings
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectorySettings() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectorySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectorySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name for the Active Directory.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ActiveDirectorySettings& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of domain IPv4 addresses that are used for the Active Directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainIpv4List() const { return m_domainIpv4List; }
    inline bool DomainIpv4ListHasBeenSet() const { return m_domainIpv4ListHasBeenSet; }
    template<typename DomainIpv4ListT = Aws::Vector<Aws::String>>
    void SetDomainIpv4List(DomainIpv4ListT&& value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List = std::forward<DomainIpv4ListT>(value); }
    template<typename DomainIpv4ListT = Aws::Vector<Aws::String>>
    ActiveDirectorySettings& WithDomainIpv4List(DomainIpv4ListT&& value) { SetDomainIpv4List(std::forward<DomainIpv4ListT>(value)); return *this;}
    template<typename DomainIpv4ListT = Aws::String>
    ActiveDirectorySettings& AddDomainIpv4List(DomainIpv4ListT&& value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List.emplace_back(std::forward<DomainIpv4ListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Points to the <code>CredentialsProvider</code> resource that contains
     * information about the credential provider for user administration.</p>
     */
    inline const CredentialsProvider& GetDomainCredentialsProvider() const { return m_domainCredentialsProvider; }
    inline bool DomainCredentialsProviderHasBeenSet() const { return m_domainCredentialsProviderHasBeenSet; }
    template<typename DomainCredentialsProviderT = CredentialsProvider>
    void SetDomainCredentialsProvider(DomainCredentialsProviderT&& value) { m_domainCredentialsProviderHasBeenSet = true; m_domainCredentialsProvider = std::forward<DomainCredentialsProviderT>(value); }
    template<typename DomainCredentialsProviderT = CredentialsProvider>
    ActiveDirectorySettings& WithDomainCredentialsProvider(DomainCredentialsProviderT&& value) { SetDomainCredentialsProvider(std::forward<DomainCredentialsProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DomainNetworkSettings</code> resource contains an array of subnets
     * that apply for the Active Directory.</p>
     */
    inline const DomainNetworkSettings& GetDomainNetworkSettings() const { return m_domainNetworkSettings; }
    inline bool DomainNetworkSettingsHasBeenSet() const { return m_domainNetworkSettingsHasBeenSet; }
    template<typename DomainNetworkSettingsT = DomainNetworkSettings>
    void SetDomainNetworkSettings(DomainNetworkSettingsT&& value) { m_domainNetworkSettingsHasBeenSet = true; m_domainNetworkSettings = std::forward<DomainNetworkSettingsT>(value); }
    template<typename DomainNetworkSettingsT = DomainNetworkSettings>
    ActiveDirectorySettings& WithDomainNetworkSettings(DomainNetworkSettingsT&& value) { SetDomainNetworkSettings(std::forward<DomainNetworkSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainIpv4List;
    bool m_domainIpv4ListHasBeenSet = false;

    CredentialsProvider m_domainCredentialsProvider;
    bool m_domainCredentialsProviderHasBeenSet = false;

    DomainNetworkSettings m_domainNetworkSettings;
    bool m_domainNetworkSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
