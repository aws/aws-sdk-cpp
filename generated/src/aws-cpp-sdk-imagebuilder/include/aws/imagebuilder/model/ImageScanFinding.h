/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Remediation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/imagebuilder/model/InspectorScoreDetails.h>
#include <aws/imagebuilder/model/PackageVulnerabilityDetails.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains details about a vulnerability scan finding.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageScanFinding">AWS
   * API Reference</a></p>
   */
  class ImageScanFinding
  {
  public:
    AWS_IMAGEBUILDER_API ImageScanFinding();
    AWS_IMAGEBUILDER_API ImageScanFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageScanFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the finding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline ImageScanFinding& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline ImageScanFinding& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline ImageScanFinding& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that's associated
     * with the finding.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const{ return m_imageBuildVersionArn; }
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
    inline void SetImageBuildVersionArn(const Aws::String& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = value; }
    inline void SetImageBuildVersionArn(Aws::String&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::move(value); }
    inline void SetImageBuildVersionArn(const char* value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn.assign(value); }
    inline ImageScanFinding& WithImageBuildVersionArn(const Aws::String& value) { SetImageBuildVersionArn(value); return *this;}
    inline ImageScanFinding& WithImageBuildVersionArn(Aws::String&& value) { SetImageBuildVersionArn(std::move(value)); return *this;}
    inline ImageScanFinding& WithImageBuildVersionArn(const char* value) { SetImageBuildVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that's associated with
     * the finding.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const{ return m_imagePipelineArn; }
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }
    inline void SetImagePipelineArn(const Aws::String& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = value; }
    inline void SetImagePipelineArn(Aws::String&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::move(value); }
    inline void SetImagePipelineArn(const char* value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn.assign(value); }
    inline ImageScanFinding& WithImagePipelineArn(const Aws::String& value) { SetImagePipelineArn(value); return *this;}
    inline ImageScanFinding& WithImagePipelineArn(Aws::String&& value) { SetImagePipelineArn(std::move(value)); return *this;}
    inline ImageScanFinding& WithImagePipelineArn(const char* value) { SetImagePipelineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding. Image Builder looks for findings of the type
     * <code>PACKAGE_VULNERABILITY</code> that apply to output images, and excludes
     * other types.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ImageScanFinding& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ImageScanFinding& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ImageScanFinding& WithType(const char* value) { SetType(value); return *this;}
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
    inline ImageScanFinding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImageScanFinding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImageScanFinding& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline ImageScanFinding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ImageScanFinding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ImageScanFinding& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details about how to remediate the finding.</p>
     */
    inline const Remediation& GetRemediation() const{ return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    inline void SetRemediation(const Remediation& value) { m_remediationHasBeenSet = true; m_remediation = value; }
    inline void SetRemediation(Remediation&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }
    inline ImageScanFinding& WithRemediation(const Remediation& value) { SetRemediation(value); return *this;}
    inline ImageScanFinding& WithRemediation(Remediation&& value) { SetRemediation(std::move(value)); return *this;}
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
    inline ImageScanFinding& WithSeverity(const Aws::String& value) { SetSeverity(value); return *this;}
    inline ImageScanFinding& WithSeverity(Aws::String&& value) { SetSeverity(std::move(value)); return *this;}
    inline ImageScanFinding& WithSeverity(const char* value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the finding was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstObservedAt() const{ return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    inline void SetFirstObservedAt(const Aws::Utils::DateTime& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = value; }
    inline void SetFirstObservedAt(Aws::Utils::DateTime&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::move(value); }
    inline ImageScanFinding& WithFirstObservedAt(const Aws::Utils::DateTime& value) { SetFirstObservedAt(value); return *this;}
    inline ImageScanFinding& WithFirstObservedAt(Aws::Utils::DateTime&& value) { SetFirstObservedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the finding was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ImageScanFinding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ImageScanFinding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The score that Amazon Inspector assigned for the finding.</p>
     */
    inline double GetInspectorScore() const{ return m_inspectorScore; }
    inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }
    inline void SetInspectorScore(double value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = value; }
    inline ImageScanFinding& WithInspectorScore(double value) { SetInspectorScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details of the Amazon Inspector score.</p>
     */
    inline const InspectorScoreDetails& GetInspectorScoreDetails() const{ return m_inspectorScoreDetails; }
    inline bool InspectorScoreDetailsHasBeenSet() const { return m_inspectorScoreDetailsHasBeenSet; }
    inline void SetInspectorScoreDetails(const InspectorScoreDetails& value) { m_inspectorScoreDetailsHasBeenSet = true; m_inspectorScoreDetails = value; }
    inline void SetInspectorScoreDetails(InspectorScoreDetails&& value) { m_inspectorScoreDetailsHasBeenSet = true; m_inspectorScoreDetails = std::move(value); }
    inline ImageScanFinding& WithInspectorScoreDetails(const InspectorScoreDetails& value) { SetInspectorScoreDetails(value); return *this;}
    inline ImageScanFinding& WithInspectorScoreDetails(InspectorScoreDetails&& value) { SetInspectorScoreDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details of a package vulnerability finding.</p>
     */
    inline const PackageVulnerabilityDetails& GetPackageVulnerabilityDetails() const{ return m_packageVulnerabilityDetails; }
    inline bool PackageVulnerabilityDetailsHasBeenSet() const { return m_packageVulnerabilityDetailsHasBeenSet; }
    inline void SetPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = value; }
    inline void SetPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { m_packageVulnerabilityDetailsHasBeenSet = true; m_packageVulnerabilityDetails = std::move(value); }
    inline ImageScanFinding& WithPackageVulnerabilityDetails(const PackageVulnerabilityDetails& value) { SetPackageVulnerabilityDetails(value); return *this;}
    inline ImageScanFinding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetails&& value) { SetPackageVulnerabilityDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about whether a fix is available for any of the packages that are
     * identified in the finding through a version update.</p>
     */
    inline const Aws::String& GetFixAvailable() const{ return m_fixAvailable; }
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
    inline void SetFixAvailable(const Aws::String& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = value; }
    inline void SetFixAvailable(Aws::String&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::move(value); }
    inline void SetFixAvailable(const char* value) { m_fixAvailableHasBeenSet = true; m_fixAvailable.assign(value); }
    inline ImageScanFinding& WithFixAvailable(const Aws::String& value) { SetFixAvailable(value); return *this;}
    inline ImageScanFinding& WithFixAvailable(Aws::String&& value) { SetFixAvailable(std::move(value)); return *this;}
    inline ImageScanFinding& WithFixAvailable(const char* value) { SetFixAvailable(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_imageBuildVersionArn;
    bool m_imageBuildVersionArnHasBeenSet = false;

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Remediation m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::String m_severity;
    bool m_severityHasBeenSet = false;

    Aws::Utils::DateTime m_firstObservedAt;
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    double m_inspectorScore;
    bool m_inspectorScoreHasBeenSet = false;

    InspectorScoreDetails m_inspectorScoreDetails;
    bool m_inspectorScoreDetailsHasBeenSet = false;

    PackageVulnerabilityDetails m_packageVulnerabilityDetails;
    bool m_packageVulnerabilityDetailsHasBeenSet = false;

    Aws::String m_fixAvailable;
    bool m_fixAvailableHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
