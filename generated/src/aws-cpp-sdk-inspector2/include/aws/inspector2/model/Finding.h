/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/FindingType.h>
#include <aws/inspector2/model/Remediation.h>
#include <aws/inspector2/model/Severity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/FindingStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/InspectorScoreDetails.h>
#include <aws/inspector2/model/NetworkReachabilityDetails.h>
#include <aws/inspector2/model/PackageVulnerabilityDetails.h>
#include <aws/inspector2/model/FixAvailable.h>
#include <aws/inspector2/model/ExploitAvailable.h>
#include <aws/inspector2/model/ExploitabilityDetails.h>
#include <aws/inspector2/model/CodeVulnerabilityDetails.h>
#include <aws/inspector2/model/EpssDetails.h>
#include <aws/inspector2/model/Resource.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about an Amazon Inspector finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_INSPECTOR2_API Finding() = default;
    AWS_INSPECTOR2_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline const Aws::String& GetFindingArn() const { return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    template<typename FindingArnT = Aws::String>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::String>
    Finding& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the finding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    Finding& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding. The <code>type</code> value determines the valid
     * values for <code>resource</code> in your request. For more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/user/findings-types.html">Finding
     * types</a> in the Amazon Inspector user guide.</p>
     */
    inline FindingType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FindingType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Finding& WithType(FindingType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Finding& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Finding& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline const Remediation& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Remediation>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Remediation>
    Finding& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the finding. <code>UNTRIAGED</code> applies to
     * <code>PACKAGE_VULNERABILITY</code> type findings that the vendor has not
     * assigned a severity yet. For more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/user/findings-understanding-severity.html">Severity
     * levels for findings</a> in the Amazon Inspector user guide.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Finding& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstObservedAt() const { return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    template<typename FirstObservedAtT = Aws::Utils::DateTime>
    void SetFirstObservedAt(FirstObservedAtT&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::forward<FirstObservedAtT>(value); }
    template<typename FirstObservedAtT = Aws::Utils::DateTime>
    Finding& WithFirstObservedAt(FirstObservedAtT&& value) { SetFirstObservedAt(std::forward<FirstObservedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the finding was last observed. This timestamp for this
     * field remains unchanged until a finding is updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastObservedAt() const { return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    template<typename LastObservedAtT = Aws::Utils::DateTime>
    void SetLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::forward<LastObservedAtT>(value); }
    template<typename LastObservedAtT = Aws::Utils::DateTime>
    Finding& WithLastObservedAt(LastObservedAtT&& value) { SetLastObservedAt(std::forward<LastObservedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Finding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline FindingStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(FindingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Finding& WithStatus(FindingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on the resources involved in a finding. The
     * <code>resource</code> value determines the valid values for <code>type</code> in
     * your request. For more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/user/findings-types.html">Finding
     * types</a> in the Amazon Inspector user guide.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    Finding& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    Finding& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline double GetInspectorScore() const { return m_inspectorScore; }
    inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }
    inline void SetInspectorScore(double value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = value; }
    inline Finding& WithInspectorScore(double value) { SetInspectorScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline const InspectorScoreDetails& GetInspectorScoreDetails() const { return m_inspectorScoreDetails; }
    inline bool InspectorScoreDetailsHasBeenSet() const { return m_inspectorScoreDetailsHasBeenSet; }
    template<typename InspectorScoreDetailsT = InspectorScoreDetails>
    void SetInspectorScoreDetails(InspectorScoreDetailsT&& value) { m_inspectorScoreDetailsHasBeenSet = true; m_inspectorScoreDetails = std::forward<InspectorScoreDetailsT>(value); }
    template<typename InspectorScoreDetailsT = InspectorScoreDetails>
    Finding& WithInspectorScoreDetails(InspectorScoreDetailsT&& value) { SetInspectorScoreDetails(std::forward<InspectorScoreDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details of a network reachability finding.</p>
     */
    inline const NetworkReachabilityDetails& GetNetworkReachabilityDetails() const { return m_networkReachabilityDetails; }
    inline bool NetworkReachabilityDetailsHasBeenSet() const { return m_networkReachabilityDetailsHasBeenSet; }
    template<typename NetworkReachabilityDetailsT = NetworkReachabilityDetails>
    void SetNetworkReachabilityDetails(NetworkReachabilityDetailsT&& value) { m_networkReachabilityDetailsHasBeenSet = true; m_networkReachabilityDetails = std::forward<NetworkReachabilityDetailsT>(value); }
    template<typename NetworkReachabilityDetailsT = NetworkReachabilityDetails>
    Finding& WithNetworkReachabilityDetails(NetworkReachabilityDetailsT&& value) { SetNetworkReachabilityDetails(std::forward<NetworkReachabilityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline const PackageVulnerabilityDetails& GetPackageVulnerabilityDetails() const { return m_packageVulnerabilityDetails; }
    inline bool PackageVulnerabilityDetailsHasBeenSet() const { return m_packageVulnerabilityDetailsHasBeenSet; }
    template<typename PackageVulnerabilityDetailsT = PackageVulnerabilityDetails>
    void SetPackageVulnerabilityDetails(PackageVulnerabilityDetailsT&& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = std::forward<PackageVulnerabilityDetailsT>(value); }
    template<typename PackageVulnerabilityDetailsT = PackageVulnerabilityDetails>
    Finding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetailsT&& value) { SetPackageVulnerabilityDetails(std::forward<PackageVulnerabilityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline FixAvailable GetFixAvailable() const { return m_fixAvailable; }
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
    inline void SetFixAvailable(FixAvailable value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = value; }
    inline Finding& WithFixAvailable(FixAvailable value) { SetFixAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a finding discovered in your environment has an exploit available.</p>
     */
    inline ExploitAvailable GetExploitAvailable() const { return m_exploitAvailable; }
    inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }
    inline void SetExploitAvailable(ExploitAvailable value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = value; }
    inline Finding& WithExploitAvailable(ExploitAvailable value) { SetExploitAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of an exploit available for a finding discovered in your
     * environment.</p>
     */
    inline const ExploitabilityDetails& GetExploitabilityDetails() const { return m_exploitabilityDetails; }
    inline bool ExploitabilityDetailsHasBeenSet() const { return m_exploitabilityDetailsHasBeenSet; }
    template<typename ExploitabilityDetailsT = ExploitabilityDetails>
    void SetExploitabilityDetails(ExploitabilityDetailsT&& value) { m_exploitabilityDetailsHasBeenSet = true; m_exploitabilityDetails = std::forward<ExploitabilityDetailsT>(value); }
    template<typename ExploitabilityDetailsT = ExploitabilityDetails>
    Finding& WithExploitabilityDetails(ExploitabilityDetailsT&& value) { SetExploitabilityDetails(std::forward<ExploitabilityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the code vulnerability identified in a Lambda function used to
     * filter findings.</p>
     */
    inline const CodeVulnerabilityDetails& GetCodeVulnerabilityDetails() const { return m_codeVulnerabilityDetails; }
    inline bool CodeVulnerabilityDetailsHasBeenSet() const { return m_codeVulnerabilityDetailsHasBeenSet; }
    template<typename CodeVulnerabilityDetailsT = CodeVulnerabilityDetails>
    void SetCodeVulnerabilityDetails(CodeVulnerabilityDetailsT&& value) { m_codeVulnerabilityDetailsHasBeenSet = true; m_codeVulnerabilityDetails = std::forward<CodeVulnerabilityDetailsT>(value); }
    template<typename CodeVulnerabilityDetailsT = CodeVulnerabilityDetails>
    Finding& WithCodeVulnerabilityDetails(CodeVulnerabilityDetailsT&& value) { SetCodeVulnerabilityDetails(std::forward<CodeVulnerabilityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding's EPSS score.</p>
     */
    inline const EpssDetails& GetEpss() const { return m_epss; }
    inline bool EpssHasBeenSet() const { return m_epssHasBeenSet; }
    template<typename EpssT = EpssDetails>
    void SetEpss(EpssT&& value) { m_epssHasBeenSet = true; m_epss = std::forward<EpssT>(value); }
    template<typename EpssT = EpssDetails>
    Finding& WithEpss(EpssT&& value) { SetEpss(std::forward<EpssT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    FindingType m_type{FindingType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_firstObservedAt{};
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastObservedAt{};
    bool m_lastObservedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    FindingStatus m_status{FindingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    double m_inspectorScore{0.0};
    bool m_inspectorScoreHasBeenSet = false;

    InspectorScoreDetails m_inspectorScoreDetails;
    bool m_inspectorScoreDetailsHasBeenSet = false;

    NetworkReachabilityDetails m_networkReachabilityDetails;
    bool m_networkReachabilityDetailsHasBeenSet = false;

    PackageVulnerabilityDetails m_packageVulnerabilityDetails;
    bool m_packageVulnerabilityDetailsHasBeenSet = false;

    FixAvailable m_fixAvailable{FixAvailable::NOT_SET};
    bool m_fixAvailableHasBeenSet = false;

    ExploitAvailable m_exploitAvailable{ExploitAvailable::NOT_SET};
    bool m_exploitAvailableHasBeenSet = false;

    ExploitabilityDetails m_exploitabilityDetails;
    bool m_exploitabilityDetailsHasBeenSet = false;

    CodeVulnerabilityDetails m_codeVulnerabilityDetails;
    bool m_codeVulnerabilityDetailsHasBeenSet = false;

    EpssDetails m_epss;
    bool m_epssHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
