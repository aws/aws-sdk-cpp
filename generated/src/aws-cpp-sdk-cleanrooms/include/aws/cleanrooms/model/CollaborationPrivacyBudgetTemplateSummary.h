﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PrivacyBudgetType.h>
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
   * <p>A summary of the collaboration's privacy budget template. This summary
   * includes information about who created the privacy budget template and what
   * collaborations it belongs to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationPrivacyBudgetTemplateSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationPrivacyBudgetTemplateSummary
  {
  public:
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetTemplateSummary();
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration that contains this collaboration
     * privacy budget template.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collaboration that contains this collaboration privacy budget
     * template.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that created this collaboration privacy
     * budget template.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline const PrivacyBudgetType& GetPrivacyBudgetType() const{ return m_privacyBudgetType; }
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }
    inline void SetPrivacyBudgetType(const PrivacyBudgetType& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }
    inline void SetPrivacyBudgetType(PrivacyBudgetType&& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = std::move(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithPrivacyBudgetType(const PrivacyBudgetType& value) { SetPrivacyBudgetType(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithPrivacyBudgetType(PrivacyBudgetType&& value) { SetPrivacyBudgetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the collaboration privacy budget template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the collaboration privacy budget template was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline CollaborationPrivacyBudgetTemplateSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline CollaborationPrivacyBudgetTemplateSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
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

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    PrivacyBudgetType m_privacyBudgetType;
    bool m_privacyBudgetTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
