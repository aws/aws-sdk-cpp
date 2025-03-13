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
    AWS_IMAGEBUILDER_API ImageScanFinding() = default;
    AWS_IMAGEBUILDER_API ImageScanFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageScanFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the finding.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    ImageScanFinding& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image build version that's associated
     * with the finding.</p>
     */
    inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
    inline bool ImageBuildVersionArnHasBeenSet() const { return m_imageBuildVersionArnHasBeenSet; }
    template<typename ImageBuildVersionArnT = Aws::String>
    void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) { m_imageBuildVersionArnHasBeenSet = true; m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value); }
    template<typename ImageBuildVersionArnT = Aws::String>
    ImageScanFinding& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) { SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that's associated with
     * the finding.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const { return m_imagePipelineArn; }
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }
    template<typename ImagePipelineArnT = Aws::String>
    void SetImagePipelineArn(ImagePipelineArnT&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::forward<ImagePipelineArnT>(value); }
    template<typename ImagePipelineArnT = Aws::String>
    ImageScanFinding& WithImagePipelineArn(ImagePipelineArnT&& value) { SetImagePipelineArn(std::forward<ImagePipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding. Image Builder looks for findings of the type
     * <code>PACKAGE_VULNERABILITY</code> that apply to output images, and excludes
     * other types.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ImageScanFinding& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
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
    ImageScanFinding& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ImageScanFinding& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the details about how to remediate the finding.</p>
     */
    inline const Remediation& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Remediation>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Remediation>
    ImageScanFinding& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
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
    ImageScanFinding& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the finding was first observed.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstObservedAt() const { return m_firstObservedAt; }
    inline bool FirstObservedAtHasBeenSet() const { return m_firstObservedAtHasBeenSet; }
    template<typename FirstObservedAtT = Aws::Utils::DateTime>
    void SetFirstObservedAt(FirstObservedAtT&& value) { m_firstObservedAtHasBeenSet = true; m_firstObservedAt = std::forward<FirstObservedAtT>(value); }
    template<typename FirstObservedAtT = Aws::Utils::DateTime>
    ImageScanFinding& WithFirstObservedAt(FirstObservedAtT&& value) { SetFirstObservedAt(std::forward<FirstObservedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the finding was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ImageScanFinding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The score that Amazon Inspector assigned for the finding.</p>
     */
    inline double GetInspectorScore() const { return m_inspectorScore; }
    inline bool InspectorScoreHasBeenSet() const { return m_inspectorScoreHasBeenSet; }
    inline void SetInspectorScore(double value) { m_inspectorScoreHasBeenSet = true; m_inspectorScore = value; }
    inline ImageScanFinding& WithInspectorScore(double value) { SetInspectorScore(value); return *this;}
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
    ImageScanFinding& WithInspectorScoreDetails(InspectorScoreDetailsT&& value) { SetInspectorScoreDetails(std::forward<InspectorScoreDetailsT>(value)); return *this;}
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
    ImageScanFinding& WithPackageVulnerabilityDetails(PackageVulnerabilityDetailsT&& value) { SetPackageVulnerabilityDetails(std::forward<PackageVulnerabilityDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about whether a fix is available for any of the packages that are
     * identified in the finding through a version update.</p>
     */
    inline const Aws::String& GetFixAvailable() const { return m_fixAvailable; }
    inline bool FixAvailableHasBeenSet() const { return m_fixAvailableHasBeenSet; }
    template<typename FixAvailableT = Aws::String>
    void SetFixAvailable(FixAvailableT&& value) { m_fixAvailableHasBeenSet = true; m_fixAvailable = std::forward<FixAvailableT>(value); }
    template<typename FixAvailableT = Aws::String>
    ImageScanFinding& WithFixAvailable(FixAvailableT&& value) { SetFixAvailable(std::forward<FixAvailableT>(value)); return *this;}
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

    Aws::Utils::DateTime m_firstObservedAt{};
    bool m_firstObservedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    double m_inspectorScore{0.0};
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
