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
   * <p>The analysis template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisTemplate">AWS
   * API Reference</a></p>
   */
  class AnalysisTemplate
  {
  public:
    AWS_CLEANROOMS_API AnalysisTemplate();
    AWS_CLEANROOMS_API AnalysisTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the analysis template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AnalysisTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AnalysisTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AnalysisTemplate& WithId(const char* value) { SetId(value); return *this;}
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
    inline AnalysisTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AnalysisTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AnalysisTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID for the associated collaboration of the analysis template.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }
    inline AnalysisTemplate& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline AnalysisTemplate& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline AnalysisTemplate& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
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
    inline AnalysisTemplate& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline AnalysisTemplate& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline AnalysisTemplate& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a member who created the analysis template.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline AnalysisTemplate& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline AnalysisTemplate& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline AnalysisTemplate& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the analysis
     * template.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline AnalysisTemplate& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline AnalysisTemplate& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline AnalysisTemplate& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
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
    inline AnalysisTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AnalysisTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AnalysisTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline AnalysisTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AnalysisTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AnalysisTemplate& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline AnalysisTemplate& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline AnalysisTemplate& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the analysis template was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline AnalysisTemplate& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline AnalysisTemplate& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entire schema object.</p>
     */
    inline const AnalysisSchema& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const AnalysisSchema& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(AnalysisSchema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline AnalysisTemplate& WithSchema(const AnalysisSchema& value) { SetSchema(value); return *this;}
    inline AnalysisTemplate& WithSchema(AnalysisSchema&& value) { SetSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the analysis template.</p>
     */
    inline const AnalysisFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const AnalysisFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(AnalysisFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline AnalysisTemplate& WithFormat(const AnalysisFormat& value) { SetFormat(value); return *this;}
    inline AnalysisTemplate& WithFormat(AnalysisFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the analysis template.</p>
     */
    inline const AnalysisSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const AnalysisSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(AnalysisSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline AnalysisTemplate& WithSource(const AnalysisSource& value) { SetSource(value); return *this;}
    inline AnalysisTemplate& WithSource(AnalysisSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters of the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const{ return m_analysisParameters; }
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }
    inline void SetAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = value; }
    inline void SetAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::move(value); }
    inline AnalysisTemplate& WithAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { SetAnalysisParameters(value); return *this;}
    inline AnalysisTemplate& WithAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { SetAnalysisParameters(std::move(value)); return *this;}
    inline AnalysisTemplate& AddAnalysisParameters(const AnalysisParameter& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(value); return *this; }
    inline AnalysisTemplate& AddAnalysisParameters(AnalysisParameter&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the validations performed on the analysis template.</p>
     */
    inline const Aws::Vector<AnalysisTemplateValidationStatusDetail>& GetValidations() const{ return m_validations; }
    inline bool ValidationsHasBeenSet() const { return m_validationsHasBeenSet; }
    inline void SetValidations(const Aws::Vector<AnalysisTemplateValidationStatusDetail>& value) { m_validationsHasBeenSet = true; m_validations = value; }
    inline void SetValidations(Aws::Vector<AnalysisTemplateValidationStatusDetail>&& value) { m_validationsHasBeenSet = true; m_validations = std::move(value); }
    inline AnalysisTemplate& WithValidations(const Aws::Vector<AnalysisTemplateValidationStatusDetail>& value) { SetValidations(value); return *this;}
    inline AnalysisTemplate& WithValidations(Aws::Vector<AnalysisTemplateValidationStatusDetail>&& value) { SetValidations(std::move(value)); return *this;}
    inline AnalysisTemplate& AddValidations(const AnalysisTemplateValidationStatusDetail& value) { m_validationsHasBeenSet = true; m_validations.push_back(value); return *this; }
    inline AnalysisTemplate& AddValidations(AnalysisTemplateValidationStatusDetail&& value) { m_validationsHasBeenSet = true; m_validations.push_back(std::move(value)); return *this; }
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
