/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/CredentialsProvider.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectorySettings();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectorySettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ActiveDirectorySettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Points to the <code>CredentialsProvider</code> resource that contains
     * information about the credential provider for user administration.</p>
     */
    inline const CredentialsProvider& GetDomainCredentialsProvider() const{ return m_domainCredentialsProvider; }
    inline bool DomainCredentialsProviderHasBeenSet() const { return m_domainCredentialsProviderHasBeenSet; }
    inline void SetDomainCredentialsProvider(const CredentialsProvider& value) { m_domainCredentialsProviderHasBeenSet = true; m_domainCredentialsProvider = value; }
    inline void SetDomainCredentialsProvider(CredentialsProvider&& value) { m_domainCredentialsProviderHasBeenSet = true; m_domainCredentialsProvider = std::move(value); }
    inline ActiveDirectorySettings& WithDomainCredentialsProvider(const CredentialsProvider& value) { SetDomainCredentialsProvider(value); return *this;}
    inline ActiveDirectorySettings& WithDomainCredentialsProvider(CredentialsProvider&& value) { SetDomainCredentialsProvider(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of domain IPv4 addresses that are used for the Active Directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDomainIpv4List() const{ return m_domainIpv4List; }
    inline bool DomainIpv4ListHasBeenSet() const { return m_domainIpv4ListHasBeenSet; }
    inline void SetDomainIpv4List(const Aws::Vector<Aws::String>& value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List = value; }
    inline void SetDomainIpv4List(Aws::Vector<Aws::String>&& value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List = std::move(value); }
    inline ActiveDirectorySettings& WithDomainIpv4List(const Aws::Vector<Aws::String>& value) { SetDomainIpv4List(value); return *this;}
    inline ActiveDirectorySettings& WithDomainIpv4List(Aws::Vector<Aws::String>&& value) { SetDomainIpv4List(std::move(value)); return *this;}
    inline ActiveDirectorySettings& AddDomainIpv4List(const Aws::String& value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List.push_back(value); return *this; }
    inline ActiveDirectorySettings& AddDomainIpv4List(Aws::String&& value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List.push_back(std::move(value)); return *this; }
    inline ActiveDirectorySettings& AddDomainIpv4List(const char* value) { m_domainIpv4ListHasBeenSet = true; m_domainIpv4List.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The domain name for the Active Directory.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ActiveDirectorySettings& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ActiveDirectorySettings& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ActiveDirectorySettings& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DomainNetworkSettings</code> resource contains an array of subnets
     * that apply for the Active Directory.</p>
     */
    inline const DomainNetworkSettings& GetDomainNetworkSettings() const{ return m_domainNetworkSettings; }
    inline bool DomainNetworkSettingsHasBeenSet() const { return m_domainNetworkSettingsHasBeenSet; }
    inline void SetDomainNetworkSettings(const DomainNetworkSettings& value) { m_domainNetworkSettingsHasBeenSet = true; m_domainNetworkSettings = value; }
    inline void SetDomainNetworkSettings(DomainNetworkSettings&& value) { m_domainNetworkSettingsHasBeenSet = true; m_domainNetworkSettings = std::move(value); }
    inline ActiveDirectorySettings& WithDomainNetworkSettings(const DomainNetworkSettings& value) { SetDomainNetworkSettings(value); return *this;}
    inline ActiveDirectorySettings& WithDomainNetworkSettings(DomainNetworkSettings&& value) { SetDomainNetworkSettings(std::move(value)); return *this;}
    ///@}
  private:

    CredentialsProvider m_domainCredentialsProvider;
    bool m_domainCredentialsProviderHasBeenSet = false;

    Aws::Vector<Aws::String> m_domainIpv4List;
    bool m_domainIpv4ListHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DomainNetworkSettings m_domainNetworkSettings;
    bool m_domainNetworkSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
