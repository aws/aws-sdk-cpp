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
    AWS_ECR_API EnhancedImageScanFinding();
    AWS_ECR_API EnhancedImageScanFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API EnhancedImageScanFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline EnhancedImageScanFinding& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline EnhancedImageScanFinding& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
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
    inline EnhancedImageScanFinding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline EnhancedImageScanFinding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline EnhancedImageScanFinding& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}
    inline EnhancedImageScanFinding& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstObservedAt() const{ return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    inline void SetFirstObservedAt(const Aws::Utils::DateTime& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }
    inline void SetFirstObservedAt(Aws::Utils::DateTime&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }
    inline EnhancedImageScanFinding& WithFirstObservedAt(const Aws::Utils::DateTime& value) { SetFirstObservedAt(value); return *this;}
    inline EnhancedImageScanFinding& WithFirstObservedAt(Aws::Utils::DateTime&& value) { SetFirstObservedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastObservedAt() const{ return m_lastObservedAt; }
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }
    inline void SetLastObservedAt(const Aws::Utils::DateTime& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }
    inline void SetLastObservedAt(Aws::Utils::DateTime&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }
    inline EnhancedImageScanFinding& WithLastObservedAt(const Aws::Utils::DateTime& value) { SetLastObservedAt(value); return *this;}
    inline EnhancedImageScanFinding& WithLastObservedAt(Aws::Utils::DateTime&& value) { SetLastObservedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline const PackageVulnerabilityDetails& GetPackageVulnerabilityDetails() const{ return m_packageVulnerabilityDetails; }
    inline bool PackageVulnerabilityDetailsHasBeenSet() const { return m_packageVulnerabilityDetailsHasBeenSet; }
    inline void SetPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = value; }
    inline void SetPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = std::move(value); }
    inline EnhancedImageScanFinding& WithPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { SetPackageVulnerabilityDetails(value); return *this;}
    inline EnhancedImageScanFinding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { SetPackageVulnerabilityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline const Remediation& GetRemediation() const{ return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    inline void SetRemediation(const Remediation& value) { m_remediationHasBeenSet = true; m_remediation = value; }
    inline void SetRemediation(Remediation&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }
    inline EnhancedImageScanFinding& WithRemediation(const Remediation& value) { SetRemediation(value); return *this;}
    inline EnhancedImageScanFinding& WithRemediation(Remediation&& value) { SetRemediation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }
    inline EnhancedImageScanFinding& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}
    inline EnhancedImageScanFinding& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }
    inline EnhancedImageScanFinding& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline double GetScore() const{ return m_score; }
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }
    inline EnhancedImageScanFinding& WithScore(double value) { SetScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline const ScoreDetails& GetScoreDetails() const{ return m_scoreDetails; }
    inline bool ScoreDetailsHasBeenSet() const { return m_scoreDetailsHasBeenSet; }
    inline void SetScoreDetails(const ScoreDetails& value) { m_scoreDetailsHasBeenSet = true; m_scoreDetails = value; }
    inline void SetScoreDetails(ScoreDetails&& value) { m_scoreDetailsHasBeenSet = true; m_scoreDetails = std::move(value); }
    inline EnhancedImageScanFinding& WithScoreDetails(const ScoreDetails& value) { SetScoreDetails(value); return *this;}
    inline EnhancedImageScanFinding& WithScoreDetails(ScoreDetails&& value) { SetScoreDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the finding.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }
    inline EnhancedImageScanFinding& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}
    inline EnhancedImageScanFinding& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithSeverity(const char* value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline EnhancedImageScanFinding& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline EnhancedImageScanFinding& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithStatus(const char* value) { SetStatus(value); return *this;}
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
    inline EnhancedImageScanFinding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline EnhancedImageScanFinding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline EnhancedImageScanFinding& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline EnhancedImageScanFinding& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline EnhancedImageScanFinding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline EnhancedImageScanFinding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details on whether a fix is available through a version update. This value
     * can be <code>YES</code>, <code>NO</code>, or <code>PARTIAL</code>. A
     * <code>PARTIAL</code> fix means that some, but not all, of the packages
     * identified in the finding have fixes available through updated versions.</p>
     */
    inline const Aws::String& GetFixAvailable() const{ return m_fixAvailable; }
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
    inline void SetFixAvailable(const Aws::String& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = value; }
    inline void SetFixAvailable(Aws::String&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::move(value); }
    inline void SetFixAvailable(const char* value) { m_fixAvailableHasBeenSet = true; m_fixAvailable.assign(value); }
    inline EnhancedImageScanFinding& WithFixAvailable(const Aws::String& value) { SetFixAvailable(value); return *this;}
    inline EnhancedImageScanFinding& WithFixAvailable(Aws::String&& value) { SetFixAvailable(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithFixAvailable(const char* value) { SetFixAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a finding discovered in your environment has an exploit available.</p>
     */
    inline const Aws::String& GetExploitAvailable() const{ return m_exploitAvailable; }
    inline bool ExploitAvailableHasBeenSet() const { return m_exploitAvailableHasBeenSet; }
    inline void SetExploitAvailable(const Aws::String& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = value; }
    inline void SetExploitAvailable(Aws::String&& value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable = std::move(value); }
    inline void SetExploitAvailable(const char* value) { m_exploitAvailableHasBeenSet = true; m_exploitAvailable.assign(value); }
    inline EnhancedImageScanFinding& WithExploitAvailable(const Aws::String& value) { SetExploitAvailable(value); return *this;}
    inline EnhancedImageScanFinding& WithExploitAvailable(Aws::String&& value) { SetExploitAvailable(std::move(value)); return *this;}
    inline EnhancedImageScanFinding& WithExploitAvailable(const char* value) { SetExploitAvailable(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_findingArn;
    bool m_findingArnHasBeenSet = false;

    Aws::Utils::DateTime m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastObservedAt;
    bool m_lastObservedAtHasBeenSet = false;

    PackageVulnerabilityDetails m_packageVulnerabilityDetails;
    bool m_packageVulnerabilityDetailsHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::Vector<Resource> m_resources;
    bool m_resourcesHasBeenSet = false;

    double m_score;
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

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_fixAvailable;
    bool m_fixAvailableHasBeenSet = false;

    Aws::String m_exploitAvailable;
    bool m_exploitAvailableHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
