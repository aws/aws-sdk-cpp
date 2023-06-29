/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/SchemaType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisMethod.h>
#include <aws/cleanrooms/model/AnalysisRuleType.h>
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
   * <p>The schema summary for the objects listed by the request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/SchemaSummary">AWS
   * API Reference</a></p>
   */
  class SchemaSummary
  {
  public:
    AWS_CLEANROOMS_API SchemaSummary();
    AWS_CLEANROOMS_API SchemaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API SchemaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the schema object.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the schema object.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the schema object.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the schema object.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the schema object.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the schema object.</p>
     */
    inline SchemaSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the schema object.</p>
     */
    inline SchemaSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the schema object.</p>
     */
    inline SchemaSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of schema object. The only valid schema type is currently
     * `TABLE`.</p>
     */
    inline const SchemaType& GetType() const{ return m_type; }

    /**
     * <p>The type of schema object. The only valid schema type is currently
     * `TABLE`.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of schema object. The only valid schema type is currently
     * `TABLE`.</p>
     */
    inline void SetType(const SchemaType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of schema object. The only valid schema type is currently
     * `TABLE`.</p>
     */
    inline void SetType(SchemaType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of schema object. The only valid schema type is currently
     * `TABLE`.</p>
     */
    inline SchemaSummary& WithType(const SchemaType& value) { SetType(value); return *this;}

    /**
     * <p>The type of schema object. The only valid schema type is currently
     * `TABLE`.</p>
     */
    inline SchemaSummary& WithType(SchemaType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline SchemaSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline SchemaSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique account ID for the Amazon Web Services account that owns the
     * schema.</p>
     */
    inline SchemaSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}


    /**
     * <p>The time the schema object was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time the schema object was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time the schema object was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time the schema object was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time the schema object was created.</p>
     */
    inline SchemaSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time the schema object was created.</p>
     */
    inline SchemaSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the schema object was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the schema object was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the schema object was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the schema object was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the schema object was last updated.</p>
     */
    inline SchemaSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the schema object was last updated.</p>
     */
    inline SchemaSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline SchemaSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline SchemaSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID for the collaboration that the schema belongs to.</p>
     */
    inline SchemaSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline SchemaSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline SchemaSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}

    /**
     * <p>The unique ARN for the collaboration that the schema belongs to.</p>
     */
    inline SchemaSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}


    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline const Aws::Vector<AnalysisRuleType>& GetAnalysisRuleTypes() const{ return m_analysisRuleTypes; }

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline bool AnalysisRuleTypesHasBeenSet() const { return m_analysisRuleTypesHasBeenSet; }

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline void SetAnalysisRuleTypes(const Aws::Vector<AnalysisRuleType>& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = value; }

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline void SetAnalysisRuleTypes(Aws::Vector<AnalysisRuleType>&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes = std::move(value); }

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline SchemaSummary& WithAnalysisRuleTypes(const Aws::Vector<AnalysisRuleType>& value) { SetAnalysisRuleTypes(value); return *this;}

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline SchemaSummary& WithAnalysisRuleTypes(Aws::Vector<AnalysisRuleType>&& value) { SetAnalysisRuleTypes(std::move(value)); return *this;}

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline SchemaSummary& AddAnalysisRuleTypes(const AnalysisRuleType& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(value); return *this; }

    /**
     * <p>The types of analysis rules that are associated with this schema object.</p>
     */
    inline SchemaSummary& AddAnalysisRuleTypes(AnalysisRuleType&& value) { m_analysisRuleTypesHasBeenSet = true; m_analysisRuleTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The analysis method for the associated schema. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline const AnalysisMethod& GetAnalysisMethod() const{ return m_analysisMethod; }

    /**
     * <p>The analysis method for the associated schema. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline bool AnalysisMethodHasBeenSet() const { return m_analysisMethodHasBeenSet; }

    /**
     * <p>The analysis method for the associated schema. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline void SetAnalysisMethod(const AnalysisMethod& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = value; }

    /**
     * <p>The analysis method for the associated schema. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline void SetAnalysisMethod(AnalysisMethod&& value) { m_analysisMethodHasBeenSet = true; m_analysisMethod = std::move(value); }

    /**
     * <p>The analysis method for the associated schema. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline SchemaSummary& WithAnalysisMethod(const AnalysisMethod& value) { SetAnalysisMethod(value); return *this;}

    /**
     * <p>The analysis method for the associated schema. The only valid value is
     * currently `DIRECT_QUERY`.</p>
     */
    inline SchemaSummary& WithAnalysisMethod(AnalysisMethod&& value) { SetAnalysisMethod(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SchemaType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::Vector<AnalysisRuleType> m_analysisRuleTypes;
    bool m_analysisRuleTypesHasBeenSet = false;

    AnalysisMethod m_analysisMethod;
    bool m_analysisMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
