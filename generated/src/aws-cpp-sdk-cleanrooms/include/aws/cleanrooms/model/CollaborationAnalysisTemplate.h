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


    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline CollaborationAnalysisTemplate& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline CollaborationAnalysisTemplate& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the collaboration that the analysis templates belong
     * to. Currently accepts collaboration ID.</p>
     */
    inline CollaborationAnalysisTemplate& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the analysis template’s associated collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}


    /**
     * <p>The description of the analysis template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline CollaborationAnalysisTemplate& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline CollaborationAnalysisTemplate& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline CollaborationAnalysisTemplate& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}


    /**
     * <p>The name of the analysis template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the analysis template.</p>
     */
    inline CollaborationAnalysisTemplate& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline CollaborationAnalysisTemplate& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time that the analysis template within a collaboration was created.</p>
     */
    inline CollaborationAnalysisTemplate& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline CollaborationAnalysisTemplate& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time that the analysis template in the collaboration was last
     * updated.</p>
     */
    inline CollaborationAnalysisTemplate& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The entire schema object.</p>
     */
    inline const AnalysisSchema& GetSchema() const{ return m_schema; }

    /**
     * <p>The entire schema object.</p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>The entire schema object.</p>
     */
    inline void SetSchema(const AnalysisSchema& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>The entire schema object.</p>
     */
    inline void SetSchema(AnalysisSchema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>The entire schema object.</p>
     */
    inline CollaborationAnalysisTemplate& WithSchema(const AnalysisSchema& value) { SetSchema(value); return *this;}

    /**
     * <p>The entire schema object.</p>
     */
    inline CollaborationAnalysisTemplate& WithSchema(AnalysisSchema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline const AnalysisFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline void SetFormat(const AnalysisFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline void SetFormat(AnalysisFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithFormat(const AnalysisFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the analysis template in the collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithFormat(AnalysisFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline const AnalysisSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline void SetSource(const AnalysisSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline void SetSource(AnalysisSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithSource(const AnalysisSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the analysis template within a collaboration.</p>
     */
    inline CollaborationAnalysisTemplate& WithSource(AnalysisSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline const Aws::Vector<AnalysisParameter>& GetAnalysisParameters() const{ return m_analysisParameters; }

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline bool AnalysisParametersHasBeenSet() const { return m_analysisParametersHasBeenSet; }

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline void SetAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = value; }

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline void SetAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters = std::move(value); }

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline CollaborationAnalysisTemplate& WithAnalysisParameters(const Aws::Vector<AnalysisParameter>& value) { SetAnalysisParameters(value); return *this;}

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline CollaborationAnalysisTemplate& WithAnalysisParameters(Aws::Vector<AnalysisParameter>&& value) { SetAnalysisParameters(std::move(value)); return *this;}

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline CollaborationAnalysisTemplate& AddAnalysisParameters(const AnalysisParameter& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(value); return *this; }

    /**
     * <p>The analysis parameters that have been specified in the analysis
     * template.</p>
     */
    inline CollaborationAnalysisTemplate& AddAnalysisParameters(AnalysisParameter&& value) { m_analysisParametersHasBeenSet = true; m_analysisParameters.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
