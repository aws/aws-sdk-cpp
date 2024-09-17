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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CLEANROOMS_API CollaborationAnalysisTemplate();
    AWS_CLEANROOMS_API CollaborationAnalysisTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationAnalysisTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CollaborationAnalysisTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CollaborationAnalysisTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CollaborationAnalysisTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CollaborationAnalysisTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }
    inline CollaborationAnalysisTemplate& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline CollaborationAnalysisTemplate& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }
    inline CollaborationAnalysisTemplate& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline CollaborationAnalysisTemplate& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the analysis template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CollaborationAnalysisTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CollaborationAnalysisTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }
    inline CollaborationAnalysisTemplate& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline CollaborationAnalysisTemplate& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the analysis template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CollaborationAnalysisTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CollaborationAnalysisTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline CollaborationAnalysisTemplate& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CollaborationAnalysisTemplate& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline CollaborationAnalysisTemplate& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline CollaborationAnalysisTemplate& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entire schema object.</p>
     */
    inline const AnalysisSchema& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const AnalysisSchema& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(AnalysisSchema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline CollaborationAnalysisTemplate& WithSchema(const AnalysisSchema& value) { SetSchema(value); return *this;}
    inline CollaborationAnalysisTemplate& WithSchema(AnalysisSchema&& value) { SetSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline const AnalysisFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const AnalysisFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(AnalysisFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline CollaborationAnalysisTemplate& WithFormat(const AnalysisFormat& value) { SetFormat(value); return *this;}
    inline CollaborationAnalysisTemplate& WithFormat(AnalysisFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline const AnalysisSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const AnalysisSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(AnalysisSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CollaborationAnalysisTemplate& WithSource(const AnalysisSource& value) { SetSource(value); return *this;}
    inline CollaborationAnalysisTemplate& WithSource(AnalysisSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const{ return m_analysisParameters; }
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }
    inline void SetAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = value; }
    inline void SetAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::move(value); }
    inline CollaborationAnalysisTemplate& WithAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { SetAnalysisParameters(value); return *this;}
    inline CollaborationAnalysisTemplate& WithAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { SetAnalysisParameters(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& AddAnalysisParameters(const AnalysisParameter& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(value); return *this; }
    inline CollaborationAnalysisTemplate& AddAnalysisParameters(AnalysisParameter&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validations that were performed.</p>
     */
    inline const Aws::Vector<AnalysisTemplateValidationStatusDetail>& GetValidations() const{ return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    inline void SetValidations(const Aws::Vector<AnalysisTemplateValidationStatusDetail>& value) { m_validationsHasBeenSet = true; m_validations = value; }
    inline void SetValidations(Aws::Vector<AnalysisTemplateValidationStatusDetail>&& value) { m_validationsHasBeenSet = true; m_validations = std::move(value); }
    inline CollaborationAnalysisTemplate& WithValidations(const Aws::Vector<AnalysisTemplateValidationStatusDetail>& value) { SetValidations(value); return *this;}
    inline CollaborationAnalysisTemplate& WithValidations(Aws::Vector<AnalysisTemplateValidationStatusDetail>&& value) { SetValidations(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplate& AddValidations(const AnalysisTemplateValidationStatusDetail& value) { m_validationsHasBeenSet = true; m_validations.push_back(value); return *this; }
    inline CollaborationAnalysisTemplate& AddValidations(AnalysisTemplateValidationStatusDetail&& value) { m_validationsHasBeenSet = true; m_validations.push_back(std::move(value)); return *this; }
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

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    AnalysisSchema m_schema;
    bool m_schemaHasBeenSet = false;

    AnalysisFormat m_format;
    bool m_formatHasBeenSet = false;

    AnalysisSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<AnalysisParameter> m_analysisParameters;
    bool m_analysisParametersHasBeenSet = false;

    Aws::Vector<AnalysisTemplateValidationStatusDetail> m_validations;
    bool m_validationsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
