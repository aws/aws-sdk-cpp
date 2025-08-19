/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/AnalysisSchema.h>
#include <aws/cleanrooms/model/AnalysisFormat.h>
#include <aws/cleanrooms/model/AnalysisSource.h>
#include <aws/cleanrooms/model/AnalysisSourceMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/ErrorMessageConfiguration.h>
#include <aws/cleanrooms/model/AnalysisParameter.h>
#include <aws/cleanrooms/model/AnalysisTemplateValidationStatusDetail.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The analysis template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplate">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplate
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplate() = default;
    AWS_CLEANROOMS_API AnalysisTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the analysis template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    AnalysisTemplate& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AnalysisTemplate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the associated collaboration of the analysis template.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    AnalysisTemplate& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationArn() const { return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    template<typename CollaborationArnT = Aws::String>
    void SetCollaborationArn(CollaborationArnT&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::forward<CollaborationArnT>(value); }
    template<typename CollaborationArnT = Aws::String>
    AnalysisTemplate& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a member who created the analysis template.</p>
     */
    inline const Aws::String& GetMembershipId() const { return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    template<typename MembershipIdT = Aws::String>
    void SetMembershipId(MembershipIdT&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::forward<MembershipIdT>(value); }
    template<typename MembershipIdT = Aws::String>
    AnalysisTemplate& WithMembershipId(MembershipIdT&& value) { SetMembershipId(std::forward<MembershipIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the analysis
     * template.</p>
     */
    inline const Aws::String& GetMembershipArn() const { return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    template<typename MembershipArnT = Aws::String>
    void SetMembershipArn(MembershipArnT&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::forward<MembershipArnT>(value); }
    template<typename MembershipArnT = Aws::String>
    AnalysisTemplate& WithMembershipArn(MembershipArnT&& value) { SetMembershipArn(std::forward<MembershipArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the analysis template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AnalysisTemplate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the analysis template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AnalysisTemplate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    AnalysisTemplate& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    AnalysisTemplate& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entire schema object.</p>
     */
    inline const AnalysisSchema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = AnalysisSchema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = AnalysisSchema>
    AnalysisTemplate& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the analysis template.</p>
     */
    inline AnalysisFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(AnalysisFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline AnalysisTemplate& WithFormat(AnalysisFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the analysis template.</p>
     */
    inline const AnalysisSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = AnalysisSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = AnalysisSource>
    AnalysisTemplate& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source metadata for the analysis template.</p>
     */
    inline const AnalysisSourceMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = AnalysisSourceMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = AnalysisSourceMetadata>
    AnalysisTemplate& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const { return m_analysisParameters; }
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }
    template<typename AnalysisParametersT = Aws::Vector<AnalysisParameter>>
    void SetAnalysisParameters(AnalysisParametersT&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::forward<AnalysisParametersT>(value); }
    template<typename AnalysisParametersT = Aws::Vector<AnalysisParameter>>
    AnalysisTemplate& WithAnalysisParameters(AnalysisParametersT&& value) { SetAnalysisParameters(std::forward<AnalysisParametersT>(value)); return *this;}
    template<typename AnalysisParametersT = AnalysisParameter>
    AnalysisTemplate& AddAnalysisParameters(AnalysisParametersT&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.emplace_back(std::forward<AnalysisParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the validations performed on the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisTemplateValidationStatusDetail>& GetValidations() const { return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    template<typename ValidationsT = Aws::Vector<AnalysisTemplateValidationStatusDetail>>
    void SetValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations = std::forward<ValidationsT>(value); }
    template<typename ValidationsT = Aws::Vector<AnalysisTemplateValidationStatusDetail>>
    AnalysisTemplate& WithValidations(ValidationsT&& value) { SetValidations(std::forward<ValidationsT>(value)); return *this;}
    template<typename ValidationsT = AnalysisTemplateValidationStatusDetail>
    AnalysisTemplate& AddValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations.emplace_back(std::forward<ValidationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies the level of detail in error messages
     * returned by analyses using this template. When set to <code>DETAILED</code>,
     * error messages include more information to help troubleshoot issues with PySpark
     * jobs. Detailed error messages may expose underlying data, including sensitive
     * information. Recommended for faster troubleshooting in development and testing
     * environments.</p>
     */
    inline const ErrorMessageConfiguration& GetErrorMessageConfiguration() const { return m_errorMessageConfiguration; }
    inline bool ErrorMessageConfigurationHasBeenSet() const { return m_errorMessageConfigurationHasBeenSet; }
    template<typename ErrorMessageConfigurationT = ErrorMessageConfiguration>
    void SetErrorMessageConfiguration(ErrorMessageConfigurationT&& value) { m_errorMessageConfigurationHasBeenSet = true; m_errorMessageConfiguration = std::forward<ErrorMessageConfigurationT>(value); }
    template<typename ErrorMessageConfigurationT = ErrorMessageConfiguration>
    AnalysisTemplate& WithErrorMessageConfiguration(ErrorMessageConfigurationT&& value) { SetErrorMessageConfiguration(std::forward<ErrorMessageConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    AnalysisSchema m_schema;
    bool m_schemaHasBeenSet = false;

    AnalysisFormat m_format{AnalysisFormat::NOT_SET};
    bool m_formatHasBeenSet = false;

    AnalysisSource m_source;
    bool m_sourceHasBeenSet = false;

    AnalysisSourceMetadata m_sourceMetadata;
    bool m_sourceMetadataHasBeenSet = false;

    Aws::Vector<AnalysisParameter> m_analysisParameters;
    bool m_analysisParametersHasBeenSet = false;

    Aws::Vector<AnalysisTemplateValidationStatusDetail> m_validations;
    bool m_validationsHasBeenSet = false;

    ErrorMessageConfiguration m_errorMessageConfiguration;
    bool m_errorMessageConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
