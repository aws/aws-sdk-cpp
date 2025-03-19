/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/DirectoryVpcSettingsDescription.h>
#include <aws/ds/model/RadiusSettings.h>
#include <aws/ds/model/RadiusStatus.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Describes the directory owner account details that have been shared to the
   * directory consumer account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/OwnerDirectoryDescription">AWS
   * API Reference</a></p>
   */
  class OwnerDirectoryDescription
  {
  public:
    AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription() = default;
    AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    OwnerDirectoryDescription& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    OwnerDirectoryDescription& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const { return m_dnsIpAddrs; }
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }
    template<typename DnsIpAddrsT = Aws::Vector<Aws::String>>
    void SetDnsIpAddrs(DnsIpAddrsT&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::forward<DnsIpAddrsT>(value); }
    template<typename DnsIpAddrsT = Aws::Vector<Aws::String>>
    OwnerDirectoryDescription& WithDnsIpAddrs(DnsIpAddrsT&& value) { SetDnsIpAddrs(std::forward<DnsIpAddrsT>(value)); return *this;}
    template<typename DnsIpAddrsT = Aws::String>
    OwnerDirectoryDescription& AddDnsIpAddrs(DnsIpAddrsT&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.emplace_back(std::forward<DnsIpAddrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline const DirectoryVpcSettingsDescription& GetVpcSettings() const { return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    template<typename VpcSettingsT = DirectoryVpcSettingsDescription>
    void SetVpcSettings(VpcSettingsT&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::forward<VpcSettingsT>(value); }
    template<typename VpcSettingsT = DirectoryVpcSettingsDescription>
    OwnerDirectoryDescription& WithVpcSettings(VpcSettingsT&& value) { SetVpcSettings(std::forward<VpcSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const { return m_radiusSettings; }
    inline bool RadiusSettingsHasBeenSet() const { return m_radiusSettingsHasBeenSet; }
    template<typename RadiusSettingsT = RadiusSettings>
    void SetRadiusSettings(RadiusSettingsT&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = std::forward<RadiusSettingsT>(value); }
    template<typename RadiusSettingsT = RadiusSettings>
    OwnerDirectoryDescription& WithRadiusSettings(RadiusSettingsT&& value) { SetRadiusSettings(std::forward<RadiusSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline RadiusStatus GetRadiusStatus() const { return m_radiusStatus; }
    inline bool RadiusStatusHasBeenSet() const { return m_radiusStatusHasBeenSet; }
    inline void SetRadiusStatus(RadiusStatus value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }
    inline OwnerDirectoryDescription& WithRadiusStatus(RadiusStatus value) { SetRadiusStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet = false;

    DirectoryVpcSettingsDescription m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet = false;

    RadiusStatus m_radiusStatus{RadiusStatus::NOT_SET};
    bool m_radiusStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
