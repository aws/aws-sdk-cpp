/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ds/model/DirectorySize.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/DirectoryStage.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ds/model/DirectoryType.h>
#include <aws/ds/model/DirectoryVpcSettingsDescription.h>
#include <aws/ds/model/DirectoryConnectSettingsDescription.h>
#include <aws/ds/model/RadiusSettings.h>
#include <aws/ds/model/RadiusStatus.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about an AWS Directory Service directory.</p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryDescription
  {
  public:
    DirectoryDescription();
    DirectoryDescription(const Aws::Utils::Json::JsonValue& jsonValue);
    DirectoryDescription& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The directory identifier.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The directory identifier.</p>
     */
    inline DirectoryDescription& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory identifier.</p>
     */
    inline DirectoryDescription& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The directory identifier.</p>
     */
    inline DirectoryDescription& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline DirectoryDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline DirectoryDescription& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The fully-qualified name of the directory.</p>
     */
    inline DirectoryDescription& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The short name of the directory.</p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }

    /**
     * <p>The short name of the directory.</p>
     */
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The short name of the directory.</p>
     */
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = value; }

    /**
     * <p>The short name of the directory.</p>
     */
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }

    /**
     * <p>The short name of the directory.</p>
     */
    inline DirectoryDescription& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}

    /**
     * <p>The short name of the directory.</p>
     */
    inline DirectoryDescription& WithShortName(Aws::String&& value) { SetShortName(value); return *this;}

    /**
     * <p>The short name of the directory.</p>
     */
    inline DirectoryDescription& WithShortName(const char* value) { SetShortName(value); return *this;}

    /**
     * <p>The directory size.</p>
     */
    inline const DirectorySize& GetSize() const{ return m_size; }

    /**
     * <p>The directory size.</p>
     */
    inline void SetSize(const DirectorySize& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The directory size.</p>
     */
    inline void SetSize(DirectorySize&& value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The directory size.</p>
     */
    inline DirectoryDescription& WithSize(const DirectorySize& value) { SetSize(value); return *this;}

    /**
     * <p>The directory size.</p>
     */
    inline DirectoryDescription& WithSize(DirectorySize&& value) { SetSize(value); return *this;}

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline DirectoryDescription& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline DirectoryDescription& WithAlias(Aws::String&& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline DirectoryDescription& WithAlias(const char* value) { SetAlias(value); return *this;}

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline const Aws::String& GetAccessUrl() const{ return m_accessUrl; }

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline void SetAccessUrl(const Aws::String& value) { m_accessUrlHasBeenSet = true; m_accessUrl = value; }

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline void SetAccessUrl(Aws::String&& value) { m_accessUrlHasBeenSet = true; m_accessUrl = value; }

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline void SetAccessUrl(const char* value) { m_accessUrlHasBeenSet = true; m_accessUrl.assign(value); }

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline DirectoryDescription& WithAccessUrl(const Aws::String& value) { SetAccessUrl(value); return *this;}

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline DirectoryDescription& WithAccessUrl(Aws::String&& value) { SetAccessUrl(value); return *this;}

    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline DirectoryDescription& WithAccessUrl(const char* value) { SetAccessUrl(value); return *this;}

    /**
     * <p>The textual description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The textual description for the directory.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The textual description for the directory.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The textual description for the directory.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The textual description for the directory.</p>
     */
    inline DirectoryDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The textual description for the directory.</p>
     */
    inline DirectoryDescription& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The textual description for the directory.</p>
     */
    inline DirectoryDescription& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline DirectoryDescription& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline DirectoryDescription& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(value); return *this;}

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline DirectoryDescription& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline DirectoryDescription& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in the on-premises directory to which
     * the AD Connector is connected.</p>
     */
    inline DirectoryDescription& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }

    /**
     * <p>The current stage of the directory.</p>
     */
    inline const DirectoryStage& GetStage() const{ return m_stage; }

    /**
     * <p>The current stage of the directory.</p>
     */
    inline void SetStage(const DirectoryStage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The current stage of the directory.</p>
     */
    inline void SetStage(DirectoryStage&& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The current stage of the directory.</p>
     */
    inline DirectoryDescription& WithStage(const DirectoryStage& value) { SetStage(value); return *this;}

    /**
     * <p>The current stage of the directory.</p>
     */
    inline DirectoryDescription& WithStage(DirectoryStage&& value) { SetStage(value); return *this;}

    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }

    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }

    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline DirectoryDescription& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline DirectoryDescription& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(value); return *this;}

    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStageLastUpdatedDateTime() const{ return m_stageLastUpdatedDateTime; }

    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline void SetStageLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_stageLastUpdatedDateTimeHasBeenSet = true; m_stageLastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline void SetStageLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_stageLastUpdatedDateTimeHasBeenSet = true; m_stageLastUpdatedDateTime = value; }

    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline DirectoryDescription& WithStageLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStageLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline DirectoryDescription& WithStageLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStageLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The directory size.</p>
     */
    inline const DirectoryType& GetType() const{ return m_type; }

    /**
     * <p>The directory size.</p>
     */
    inline void SetType(const DirectoryType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The directory size.</p>
     */
    inline void SetType(DirectoryType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The directory size.</p>
     */
    inline DirectoryDescription& WithType(const DirectoryType& value) { SetType(value); return *this;}

    /**
     * <p>The directory size.</p>
     */
    inline DirectoryDescription& WithType(DirectoryType&& value) { SetType(value); return *this;}

    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed AD directory.</p>
     */
    inline const DirectoryVpcSettingsDescription& GetVpcSettings() const{ return m_vpcSettings; }

    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed AD directory.</p>
     */
    inline void SetVpcSettings(const DirectoryVpcSettingsDescription& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed AD directory.</p>
     */
    inline void SetVpcSettings(DirectoryVpcSettingsDescription&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }

    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed AD directory.</p>
     */
    inline DirectoryDescription& WithVpcSettings(const DirectoryVpcSettingsDescription& value) { SetVpcSettings(value); return *this;}

    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed AD directory.</p>
     */
    inline DirectoryDescription& WithVpcSettings(DirectoryVpcSettingsDescription&& value) { SetVpcSettings(value); return *this;}

    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline const DirectoryConnectSettingsDescription& GetConnectSettings() const{ return m_connectSettings; }

    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline void SetConnectSettings(const DirectoryConnectSettingsDescription& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = value; }

    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline void SetConnectSettings(DirectoryConnectSettingsDescription&& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = value; }

    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline DirectoryDescription& WithConnectSettings(const DirectoryConnectSettingsDescription& value) { SetConnectSettings(value); return *this;}

    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline DirectoryDescription& WithConnectSettings(DirectoryConnectSettingsDescription&& value) { SetConnectSettings(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const{ return m_radiusSettings; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline void SetRadiusSettings(const RadiusSettings& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline void SetRadiusSettings(RadiusSettings&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline DirectoryDescription& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}

    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline DirectoryDescription& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(value); return *this;}

    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline const RadiusStatus& GetRadiusStatus() const{ return m_radiusStatus; }

    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline void SetRadiusStatus(const RadiusStatus& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }

    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline void SetRadiusStatus(RadiusStatus&& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }

    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline DirectoryDescription& WithRadiusStatus(const RadiusStatus& value) { SetRadiusStatus(value); return *this;}

    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline DirectoryDescription& WithRadiusStatus(RadiusStatus&& value) { SetRadiusStatus(value); return *this;}

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline const Aws::String& GetStageReason() const{ return m_stageReason; }

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline void SetStageReason(const Aws::String& value) { m_stageReasonHasBeenSet = true; m_stageReason = value; }

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline void SetStageReason(Aws::String&& value) { m_stageReasonHasBeenSet = true; m_stageReason = value; }

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline void SetStageReason(const char* value) { m_stageReasonHasBeenSet = true; m_stageReason.assign(value); }

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline DirectoryDescription& WithStageReason(const Aws::String& value) { SetStageReason(value); return *this;}

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline DirectoryDescription& WithStageReason(Aws::String&& value) { SetStageReason(value); return *this;}

    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline DirectoryDescription& WithStageReason(const char* value) { SetStageReason(value); return *this;}

    /**
     * <p>Indicates if single-sign on is enabled for the directory. For more
     * information, see <a>EnableSso</a> and <a>DisableSso</a>.</p>
     */
    inline bool GetSsoEnabled() const{ return m_ssoEnabled; }

    /**
     * <p>Indicates if single-sign on is enabled for the directory. For more
     * information, see <a>EnableSso</a> and <a>DisableSso</a>.</p>
     */
    inline void SetSsoEnabled(bool value) { m_ssoEnabledHasBeenSet = true; m_ssoEnabled = value; }

    /**
     * <p>Indicates if single-sign on is enabled for the directory. For more
     * information, see <a>EnableSso</a> and <a>DisableSso</a>.</p>
     */
    inline DirectoryDescription& WithSsoEnabled(bool value) { SetSsoEnabled(value); return *this;}

  private:
    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_shortName;
    bool m_shortNameHasBeenSet;
    DirectorySize m_size;
    bool m_sizeHasBeenSet;
    Aws::String m_alias;
    bool m_aliasHasBeenSet;
    Aws::String m_accessUrl;
    bool m_accessUrlHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet;
    DirectoryStage m_stage;
    bool m_stageHasBeenSet;
    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet;
    Aws::Utils::DateTime m_stageLastUpdatedDateTime;
    bool m_stageLastUpdatedDateTimeHasBeenSet;
    DirectoryType m_type;
    bool m_typeHasBeenSet;
    DirectoryVpcSettingsDescription m_vpcSettings;
    bool m_vpcSettingsHasBeenSet;
    DirectoryConnectSettingsDescription m_connectSettings;
    bool m_connectSettingsHasBeenSet;
    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet;
    RadiusStatus m_radiusStatus;
    bool m_radiusStatusHasBeenSet;
    Aws::String m_stageReason;
    bool m_stageReasonHasBeenSet;
    bool m_ssoEnabled;
    bool m_ssoEnabledHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
