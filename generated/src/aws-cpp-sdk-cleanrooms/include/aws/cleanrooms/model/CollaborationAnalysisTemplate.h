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
   * <p>The analysis template within a collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationAnalysisTemplate">AWS
   * API Reference</a></p>
   */
  class CollaborationAnalysisTemplate
  {
  public:
    AWS_CLEANROOMS_API CollaborationAnalysisTemplate() = default;
    AWS_CLEANROOMS_API CollaborationAnalysisTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationAnalysisTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CollaborationAnalysisTemplate& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    CollaborationAnalysisTemplate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    CollaborationAnalysisTemplate& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
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
    CollaborationAnalysisTemplate& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
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
    CollaborationAnalysisTemplate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    CollaborationAnalysisTemplate& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
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
    CollaborationAnalysisTemplate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CollaborationAnalysisTemplate& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    CollaborationAnalysisTemplate& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
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
    CollaborationAnalysisTemplate& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline AnalysisFormat GetFormat() const { return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(AnalysisFormat value) { m_formatHasBeenSet = true; m_format = value; }
    inline CollaborationAnalysisTemplate& WithFormat(AnalysisFormat value) { SetFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline const AnalysisSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = AnalysisSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = AnalysisSource>
    CollaborationAnalysisTemplate& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source metadata for the collaboration analysis template.</p>
     */
    inline const AnalysisSourceMetadata& GetSourceMetadata() const { return m_sourceMetadata; }
    inline bool SourceMetadataHasBeenSet() const { return m_sourceMetadataHasBeenSet; }
    template<typename SourceMetadataT = AnalysisSourceMetadata>
    void SetSourceMetadata(SourceMetadataT&& value) { m_sourceMetadataHasBeenSet = true; m_sourceMetadata = std::forward<SourceMetadataT>(value); }
    template<typename SourceMetadataT = AnalysisSourceMetadata>
    CollaborationAnalysisTemplate& WithSourceMetadata(SourceMetadataT&& value) { SetSourceMetadata(std::forward<SourceMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const { return m_analysisParameters; }
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }
    template<typename AnalysisParametersT = Aws::Vector<AnalysisParameter>>
    void SetAnalysisParameters(AnalysisParametersT&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::forward<AnalysisParametersT>(value); }
    template<typename AnalysisParametersT = Aws::Vector<AnalysisParameter>>
    CollaborationAnalysisTemplate& WithAnalysisParameters(AnalysisParametersT&& value) { SetAnalysisParameters(std::forward<AnalysisParametersT>(value)); return *this;}
    template<typename AnalysisParametersT = AnalysisParameter>
    CollaborationAnalysisTemplate& AddAnalysisParameters(AnalysisParametersT&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.emplace_back(std::forward<AnalysisParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validations that were performed.</p>
     */
    inline const Aws::Vector<AnalysisTemplateValidationStatusDetail>& GetValidations() const { return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    template<typename ValidationsT = Aws::Vector<AnalysisTemplateValidationStatusDetail>>
    void SetValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations = std::forward<ValidationsT>(value); }
    template<typename ValidationsT = Aws::Vector<AnalysisTemplateValidationStatusDetail>>
    CollaborationAnalysisTemplate& WithValidations(ValidationsT&& value) { SetValidations(std::forward<ValidationsT>(value)); return *this;}
    template<typename ValidationsT = AnalysisTemplateValidationStatusDetail>
    CollaborationAnalysisTemplate& AddValidations(ValidationsT&& value) { m_validationsHasBeenSet = true; m_validations.emplace_back(std::forward<ValidationsT>(value)); return *this; }
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
    CollaborationAnalysisTemplate& WithErrorMessageConfiguration(ErrorMessageConfigurationT&& value) { SetErrorMessageConfiguration(std::forward<ErrorMessageConfigurationT>(value)); return *this;}
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

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

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
