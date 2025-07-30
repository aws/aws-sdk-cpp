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
#include <aws/ds/model/HybridSettingsDescription.h>
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
    AWS_DIRECTORYSERVICE_API DirectoryDescription() = default;
    AWS_DIRECTORYSERVICE_API DirectoryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectoryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The directory identifier.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    DirectoryDescription& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the directory.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DirectoryDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name of the directory.</p>
     */
    inline const Aws::String& GetShortName() const { return m_shortName; }
    inline bool ShortNameHasBeenSet() const { return m_shortNameHasBeenSet; }
    template<typename ShortNameT = Aws::String>
    void SetShortName(ShortNameT&& value) { m_shortNameHasBeenSet = true; m_shortName = std::forward<ShortNameT>(value); }
    template<typename ShortNameT = Aws::String>
    DirectoryDescription& WithShortName(ShortNameT&& value) { SetShortName(std::forward<ShortNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory size.</p>
     */
    inline DirectorySize GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(DirectorySize value) { m_sizeHasBeenSet = true; m_size = value; }
    inline DirectoryDescription& WithSize(DirectorySize value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edition associated with this directory.</p>
     */
    inline DirectoryEdition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(DirectoryEdition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline DirectoryDescription& WithEdition(DirectoryEdition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias for the directory. If no alias has been created for the directory,
     * the alias is the directory identifier, such as <code>d-XXXXXXXXXX</code>.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    DirectoryDescription& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access URL for the directory, such as
     * <code>http://&lt;alias&gt;.awsapps.com</code>. If no alias has been created for
     * the directory, <code>&lt;alias&gt;</code> is the directory identifier, such as
     * <code>d-XXXXXXXXXX</code>.</p>
     */
    inline const Aws::String& GetAccessUrl() const { return m_accessUrl; }
    inline bool AccessUrlHasBeenSet() const { return m_accessUrlHasBeenSet; }
    template<typename AccessUrlT = Aws::String>
    void SetAccessUrl(AccessUrlT&& value) { m_accessUrlHasBeenSet = true; m_accessUrl = std::forward<AccessUrlT>(value); }
    template<typename AccessUrlT = Aws::String>
    DirectoryDescription& WithAccessUrl(AccessUrlT&& value) { SetAccessUrl(std::forward<AccessUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the directory.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DirectoryDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the DNS servers for the directory. For a Simple AD or
     * Microsoft AD directory, these are the IP addresses of the Simple AD or Microsoft
     * AD directory servers. For an AD Connector directory, these are the IP addresses
     * of the DNS servers or domain controllers in your self-managed directory to which
     * the AD Connector is connected.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsIpAddrs() const { return m_dnsIpAddrs; }
    inline bool DnsIpAddrsHasBeenSet() const { return m_dnsIpAddrsHasBeenSet; }
    template<typename DnsIpAddrsT = Aws::Vector<Aws::String>>
    void SetDnsIpAddrs(DnsIpAddrsT&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs = std::forward<DnsIpAddrsT>(value); }
    template<typename DnsIpAddrsT = Aws::Vector<Aws::String>>
    DirectoryDescription& WithDnsIpAddrs(DnsIpAddrsT&& value) { SetDnsIpAddrs(std::forward<DnsIpAddrsT>(value)); return *this;}
    template<typename DnsIpAddrsT = Aws::String>
    DirectoryDescription& AddDnsIpAddrs(DnsIpAddrsT&& value) { m_dnsIpAddrsHasBeenSet = true; m_dnsIpAddrs.emplace_back(std::forward<DnsIpAddrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current stage of the directory.</p>
     */
    inline DirectoryStage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(DirectoryStage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline DirectoryDescription& WithStage(DirectoryStage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current directory status of the shared Managed Microsoft AD directory.</p>
     */
    inline ShareStatus GetShareStatus() const { return m_shareStatus; }
    inline bool ShareStatusHasBeenSet() const { return m_shareStatusHasBeenSet; }
    inline void SetShareStatus(ShareStatus value) { m_shareStatusHasBeenSet = true; m_shareStatus = value; }
    inline DirectoryDescription& WithShareStatus(ShareStatus value) { SetShareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method used when sharing a directory to determine whether the directory
     * should be shared within your Amazon Web Services organization
     * (<code>ORGANIZATIONS</code>) or with any Amazon Web Services account by sending
     * a shared directory request (<code>HANDSHAKE</code>).</p>
     */
    inline ShareMethod GetShareMethod() const { return m_shareMethod; }
    inline bool ShareMethodHasBeenSet() const { return m_shareMethodHasBeenSet; }
    inline void SetShareMethod(ShareMethod value) { m_shareMethodHasBeenSet = true; m_shareMethod = value; }
    inline DirectoryDescription& WithShareMethod(ShareMethod value) { SetShareMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A directory share request that is sent by the directory owner to the
     * directory consumer. The request includes a typed message to help the directory
     * consumer administrator determine whether to approve or reject the share
     * invitation.</p>
     */
    inline const Aws::String& GetShareNotes() const { return m_shareNotes; }
    inline bool ShareNotesHasBeenSet() const { return m_shareNotesHasBeenSet; }
    template<typename ShareNotesT = Aws::String>
    void SetShareNotes(ShareNotesT&& value) { m_shareNotesHasBeenSet = true; m_shareNotes = std::forward<ShareNotesT>(value); }
    template<typename ShareNotesT = Aws::String>
    DirectoryDescription& WithShareNotes(ShareNotesT&& value) { SetShareNotes(std::forward<ShareNotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies when the directory was created.</p>
     */
    inline const Aws::Utils::DateTime& GetLaunchTime() const { return m_launchTime; }
    inline bool LaunchTimeHasBeenSet() const { return m_launchTimeHasBeenSet; }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    void SetLaunchTime(LaunchTimeT&& value) { m_launchTimeHasBeenSet = true; m_launchTime = std::forward<LaunchTimeT>(value); }
    template<typename LaunchTimeT = Aws::Utils::DateTime>
    DirectoryDescription& WithLaunchTime(LaunchTimeT&& value) { SetLaunchTime(std::forward<LaunchTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the stage was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetStageLastUpdatedDateTime() const { return m_stageLastUpdatedDateTime; }
    inline bool StageLastUpdatedDateTimeHasBeenSet() const { return m_stageLastUpdatedDateTimeHasBeenSet; }
    template<typename StageLastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetStageLastUpdatedDateTime(StageLastUpdatedDateTimeT&& value) { m_stageLastUpdatedDateTimeHasBeenSet = true; m_stageLastUpdatedDateTime = std::forward<StageLastUpdatedDateTimeT>(value); }
    template<typename StageLastUpdatedDateTimeT = Aws::Utils::DateTime>
    DirectoryDescription& WithStageLastUpdatedDateTime(StageLastUpdatedDateTimeT&& value) { SetStageLastUpdatedDateTime(std::forward<StageLastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory type.</p>
     */
    inline DirectoryType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DirectoryType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DirectoryDescription& WithType(DirectoryType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>DirectoryVpcSettingsDescription</a> object that contains additional
     * information about a directory. This member is only present if the directory is a
     * Simple AD or Managed Microsoft AD directory.</p>
     */
    inline const DirectoryVpcSettingsDescription& GetVpcSettings() const { return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    template<typename VpcSettingsT = DirectoryVpcSettingsDescription>
    void SetVpcSettings(VpcSettingsT&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::forward<VpcSettingsT>(value); }
    template<typename VpcSettingsT = DirectoryVpcSettingsDescription>
    DirectoryDescription& WithVpcSettings(VpcSettingsT&& value) { SetVpcSettings(std::forward<VpcSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>DirectoryConnectSettingsDescription</a> object that contains additional
     * information about an AD Connector directory. This member is only present if the
     * directory is an AD Connector directory.</p>
     */
    inline const DirectoryConnectSettingsDescription& GetConnectSettings() const { return m_connectSettings; }
    inline bool ConnectSettingsHasBeenSet() const { return m_connectSettingsHasBeenSet; }
    template<typename ConnectSettingsT = DirectoryConnectSettingsDescription>
    void SetConnectSettings(ConnectSettingsT&& value) { m_connectSettingsHasBeenSet = true; m_connectSettings = std::forward<ConnectSettingsT>(value); }
    template<typename ConnectSettingsT = DirectoryConnectSettingsDescription>
    DirectoryDescription& WithConnectSettings(ConnectSettingsT&& value) { SetConnectSettings(std::forward<ConnectSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a>RadiusSettings</a> object that contains information about the RADIUS
     * server configured for this directory.</p>
     */
    inline const RadiusSettings& GetRadiusSettings() const { return m_radiusSettings; }
    inline bool RadiusSettingsHasBeenSet() const { return m_radiusSettingsHasBeenSet; }
    template<typename RadiusSettingsT = RadiusSettings>
    void SetRadiusSettings(RadiusSettingsT&& value) { m_radiusSettingsHasBeenSet = true; m_radiusSettings = std::forward<RadiusSettingsT>(value); }
    template<typename RadiusSettingsT = RadiusSettings>
    DirectoryDescription& WithRadiusSettings(RadiusSettingsT&& value) { SetRadiusSettings(std::forward<RadiusSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the RADIUS MFA server connection.</p>
     */
    inline RadiusStatus GetRadiusStatus() const { return m_radiusStatus; }
    inline bool RadiusStatusHasBeenSet() const { return m_radiusStatusHasBeenSet; }
    inline void SetRadiusStatus(RadiusStatus value) { m_radiusStatusHasBeenSet = true; m_radiusStatus = value; }
    inline DirectoryDescription& WithRadiusStatus(RadiusStatus value) { SetRadiusStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the directory stage.</p>
     */
    inline const Aws::String& GetStageReason() const { return m_stageReason; }
    inline bool StageReasonHasBeenSet() const { return m_stageReasonHasBeenSet; }
    template<typename StageReasonT = Aws::String>
    void SetStageReason(StageReasonT&& value) { m_stageReasonHasBeenSet = true; m_stageReason = std::forward<StageReasonT>(value); }
    template<typename StageReasonT = Aws::String>
    DirectoryDescription& WithStageReason(StageReasonT&& value) { SetStageReason(std::forward<StageReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if single sign-on is enabled for the directory. For more
     * information, see <a>EnableSso</a> and <a>DisableSso</a>.</p>
     */
    inline bool GetSsoEnabled() const { return m_ssoEnabled; }
    inline bool SsoEnabledHasBeenSet() const { return m_ssoEnabledHasBeenSet; }
    inline void SetSsoEnabled(bool value) { m_ssoEnabledHasBeenSet = true; m_ssoEnabled = value; }
    inline DirectoryDescription& WithSsoEnabled(bool value) { SetSsoEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired number of domain controllers in the directory if the directory is
     * Microsoft AD.</p>
     */
    inline int GetDesiredNumberOfDomainControllers() const { return m_desiredNumberOfDomainControllers; }
    inline bool DesiredNumberOfDomainControllersHasBeenSet() const { return m_desiredNumberOfDomainControllersHasBeenSet; }
    inline void SetDesiredNumberOfDomainControllers(int value) { m_desiredNumberOfDomainControllersHasBeenSet = true; m_desiredNumberOfDomainControllers = value; }
    inline DirectoryDescription& WithDesiredNumberOfDomainControllers(int value) { SetDesiredNumberOfDomainControllers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Managed Microsoft AD directory in the directory owner
     * account.</p>
     */
    inline const OwnerDirectoryDescription& GetOwnerDirectoryDescription() const { return m_ownerDirectoryDescription; }
    inline bool OwnerDirectoryDescriptionHasBeenSet() const { return m_ownerDirectoryDescriptionHasBeenSet; }
    template<typename OwnerDirectoryDescriptionT = OwnerDirectoryDescription>
    void SetOwnerDirectoryDescription(OwnerDirectoryDescriptionT&& value) { m_ownerDirectoryDescriptionHasBeenSet = true; m_ownerDirectoryDescription = std::forward<OwnerDirectoryDescriptionT>(value); }
    template<typename OwnerDirectoryDescriptionT = OwnerDirectoryDescription>
    DirectoryDescription& WithOwnerDirectoryDescription(OwnerDirectoryDescriptionT&& value) { SetOwnerDirectoryDescription(std::forward<OwnerDirectoryDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the Regions where the directory has replicated.</p>
     */
    inline const RegionsInfo& GetRegionsInfo() const { return m_regionsInfo; }
    inline bool RegionsInfoHasBeenSet() const { return m_regionsInfoHasBeenSet; }
    template<typename RegionsInfoT = RegionsInfo>
    void SetRegionsInfo(RegionsInfoT&& value) { m_regionsInfoHasBeenSet = true; m_regionsInfo = std::forward<RegionsInfoT>(value); }
    template<typename RegionsInfoT = RegionsInfo>
    DirectoryDescription& WithRegionsInfo(RegionsInfoT&& value) { SetRegionsInfo(std::forward<RegionsInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) version of the directory.</p>
     */
    inline OSVersion GetOsVersion() const { return m_osVersion; }
    inline bool OsVersionHasBeenSet() const { return m_osVersionHasBeenSet; }
    inline void SetOsVersion(OSVersion value) { m_osVersionHasBeenSet = true; m_osVersion = value; }
    inline DirectoryDescription& WithOsVersion(OSVersion value) { SetOsVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the hybrid directory configuration for the
     * directory, including Amazon Web Services System Manager managed node identifiers
     * and DNS IPs.</p>
     */
    inline const HybridSettingsDescription& GetHybridSettings() const { return m_hybridSettings; }
    inline bool HybridSettingsHasBeenSet() const { return m_hybridSettingsHasBeenSet; }
    template<typename HybridSettingsT = HybridSettingsDescription>
    void SetHybridSettings(HybridSettingsT&& value) { m_hybridSettingsHasBeenSet = true; m_hybridSettings = std::forward<HybridSettingsT>(value); }
    template<typename HybridSettingsT = HybridSettingsDescription>
    DirectoryDescription& WithHybridSettings(HybridSettingsT&& value) { SetHybridSettings(std::forward<HybridSettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortName;
    bool m_shortNameHasBeenSet = false;

    DirectorySize m_size{DirectorySize::NOT_SET};
    bool m_sizeHasBeenSet = false;

    DirectoryEdition m_edition{DirectoryEdition::NOT_SET};
    bool m_editionHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_accessUrl;
    bool m_accessUrlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsIpAddrs;
    bool m_dnsIpAddrsHasBeenSet = false;

    DirectoryStage m_stage{DirectoryStage::NOT_SET};
    bool m_stageHasBeenSet = false;

    ShareStatus m_shareStatus{ShareStatus::NOT_SET};
    bool m_shareStatusHasBeenSet = false;

    ShareMethod m_shareMethod{ShareMethod::NOT_SET};
    bool m_shareMethodHasBeenSet = false;

    Aws::String m_shareNotes;
    bool m_shareNotesHasBeenSet = false;

    Aws::Utils::DateTime m_launchTime{};
    bool m_launchTimeHasBeenSet = false;

    Aws::Utils::DateTime m_stageLastUpdatedDateTime{};
    bool m_stageLastUpdatedDateTimeHasBeenSet = false;

    DirectoryType m_type{DirectoryType::NOT_SET};
    bool m_typeHasBeenSet = false;

    DirectoryVpcSettingsDescription m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    DirectoryConnectSettingsDescription m_connectSettings;
    bool m_connectSettingsHasBeenSet = false;

    RadiusSettings m_radiusSettings;
    bool m_radiusSettingsHasBeenSet = false;

    RadiusStatus m_radiusStatus{RadiusStatus::NOT_SET};
    bool m_radiusStatusHasBeenSet = false;

    Aws::String m_stageReason;
    bool m_stageReasonHasBeenSet = false;

    bool m_ssoEnabled{false};
    bool m_ssoEnabledHasBeenSet = false;

    int m_desiredNumberOfDomainControllers{0};
    bool m_desiredNumberOfDomainControllersHasBeenSet = false;

    OwnerDirectoryDescription m_ownerDirectoryDescription;
    bool m_ownerDirectoryDescriptionHasBeenSet = false;

    RegionsInfo m_regionsInfo;
    bool m_regionsInfoHasBeenSet = false;

    OSVersion m_osVersion{OSVersion::NOT_SET};
    bool m_osVersionHasBeenSet = false;

    HybridSettingsDescription m_hybridSettings;
    bool m_hybridSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
