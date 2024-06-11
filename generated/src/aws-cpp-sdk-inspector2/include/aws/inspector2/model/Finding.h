/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CodeVulnerabilityDetails.h>
#include <aws/inspector2/model/EpssDetails.h>
#include <aws/inspector2/model/ExploitAvailable.h>
#include <aws/inspector2/model/ExploitabilityDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector2/model/FixAvailable.h>
#include <aws/inspector2/model/InspectorScoreDetails.h>
#include <aws/inspector2/model/NetworkReachabilityDetails.h>
#include <aws/inspector2/model/PackageVulnerabilityDetails.h>
#include <aws/inspector2/model/Remediation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/Severity.h>
#include <aws/inspector2/model/FindingStatus.h>
#include <aws/inspector2/model/FindingType.h>
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
    AWS_INSPECTOR2_API Finding();
    AWS_INSPECTOR2_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the finding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline Finding& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline Finding& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline Finding& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the code vulnerability identified in a Lambda function used to
     * filter findings.</p>
     */
    inline const CodeVulnerabilityDetails& GetCodeVulnerabilityDetails() const{ return m_codeVulnerabilityDetails; }
    inline bool CodeVulnerabilityDetailsHasBeenSet() const { return m_codeVulnerabilityDetailsHasBeenSet; }
    inline void SetCodeVulnerabilityDetails(const CodeVulnerabilityDetails& value) { m_codeVulnerabilityDetailsHasBeenSet = true; m_codeVulnerabilityDetails = value; }
    inline void SetCodeVulnerabilityDetails(CodeVulnerabilityDetails&& value) { m_codeVulnerabilityDetailsHasBeenSet = true; m_codeVulnerabilityDetails = std::move(value); }
    inline Finding& WithCodeVulnerabilityDetails(const CodeVulnerabilityDetails& value) { SetCodeVulnerabilityDetails(value); return *this;}
    inline Finding& WithCodeVulnerabilityDetails(CodeVulnerabilityDetails&& value) { SetCodeVulnerabilityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding's EPSS score.</p>
     */
    inline const EpssDetails& GetEpss() const{ return m_epss; }
    inline bool EpssHasBeenSet() const { return m_epssHasBeenSet; }
    inline void SetEpss(const EpssDetails& value) { m_epssHasBeenSet = true; m_epss = value; }
    inline void SetEpss(EpssDetails&& value) { m_epssHasBeenSet = true; m_epss = std::move(value); }
    inline Finding& WithEpss(const EpssDetails& value) { SetEpss(value); return *this;}
    inline Finding& WithEpss(EpssDetails&& value) { SetEpss(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a finding discovered in your environment has an exploit available.</p>
     */
    inline const ExploitAvailable& GetExploitAvailable() const{ return m_exploitAvailable; }
    inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }
    inline void SetExploitAvailable(const ExploitAvailable& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = value; }
    inline void SetExploitAvailable(ExploitAvailable&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = std::move(value); }
    inline Finding& WithExploitAvailable(const ExploitAvailable& value) { SetExploitAvailable(value); return *this;}
    inline Finding& WithExploitAvailable(ExploitAvailable&& value) { SetExploitAvailable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of an exploit available for a finding discovered in your
     * environment.</p>
     */
    inline const ExploitabilityDetails& GetExploitabilityDetails() const{ return m_exploitabilityDetails; }
    inline bool ExploitabilityDetailsHasBeenSet() const { return m_exploitabilityDetailsHasBeenSet; }
    inline void SetExploitabilityDetails(const ExploitabilityDetails& value) { m_exploitabilityDetailsHasBeenSet = true; m_exploitabilityDetails = value; }
    inline void SetExploitabilityDetails(ExploitabilityDetails&& value) { m_exploitabilityDetailsHasBeenSet = true; m_exploitabilityDetails = std::move(value); }
    inline Finding& WithExploitabilityDetails(const ExploitabilityDetails& value) { SetExploitabilityDetails(value); return *this;}
    inline Finding& WithExploitabilityDetails(ExploitabilityDetails&& value) { SetExploitabilityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }
    inline Finding& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}
    inline Finding& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}
    inline Finding& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstObservedAt() const{ return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    inline void SetFirstObservedAt(const Aws::Utils::DateTime& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }
    inline void SetFirstObservedAt(Aws::Utils::DateTime&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }
    inline Finding& WithFirstObservedAt(const Aws::Utils::DateTime& value) { SetFirstObservedAt(value); return *this;}
    inline Finding& WithFirstObservedAt(Aws::Utils::DateTime&& value) { SetFirstObservedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline const FixAvailable& GetFixAvailable() const{ return m_fixAvailable; }
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
    inline void SetFixAvailable(const FixAvailable& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = value; }
    inline void SetFixAvailable(FixAvailable&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::move(value); }
    inline Finding& WithFixAvailable(const FixAvailable& value) { SetFixAvailable(value); return *this;}
    inline Finding& WithFixAvailable(FixAvailable&& value) { SetFixAvailable(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline double GetInspectorScore() const{ return m_inspectorScore; }
    inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }
    inline void SetInspectorScore(double value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = value; }
    inline Finding& WithInspectorScore(double value) { SetInspectorScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline const InspectorScoreDetails& GetInspectorScoreDetails() const{ return m_inspectorScoreDetails; }
    inline bool InspectorScoreDetailsHasBeenSet() const { return m_inspectorScoreDetailsHasBeenSet; }
    inline void SetInspectorScoreDetails(const InspectorScoreDetails& value) { m_inspectorScoreDetailsHasBeenSet = true; m_inspectorScoreDetails = value; }
    inline void SetInspectorScoreDetails(InspectorScoreDetails&& value) { m_inspectorScoreDetailsHasBeenSet = true; m_inspectorScoreDetails = std::move(value); }
    inline Finding& WithInspectorScoreDetails(const InspectorScoreDetails& value) { SetInspectorScoreDetails(value); return *this;}
    inline Finding& WithInspectorScoreDetails(InspectorScoreDetails&& value) { SetInspectorScoreDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the finding was last observed. This timestamp for this
     * field remains unchanged until a finding is updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastObservedAt() const{ return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    inline void SetLastObservedAt(const Aws::Utils::DateTime& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }
    inline void SetLastObservedAt(Aws::Utils::DateTime&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }
    inline Finding& WithLastObservedAt(const Aws::Utils::DateTime& value) { SetLastObservedAt(value); return *this;}
    inline Finding& WithLastObservedAt(Aws::Utils::DateTime&& value) { SetLastObservedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details of a network reachability finding.</p>
     */
    inline const NetworkReachabilityDetails& GetNetworkReachabilityDetails() const{ return m_networkReachabilityDetails; }
    inline bool NetworkReachabilityDetailsHasBeenSet() const { return m_networkReachabilityDetailsHasBeenSet; }
    inline void SetNetworkReachabilityDetails(const NetworkReachabilityDetails& value) { m_networkReachabilityDetailsHasBeenSet = true; m_networkReachabilityDetails = value; }
    inline void SetNetworkReachabilityDetails(NetworkReachabilityDetails&& value) { m_networkReachabilityDetailsHasBeenSet = true; m_networkReachabilityDetails = std::move(value); }
    inline Finding& WithNetworkReachabilityDetails(const NetworkReachabilityDetails& value) { SetNetworkReachabilityDetails(value); return *this;}
    inline Finding& WithNetworkReachabilityDetails(NetworkReachabilityDetails&& value) { SetNetworkReachabilityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline const PackageVulnerabilityDetails& GetPackageVulnerabilityDetails() const{ return m_packageVulnerabilityDetails; }
    inline bool PackageVulnerabilityDetailsHasBeenSet() const { return m_packageVulnerabilityDetailsHasBeenSet; }
    inline void SetPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = value; }
    inline void SetPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = std::move(value); }
    inline Finding& WithPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { SetPackageVulnerabilityDetails(value); return *this;}
    inline Finding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { SetPackageVulnerabilityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline const Remediation& GetRemediation() const{ return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    inline void SetRemediation(const Remediation& value) { m_remediationHasBeenSet = true; m_remediation = value; }
    inline void SetRemediation(Remediation&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }
    inline Finding& WithRemediation(const Remediation& value) { SetRemediation(value); return *this;}
    inline Finding& WithRemediation(Remediation&& value) { SetRemediation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on the resources involved in a finding. The
     * <code>resource</code> value determines the valid values for <code>type</code> in
     * your request. For more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/user/findings-types.html">Finding
     * types</a> in the Amazon Inspector user guide.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline Finding& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}
    inline Finding& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}
    inline Finding& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline Finding& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The severity of the finding. <code>UNTRIAGED</code> applies to
     * <code>PACKAGE_VULNERABILITY</code> type findings that the vendor has not
     * assigned a severity yet. For more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/user/findings-understanding-severity.html">Severity
     * levels for findings</a> in the Amazon Inspector user guide.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline Finding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}
    inline Finding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const FindingStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(FindingStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Finding& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}
    inline Finding& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding. The <code>type</code> value determines the valid
     * values for <code>resource</code> in your request. For more information, see <a
     * href="https://docs.aws.amazon.com/inspector/latest/user/findings-types.html">Finding
     * types</a> in the Amazon Inspector user guide.</p>
     */
    inline const FindingType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FindingType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FindingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Finding& WithType(const FindingType& value) { SetType(value); return *this;}
    inline Finding& WithType(FindingType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    CodeVulnerabilityDetails m_codeVulnerabilityDetails;
    bool m_codeVulnerabilityDetailsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EpssDetails m_epss;
    bool m_epssHasBeenSet = false;

    ExploitAvailable m_exploitAvailable;
    bool m_exploitAvailableHasBeenSet = false;

    ExploitabilityDetails m_exploitabilityDetails;
    bool m_exploitabilityDetailsHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::Utils::DateTime m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    FixAvailable m_fixAvailable;
    bool m_fixAvailableHasBeenSet = false;

    double m_inspectorScore;
    bool m_inspectorScoreHasBeenSet = false;

    InspectorScoreDetails m_inspectorScoreDetails;
    bool m_inspectorScoreDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    NetworkReachabilityDetails m_networkReachabilityDetails;
    bool m_networkReachabilityDetailsHasBeenSet = false;

    PackageVulnerabilityDetails m_packageVulnerabilityDetails;
    bool m_packageVulnerabilityDetailsHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    FindingStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    FindingType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
