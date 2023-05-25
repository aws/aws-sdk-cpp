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


    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline EnhancedImageScanFinding& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline EnhancedImageScanFinding& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the image.</p>
     */
    inline EnhancedImageScanFinding& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the finding.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline const Aws::String& GetFindingArn() const{ return m_findingArn; }

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline bool FindingArnHasBeenSet() const { return m_findingArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline void SetFindingArn(const Aws::String& value) { m_findingArnHasBeenSet = true; m_findingArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline void SetFindingArn(Aws::String&& value) { m_findingArnHasBeenSet = true; m_findingArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline void SetFindingArn(const char* value) { m_findingArnHasBeenSet = true; m_findingArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithFindingArn(const Aws::String& value) { SetFindingArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithFindingArn(Aws::String&& value) { SetFindingArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithFindingArn(const char* value) { SetFindingArn(value); return *this;}


    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstObservedAt() const{ return m_firstObservedAt; }

    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }

    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline void SetFirstObservedAt(const Aws::Utils::DateTime& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }

    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline void SetFirstObservedAt(Aws::Utils::DateTime&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }

    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline EnhancedImageScanFinding& WithFirstObservedAt(const Aws::Utils::DateTime& value) { SetFirstObservedAt(value); return *this;}

    /**
     * <p>The date and time that the finding was first observed.</p>
     */
    inline EnhancedImageScanFinding& WithFirstObservedAt(Aws::Utils::DateTime&& value) { SetFirstObservedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastObservedAt() const{ return m_lastObservedAt; }

    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline bool LastObservedAtHasBeenSet() const { return m_lastObservedAtHasBeenSet; }

    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline void SetLastObservedAt(const Aws::Utils::DateTime& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = value; }

    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline void SetLastObservedAt(Aws::Utils::DateTime&& value) { m_lastObservedAtHasBeenSet = true; m_lastObservedAt = std::move(value); }

    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline EnhancedImageScanFinding& WithLastObservedAt(const Aws::Utils::DateTime& value) { SetLastObservedAt(value); return *this;}

    /**
     * <p>The date and time that the finding was last observed.</p>
     */
    inline EnhancedImageScanFinding& WithLastObservedAt(Aws::Utils::DateTime&& value) { SetLastObservedAt(std::move(value)); return *this;}


    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline const PackageVulnerabilityDetails& GetPackageVulnerabilityDetails() const{ return m_packageVulnerabilityDetails; }

    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline bool PackageVulnerabilityDetailsHasBeenSet() const { return m_packageVulnerabilityDetailsHasBeenSet; }

    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline void SetPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = value; }

    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline void SetPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = std::move(value); }

    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline EnhancedImageScanFinding& WithPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { SetPackageVulnerabilityDetails(value); return *this;}

    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline EnhancedImageScanFinding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { SetPackageVulnerabilityDetails(std::move(value)); return *this;}


    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline const Remediation& GetRemediation() const{ return m_remediation; }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline void SetRemediation(const Remediation& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline void SetRemediation(Remediation&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline EnhancedImageScanFinding& WithRemediation(const Remediation& value) { SetRemediation(value); return *this;}

    /**
     * <p>An object that contains the details about how to remediate a finding.</p>
     */
    inline EnhancedImageScanFinding& WithRemediation(Remediation&& value) { SetRemediation(std::move(value)); return *this;}


    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline const Aws::Vector<Resource>& GetResources() const{ return m_resources; }

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline void SetResources(const Aws::Vector<Resource>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline void SetResources(Aws::Vector<Resource>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline EnhancedImageScanFinding& WithResources(const Aws::Vector<Resource>& value) { SetResources(value); return *this;}

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline EnhancedImageScanFinding& WithResources(Aws::Vector<Resource>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline EnhancedImageScanFinding& AddResources(const Resource& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>Contains information on the resources involved in a finding.</p>
     */
    inline EnhancedImageScanFinding& AddResources(Resource&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline double GetScore() const{ return m_score; }

    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline void SetScore(double value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The Amazon Inspector score given to the finding.</p>
     */
    inline EnhancedImageScanFinding& WithScore(double value) { SetScore(value); return *this;}


    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline const ScoreDetails& GetScoreDetails() const{ return m_scoreDetails; }

    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline bool ScoreDetailsHasBeenSet() const { return m_scoreDetailsHasBeenSet; }

    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline void SetScoreDetails(const ScoreDetails& value) { m_scoreDetailsHasBeenSet = true; m_scoreDetails = value; }

    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline void SetScoreDetails(ScoreDetails&& value) { m_scoreDetailsHasBeenSet = true; m_scoreDetails = std::move(value); }

    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline EnhancedImageScanFinding& WithScoreDetails(const ScoreDetails& value) { SetScoreDetails(value); return *this;}

    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline EnhancedImageScanFinding& WithScoreDetails(ScoreDetails&& value) { SetScoreDetails(std::move(value)); return *this;}


    /**
     * <p>The severity of the finding.</p>
     */
    inline const Aws::String& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline void SetSeverity(const Aws::String& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline void SetSeverity(Aws::String&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity of the finding.</p>
     */
    inline void SetSeverity(const char* value) { m_severityHasBeenSet = true; m_severity.assign(value); }

    /**
     * <p>The severity of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}

    /**
     * <p>The severity of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithSeverity(const char* value) { SetSeverity(value); return *this;}


    /**
     * <p>The status of the finding.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the finding.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the finding.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The type of the finding.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the finding.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the finding.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the finding.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the finding.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the finding.</p>
     */
    inline EnhancedImageScanFinding& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline EnhancedImageScanFinding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the finding was last updated at.</p>
     */
    inline EnhancedImageScanFinding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
