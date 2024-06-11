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
    AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription();
    AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifier of the Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline OwnerDirectoryDescription& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline OwnerDirectoryDescription& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline OwnerDirectoryDescription& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline OwnerDirectoryDescription& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline OwnerDirectoryDescription& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline OwnerDirectoryDescription& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::move(value); }
    inline OwnerDirectoryDescription& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}
    inline OwnerDirectoryDescription& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(std::move(value)); return *this;}
    inline OwnerDirectoryDescription& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }
    inline OwnerDirectoryDescription& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(std::move(value)); return *this; }
    inline OwnerDirectoryDescription& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline const DirectoryVpcSettingsDescription& GetVpcSettings() const{ return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    inline void SetVpcSettings(const DirectoryVpcSettingsDescription& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }
    inline void SetVpcSettings(DirectoryVpcSettingsDescription&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::move(value); }
    inline OwnerDirectoryDescription& WithVpcSettings(const DirectoryVpcSettingsDescription& value) { SetVpcSettings(value); return *this;}
    inline OwnerDirectoryDescription& WithVpcSettings(DirectoryVpcSettingsDescription&& value) { SetVpcSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const{ return m_radiusSettings; }
    inline bool RadiusSettingsHasBeenSet() const { return m_radiusSettingsHasBeenSet; }
    inline void SetRadiusSettings(const RadiusSettings& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }
    inline void SetRadiusSettings(RadiusSettings&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = std::move(value); }
    inline OwnerDirectoryDescription& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}
    inline OwnerDirectoryDescription& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline const RadiusStatus& GetRadiusStatus() const{ return m_radiusStatus; }
    inline bool RadiusStatusHasBeenSet() const { return m_radiusStatusHasBeenSet; }
    inline void SetRadiusStatus(const RadiusStatus& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }
    inline void SetRadiusStatus(RadiusStatus&& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = std::move(value); }
    inline OwnerDirectoryDescription& WithRadiusStatus(const RadiusStatus& value) { SetRadiusStatus(value); return *this;}
    inline OwnerDirectoryDescription& WithRadiusStatus(RadiusStatus&& value) { SetRadiusStatus(std::move(value)); return *this;}
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

    RadiusStatus m_radiusStatus;
    bool m_radiusStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
