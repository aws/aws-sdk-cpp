/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/PackageVulnerabilityDetails.h>
#include <aws/ecr/model/Remediation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ScoreDetails.h>
#include <aws/ecr/model/Resource.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The details of an enhanced image scan. This is returned when enhanced
   * scanning is enabled for your private registry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/EnhancedImageScanFinding">AWS
   * API Reference</a></p>
   */
  class EnhancedImageScanFinding
  {
  public:
    AWS_ECR_API EnhancedImageScanFinding() = default;
    AWS_ECR_API EnhancedImageScanFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API EnhancedImageScanFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    EnhancedImageScanFinding& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
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
    EnhancedImageScanFinding& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline const Aws::String& GetFindingArn() const { return m_findingArn; }
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }
    template<typename FindingArnT = Aws::String>
    void SetFindingArn(FindingArnT&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::forward<FindingArnT>(value); }
    template<typename FindingArnT = Aws::String>
    EnhancedImageScanFinding& WithFindingArn(FindingArnT&& value) { SetFindingArn(std::forward<FindingArnT>(value)); return *this;}
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
    EnhancedImageScanFinding& WithFirstObservedAt(FirstObservedAtT&& value) { SetFirstObservedAt(std::forward<FirstObservedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastObservedAt() const { return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    template<typename LastObservedAtT = Aws::Utils::DateTime>
    void SetLastObservedAt(LastObservedAtT&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::forward<LastObservedAtT>(value); }
    template<typename LastObservedAtT = Aws::Utils::DateTime>
    EnhancedImageScanFinding& WithLastObservedAt(LastObservedAtT&& value) { SetLastObservedAt(std::forward<LastObservedAtT>(value)); return *this;}
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
    EnhancedImageScanFinding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetailsT&& value) { SetPackageVulnerabilityDetails(std::forward<PackageVulnerabilityDetailsT>(value)); return *this;}
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
    EnhancedImageScanFinding& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const { return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    template<typename ResourcesT = Aws::Vector<Resource>>
    void SetResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources = std::forward<ResourcesT>(value); }
    template<typename ResourcesT = Aws::Vector<Resource>>
    EnhancedImageScanFinding& WithResources(ResourcesT&& value) { SetResources(std::forward<ResourcesT>(value)); return *this;}
    template<typename ResourcesT = Resource>
    EnhancedImageScanFinding& AddResources(ResourcesT&& value) { m_resourcesHasBeenSet = true; m_resources.emplace_back(std::forward<ResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline double GetScore() const { return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline EnhancedImageScanFinding& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline const ScoreDetails& GetScoreDetails() const { return m_scoreDetails; }
    inline bool ScoreDetailsHasBeenSet() const { return m_scoreDetailsHasBeenSet; }
    template<typename ScoreDetailsT = ScoreDetails>
    void SetScoreDetails(ScoreDetailsT&& value) { m_scoreDetailsHasBeenSet = true; m_scoreDetails = std::forward<ScoreDetailsT>(value); }
    template<typename ScoreDetailsT = ScoreDetails>
    EnhancedImageScanFinding& WithScoreDetails(ScoreDetailsT&& value) { SetScoreDetails(std::forward<ScoreDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the finding.</p>
     */
    inline const Aws::String& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Aws::String>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Aws::String>
    EnhancedImageScanFinding& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    EnhancedImageScanFinding& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
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
    EnhancedImageScanFinding& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    EnhancedImageScanFinding& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
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
    EnhancedImageScanFinding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline const Aws::String& GetFixAvailable() const { return m_fixAvailable; }
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
    template<typename FixAvailableT = Aws::String>
    void SetFixAvailable(FixAvailableT&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::forward<FixAvailableT>(value); }
    template<typename FixAvailableT = Aws::String>
    EnhancedImageScanFinding& WithFixAvailable(FixAvailableT&& value) { SetFixAvailable(std::forward<FixAvailableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a finding discovered in your environment has an exploit available.</p>
     */
    inline const Aws::String& GetExploitAvailable() const { return m_exploitAvailable; }
    inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }
    template<typename ExploitAvailableT = Aws::String>
    void SetExploitAvailable(ExploitAvailableT&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = std::forward<ExploitAvailableT>(value); }
    template<typename ExploitAvailableT = Aws::String>
    EnhancedImageScanFinding& WithExploitAvailable(ExploitAvailableT&& value) { SetExploitAvailable(std::forward<ExploitAvailableT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::Utils::DateTime m_firstObservedAt{};
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastObservedAt{};
    bool m_lastObservedAtHasBeenSet = false;

    PackageVulnerabilityDetails m_packageVulnerabilityDetails;
    bool m_packageVulnerabilityDetailsHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    double m_score{0.0};
    bool m_scoreHasBeenSet = false;

    ScoreDetails m_scoreDetails;
    bool m_scoreDetailsHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_fixAvailable;
    bool m_fixAvailableHasBeenSet = false;

    Aws::String m_exploitAvailable;
    bool m_exploitAvailableHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
