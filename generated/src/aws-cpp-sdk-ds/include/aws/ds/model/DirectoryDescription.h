/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectorySize.h>
#include <aws/ds/model/DirectoryEdition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/DirectoryStage.h>
#include <aws/ds/model/ShareStatus.h>
#include <aws/ds/model/ShareMethod.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ds/model/DirectoryType.h>
#include <aws/ds/model/DirectoryVpcSettingsDescription.h>
#include <aws/ds/model/DirectoryConnectSettingsDescription.h>
#include <aws/ds/model/RadiusSettings.h>
#include <aws/ds/model/RadiusStatus.h>
#include <aws/ds/model/OwnerDirectoryDescription.h>
#include <aws/ds/model/RegionsInfo.h>
#include <aws/ds/model/OSVersion.h>
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
   * <p>Contains information about an Directory Service directory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectoryDescription">AWS
   * API Reference</a></p>
   */
  class DirectoryDescription
  {
  public:
    AWS_DIRECTORYSERVICE_API DirectoryDescription();
    AWS_DIRECTORYSERVICE_API DirectoryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline DirectoryDescription& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DirectoryDescription& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DirectoryDescription& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the directory.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DirectoryDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DirectoryDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DirectoryDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name of the directory.</p>
     */
    inline const Aws::String& GetShortName() const{ return m_shortName; }
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
    inline void SetShortName(const Aws::String& value) { m_shortNameHasBeenSet = true; m_shortName = value; }
    inline void SetShortName(Aws::String&& value) { m_shortNameHasBeenSet = true; m_shortName = std::move(value); }
    inline void SetShortName(const char* value) { m_shortNameHasBeenSet = true; m_shortName.assign(value); }
    inline DirectoryDescription& WithShortName(const Aws::String& value) { SetShortName(value); return *this;}
    inline DirectoryDescription& WithShortName(Aws::String&& value) { SetShortName(std::move(value)); return *this;}
    inline DirectoryDescription& WithShortName(const char* value) { SetShortName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory size.</p>
     */
    inline const DirectorySize& GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(const DirectorySize& value) { m_sizeHasBeenSet = true; m_size = value; }
    inline void SetSize(DirectorySize&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }
    inline DirectoryDescription& WithSize(const DirectorySize& value) { SetSize(value); return *this;}
    inline DirectoryDescription& WithSize(DirectorySize&& value) { SetSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edition associated with this directory.</p>
     */
    inline const DirectoryEdition& GetEdition() const{ return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(const DirectoryEdition& value) { m_editionHasBeenSet = true; m_edition = value; }
    inline void SetEdition(DirectoryEdition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }
    inline DirectoryDescription& WithEdition(const DirectoryEdition& value) { SetEdition(value); return *this;}
    inline DirectoryDescription& WithEdition(DirectoryEdition&& value) { SetEdition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline DirectoryDescription& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline DirectoryDescription& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline DirectoryDescription& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline const Aws::String& GetAccessUrl() const{ return m_accessUrl; }
    inline bool AccessUrlHasBeenSet() const { return m_accessUrlHasBeenSet; }
    inline void SetAccessUrl(const Aws::String& value) { m_accessUrlHasBeenSet = true; m_accessUrl = value; }
    inline void SetAccessUrl(Aws::String&& value) { m_accessUrlHasBeenSet = true; m_accessUrl = std::move(value); }
    inline void SetAccessUrl(const char* value) { m_accessUrlHasBeenSet = true; m_accessUrl.assign(value); }
    inline DirectoryDescription& WithAccessUrl(const Aws::String& value) { SetAccessUrl(value); return *this;}
    inline DirectoryDescription& WithAccessUrl(Aws::String&& value) { SetAccessUrl(std::move(value)); return *this;}
    inline DirectoryDescription& WithAccessUrl(const char* value) { SetAccessUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DirectoryDescription& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DirectoryDescription& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DirectoryDescription& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in your self-managed directory to which
     * the AD Connector is connected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const{ return m_dnsIpAddrs; }
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }
    inline void SetDnsIpAddrs(const Aws::Vector<Aws::String>& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = value; }
    inline void SetDnsIpAddrs(Aws::Vector<Aws::String>&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::move(value); }
    inline DirectoryDescription& WithDnsIpAddrs(const Aws::Vector<Aws::String>& value) { SetDnsIpAddrs(value); return *this;}
    inline DirectoryDescription& WithDnsIpAddrs(Aws::Vector<Aws::String>&& value) { SetDnsIpAddrs(std::move(value)); return *this;}
    inline DirectoryDescription& AddDnsIpAddrs(const Aws::String& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }
    inline DirectoryDescription& AddDnsIpAddrs(Aws::String&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(std::move(value)); return *this; }
    inline DirectoryDescription& AddDnsIpAddrs(const char* value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current stage of the directory.</p>
     */
    inline const DirectoryStage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const DirectoryStage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(DirectoryStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline DirectoryDescription& WithStage(const DirectoryStage& value) { SetStage(value); return *this;}
    inline DirectoryDescription& WithStage(DirectoryStage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current directory status of the shared Managed Microsoft AD directory.</p>
     */
    inline const ShareStatus& GetShareStatus() const{ return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(const ShareStatus& value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline void SetShareStatus(ShareStatus&& value) { m_shareStatusHasBeenSet = true; m_shareStatus = std::move(value); }
    inline DirectoryDescription& WithShareStatus(const ShareStatus& value) { SetShareStatus(value); return *this;}
    inline DirectoryDescription& WithShareStatus(ShareStatus&& value) { SetShareStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your Amazon Web Services organization
     * (<code>ORGANIZATIONS</code>) or with any Amazon Web Services account by sending
     * a shared directory request (<code>HANDSHAKE</code>).</p>
     */
    inline const ShareMethod& GetShareMethod() const{ return m_shareMethod; }
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }
    inline void SetShareMethod(const ShareMethod& value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }
    inline void SetShareMethod(ShareMethod&& value) { m_shareMethodHasBeenSet = true; m_shareMethod = std::move(value); }
    inline DirectoryDescription& WithShareMethod(const ShareMethod& value) { SetShareMethod(value); return *this;}
    inline DirectoryDescription& WithShareMethod(ShareMethod&& value) { SetShareMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const{ return m_shareNotes; }
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }
    inline void SetShareNotes(const Aws::String& value) { m_shareNotesHasBeenSet = true; m_shareNotes = value; }
    inline void SetShareNotes(Aws::String&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::move(value); }
    inline void SetShareNotes(const char* value) { m_shareNotesHasBeenSet = true; m_shareNotes.assign(value); }
    inline DirectoryDescription& WithShareNotes(const Aws::String& value) { SetShareNotes(value); return *this;}
    inline DirectoryDescription& WithShareNotes(Aws::String&& value) { SetShareNotes(std::move(value)); return *this;}
    inline DirectoryDescription& WithShareNotes(const char* value) { SetShareNotes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const{ return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    inline void SetLaunchTime(const Aws::Utils::DateTime& value) { m_launchTimeHasBeenSet = true; m_launchTime = value; }
    inline void SetLaunchTime(Aws::Utils::DateTime&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::move(value); }
    inline DirectoryDescription& WithLaunchTime(const Aws::Utils::DateTime& value) { SetLaunchTime(value); return *this;}
    inline DirectoryDescription& WithLaunchTime(Aws::Utils::DateTime&& value) { SetLaunchTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStageLastUpdatedDateTime() const{ return m_stageLastUpdatedDateTime; }
    inline bool StageLastUpdatedDateTimeHasBeenSet() const { return m_stageLastUpdatedDateTimeHasBeenSet; }
    inline void SetStageLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_stageLastUpdatedDateTimeHasBeenSet = true; m_stageLastUpdatedDateTime = value; }
    inline void SetStageLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_stageLastUpdatedDateTimeHasBeenSet = true; m_stageLastUpdatedDateTime = std::move(value); }
    inline DirectoryDescription& WithStageLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetStageLastUpdatedDateTime(value); return *this;}
    inline DirectoryDescription& WithStageLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetStageLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory type.</p>
     */
    inline const DirectoryType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DirectoryType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DirectoryType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DirectoryDescription& WithType(const DirectoryType& value) { SetType(value); return *this;}
    inline DirectoryDescription& WithType(DirectoryType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed Microsoft AD directory.</p>
     */
    inline const DirectoryVpcSettingsDescription& GetVpcSettings() const{ return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    inline void SetVpcSettings(const DirectoryVpcSettingsDescription& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = value; }
    inline void SetVpcSettings(DirectoryVpcSettingsDescription&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::move(value); }
    inline DirectoryDescription& WithVpcSettings(const DirectoryVpcSettingsDescription& value) { SetVpcSettings(value); return *this;}
    inline DirectoryDescription& WithVpcSettings(DirectoryVpcSettingsDescription&& value) { SetVpcSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline const DirectoryConnectSettingsDescription& GetConnectSettings() const{ return m_connectSettings; }
    inline bool ConnectSettingsHasBeenSet() const { return m_connectSettingsHasBeenSet; }
    inline void SetConnectSettings(const DirectoryConnectSettingsDescription& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = value; }
    inline void SetConnectSettings(DirectoryConnectSettingsDescription&& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = std::move(value); }
    inline DirectoryDescription& WithConnectSettings(const DirectoryConnectSettingsDescription& value) { SetConnectSettings(value); return *this;}
    inline DirectoryDescription& WithConnectSettings(DirectoryConnectSettingsDescription&& value) { SetConnectSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const{ return m_radiusSettings; }
    inline bool RadiusSettingsHasBeenSet() const { return m_radiusSettingsHasBeenSet; }
    inline void SetRadiusSettings(const RadiusSettings& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = value; }
    inline void SetRadiusSettings(RadiusSettings&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = std::move(value); }
    inline DirectoryDescription& WithRadiusSettings(const RadiusSettings& value) { SetRadiusSettings(value); return *this;}
    inline DirectoryDescription& WithRadiusSettings(RadiusSettings&& value) { SetRadiusSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline const RadiusStatus& GetRadiusStatus() const{ return m_radiusStatus; }
    inline bool RadiusStatusHasBeenSet() const { return m_radiusStatusHasBeenSet; }
    inline void SetRadiusStatus(const RadiusStatus& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }
    inline void SetRadiusStatus(RadiusStatus&& value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = std::move(value); }
    inline DirectoryDescription& WithRadiusStatus(const RadiusStatus& value) { SetRadiusStatus(value); return *this;}
    inline DirectoryDescription& WithRadiusStatus(RadiusStatus&& value) { SetRadiusStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline const Aws::String& GetStageReason() const{ return m_stageReason; }
    inline bool StageReasonHasBeenSet() const { return m_stageReasonHasBeenSet; }
    inline void SetStageReason(const Aws::String& value) { m_stageReasonHasBeenSet = true; m_stageReason = value; }
    inline void SetStageReason(Aws::String&& value) { m_stageReasonHasBeenSet = true; m_stageReason = std::move(value); }
    inline void SetStageReason(const char* value) { m_stageReasonHasBeenSet = true; m_stageReason.assign(value); }
    inline DirectoryDescription& WithStageReason(const Aws::String& value) { SetStageReason(value); return *this;}
    inline DirectoryDescription& WithStageReason(Aws::String&& value) { SetStageReason(std::move(value)); return *this;}
    inline DirectoryDescription& WithStageReason(const char* value) { SetStageReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if single sign-on is enabled for the directory. For more
     * information, see <a>EnableSso</a> and <a>DisableSso</a>.</p>
     */
    inline bool GetSsoEnabled() const{ return m_ssoEnabled; }
    inline bool SsoEnabledHasBeenSet() const { return m_ssoEnabledHasBeenSet; }
    inline void SetSsoEnabled(bool value) { m_ssoEnabledHasBeenSet = true; m_ssoEnabled = value; }
    inline DirectoryDescription& WithSsoEnabled(bool value) { SetSsoEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired number of domain controllers in the directory if the directory is
     * Microsoft AD.</p>
     */
    inline int GetDesiredNumberOfDomainControllers() const{ return m_desiredNumberOfDomainControllers; }
    inline bool DesiredNumberOfDomainControllersHasBeenSet() const { return m_desiredNumberOfDomainControllersHasBeenSet; }
    inline void SetDesiredNumberOfDomainControllers(int value) { m_desiredNumberOfDomainControllersHasBeenSet = true; m_desiredNumberOfDomainControllers = value; }
    inline DirectoryDescription& WithDesiredNumberOfDomainControllers(int value) { SetDesiredNumberOfDomainControllers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline const OwnerDirectoryDescription& GetOwnerDirectoryDescription() const{ return m_ownerDirectoryDescription; }
    inline bool OwnerDirectoryDescriptionHasBeenSet() const { return m_ownerDirectoryDescriptionHasBeenSet; }
    inline void SetOwnerDirectoryDescription(const OwnerDirectoryDescription& value) { m_ownerDirectoryDescriptionHasBeenSet = true; m_ownerDirectoryDescription = value; }
    inline void SetOwnerDirectoryDescription(OwnerDirectoryDescription&& value) { m_ownerDirectoryDescriptionHasBeenSet = true; m_ownerDirectoryDescription = std::move(value); }
    inline DirectoryDescription& WithOwnerDirectoryDescription(const OwnerDirectoryDescription& value) { SetOwnerDirectoryDescription(value); return *this;}
    inline DirectoryDescription& WithOwnerDirectoryDescription(OwnerDirectoryDescription&& value) { SetOwnerDirectoryDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the Regions where the directory has replicated.</p>
     */
    inline const RegionsInfo& GetRegionsInfo() const{ return m_regionsInfo; }
    inline bool RegionsInfoHasBeenSet() const { return m_regionsInfoHasBeenSet; }
    inline void SetRegionsInfo(const RegionsInfo& value) { m_regionsInfoHasBeenSet = true; m_regionsInfo = value; }
    inline void SetRegionsInfo(RegionsInfo&& value) { m_regionsInfoHasBeenSet = true; m_regionsInfo = std::move(value); }
    inline DirectoryDescription& WithRegionsInfo(const RegionsInfo& value) { SetRegionsInfo(value); return *this;}
    inline DirectoryDescription& WithRegionsInfo(RegionsInfo&& value) { SetRegionsInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) version of the directory.</p>
     */
    inline const OSVersion& GetOsVersion() const{ return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    inline void SetOsVersion(const OSVersion& value) { m_osVersionHasBeenSet = true; m_osVersion = value; }
    inline void SetOsVersion(OSVersion&& value) { m_osVersionHasBeenSet = true; m_osVersion = std::move(value); }
    inline DirectoryDescription& WithOsVersion(const OSVersion& value) { SetOsVersion(value); return *this;}
    inline DirectoryDescription& WithOsVersion(OSVersion&& value) { SetOsVersion(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortName;
    bool m_shortNameHasBeenSet = false;

    DirectorySize m_size;
    bool m_sizeHasBeenSet = false;

    DirectoryEdition m_edition;
    bool m_editionHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_accessUrl;
    bool m_accessUrlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet = false;

    DirectoryStage m_stage;
    bool m_stageHasBeenSet = false;

    ShareStatus m_shareStatus;
    bool m_shareStatusHasBeenSet = false;

    ShareMethod m_shareMethod;
    bool m_shareMethodHasBeenSet = false;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime;
    bool m_launchTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stageLastUpdatedDateTime;
    bool m_stageLastUpdatedDateTimeHasBeenSet = false;

    DirectoryType m_type;
    bool m_typeHasBeenSet = false;

    DirectoryVpcSettingsDescription m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    DirectoryConnectSettingsDescription m_connectSettings;
    bool m_connectSettingsHasBeenSet = false;

    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet = false;

    RadiusStatus m_radiusStatus;
    bool m_radiusStatusHasBeenSet = false;

    Aws::String m_stageReason;
    bool m_stageReasonHasBeenSet = false;

    bool m_ssoEnabled;
    bool m_ssoEnabledHasBeenSet = false;

    int m_desiredNumberOfDomainControllers;
    bool m_desiredNumberOfDomainControllersHasBeenSet = false;

    OwnerDirectoryDescription m_ownerDirectoryDescription;
    bool m_ownerDirectoryDescriptionHasBeenSet = false;

    RegionsInfo m_regionsInfo;
    bool m_regionsInfoHasBeenSet = false;

    OSVersion m_osVersion;
    bool m_osVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
