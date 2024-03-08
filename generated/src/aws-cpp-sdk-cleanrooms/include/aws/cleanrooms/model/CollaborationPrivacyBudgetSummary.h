/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PrivacyBudgetType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/PrivacyBudget.h>
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
   * <p>A summary of the collaboration privacy budgets. This summary includes the
   * collaboration information, creation information, epsilon provided, and utility
   * in terms of aggregations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationPrivacyBudgetSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationPrivacyBudgetSummary
  {
  public:
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetSummary();
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateId() const{ return m_privacyBudgetTemplateId; }

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline bool PrivacyBudgetTemplateIdHasBeenSet() const { return m_privacyBudgetTemplateIdHasBeenSet; }

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplateId(const Aws::String& value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId = value; }

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplateId(Aws::String&& value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId = std::move(value); }

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplateId(const char* value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId.assign(value); }

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateId(const Aws::String& value) { SetPrivacyBudgetTemplateId(value); return *this;}

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateId(Aws::String&& value) { SetPrivacyBudgetTemplateId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateId(const char* value) { SetPrivacyBudgetTemplateId(value); return *this;}


    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateArn() const{ return m_privacyBudgetTemplateArn; }

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline bool PrivacyBudgetTemplateArnHasBeenSet() const { return m_privacyBudgetTemplateArnHasBeenSet; }

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplateArn(const Aws::String& value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn = value; }

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplateArn(Aws::String&& value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn = std::move(value); }

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline void SetPrivacyBudgetTemplateArn(const char* value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn.assign(value); }

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(const Aws::String& value) { SetPrivacyBudgetTemplateArn(value); return *this;}

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(Aws::String&& value) { SetPrivacyBudgetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(const char* value) { SetPrivacyBudgetTemplateArn(value); return *this;}


    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}


    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const{ return m_creatorAccountId; }

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline void SetCreatorAccountId(const Aws::String& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = value; }

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline void SetCreatorAccountId(Aws::String&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::move(value); }

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline void SetCreatorAccountId(const char* value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId.assign(value); }

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}


    /**
     * <p>The type of privacy budget template.</p>
     */
    inline const PrivacyBudgetType& GetType() const{ return m_type; }

    /**
     * <p>The type of privacy budget template.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of privacy budget template.</p>
     */
    inline void SetType(const PrivacyBudgetType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of privacy budget template.</p>
     */
    inline void SetType(PrivacyBudgetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithType(const PrivacyBudgetType& value) { SetType(value); return *this;}

    /**
     * <p>The type of privacy budget template.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithType(PrivacyBudgetType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline const PrivacyBudget& GetBudget() const{ return m_budget; }

    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }

    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline void SetBudget(const PrivacyBudget& value) { m_budgetHasBeenSet = true; m_budget = value; }

    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline void SetBudget(PrivacyBudget&& value) { m_budgetHasBeenSet = true; m_budget = std::move(value); }

    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithBudget(const PrivacyBudget& value) { SetBudget(value); return *this;}

    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline CollaborationPrivacyBudgetSummary& WithBudget(PrivacyBudget&& value) { SetBudget(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateId;
    bool m_privacyBudgetTemplateIdHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateArn;
    bool m_privacyBudgetTemplateArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    PrivacyBudgetType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    PrivacyBudget m_budget;
    bool m_budgetHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
