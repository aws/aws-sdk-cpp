﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The metadata of the analysis template within a collaboration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationAnalysisTemplateSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationAnalysisTemplateSummary
  {
  public:
    AWS_CLEANROOMS_API CollaborationAnalysisTemplateSummary();
    AWS_CLEANROOMS_API CollaborationAnalysisTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationAnalysisTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the analysis template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CollaborationAnalysisTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the summary of the analysis template in a collaboration was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline CollaborationAnalysisTemplateSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the analysis template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CollaborationAnalysisTemplateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithId(const char* value) { SetId(value); return *this;}
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
    inline CollaborationAnalysisTemplateSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the summary of the analysis template in the collaboration was
     * last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline CollaborationAnalysisTemplateSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
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
    inline CollaborationAnalysisTemplateSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
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
    inline CollaborationAnalysisTemplateSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
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
    inline CollaborationAnalysisTemplateSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
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
    inline CollaborationAnalysisTemplateSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CollaborationAnalysisTemplateSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
