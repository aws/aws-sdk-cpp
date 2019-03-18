/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API OwnerDirectoryDescription
  {
  public:
    OwnerDirectoryDescription();
    OwnerDirectoryDescription(Aws::Utils::Json::JsonView jsonValue);
    OwnerDirectoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline OwnerDirectoryDescription& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline OwnerDirectoryDescription& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the AWS Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline OwnerDirectoryDescription& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline OwnerDirectoryDescription& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline OwnerDirectoryDescription& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the directory owner account.</p>
     */
    inline OwnerDirectoryDescription& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::move(value); }

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline OwnerDirectoryDescription& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline OwnerDirectoryDescription& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(std::move(value)); return *this;}

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline OwnerDirectoryDescription& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline OwnerDirectoryDescription& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(std::move(value)); return *this; }

    /**
     * <p>IP address of the directory’s domain controllers.</p>
     */
    inline OwnerDirectoryDescription& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }


    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline const DirectoryVpcSettingsDescription& GetVpcSettings() const{ return m_vpcSettings; }

    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }

    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline void SetVpcSettings(const DirectoryVpcSettingsDescription& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline void SetVpcSettings(DirectoryVpcSettingsDescription&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::move(value); }

    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline OwnerDirectoryDescription& WithVpcSettings(const DirectoryVpcSettingsDescription& value) { SetVpcSettings(value); return *this;}

    /**
     * <p>Information about the VPC settings for the directory.</p>
     */
    inline OwnerDirectoryDescription& WithVpcSettings(DirectoryVpcSettingsDescription&& value) { SetVpcSettings(std::move(value)); return *this;}


    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const{ return m_radiusSettings; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline bool RadiusSettingsHasBeenSet() const { return m_radiusSettingsHasBeenSet; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline void SetRadiusSettings(const RadiusSettings& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline void SetRadiusSettings(RadiusSettings&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = std::move(value); }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline OwnerDirectoryDescription& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server.</p>
     */
    inline OwnerDirectoryDescription& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(std::move(value)); return *this;}


    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline const RadiusStatus& GetRadiusStatus() const{ return m_radiusStatus; }

    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline bool RadiusStatusHasBeenSet() const { return m_radiusStatusHasBeenSet; }

    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline void SetRadiusStatus(const RadiusStatus& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }

    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline void SetRadiusStatus(RadiusStatus&& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = std::move(value); }

    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline OwnerDirectoryDescription& WithRadiusStatus(const RadiusStatus& value) { SetRadiusStatus(value); return *this;}

    /**
     * <p>Information about the status of the RADIUS server.</p>
     */
    inline OwnerDirectoryDescription& WithRadiusStatus(RadiusStatus&& value) { SetRadiusStatus(std::move(value)); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet;

    DirectoryVpcSettingsDescription m_vpcSettings;
    bool m_vpcSettingsHasBeenSet;

    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet;

    RadiusStatus m_radiusStatus;
    bool m_radiusStatusHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
