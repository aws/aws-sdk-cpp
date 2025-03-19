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
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetSummary() = default;
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationPrivacyBudgetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the collaboration privacy budget.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CollaborationPrivacyBudgetSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration privacy budget template.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateId() const { return m_privacyBudgetTemplateId; }
    inline bool PrivacyBudgetTemplateIdHasBeenSet() const { return m_privacyBudgetTemplateIdHasBeenSet; }
    template<typename PrivacyBudgetTemplateIdT = Aws::String>
    void SetPrivacyBudgetTemplateId(PrivacyBudgetTemplateIdT&& value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId = std::forward<PrivacyBudgetTemplateIdT>(value); }
    template<typename PrivacyBudgetTemplateIdT = Aws::String>
    CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateId(PrivacyBudgetTemplateIdT&& value) { SetPrivacyBudgetTemplateId(std::forward<PrivacyBudgetTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collaboration privacy budget template.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateArn() const { return m_privacyBudgetTemplateArn; }
    inline bool PrivacyBudgetTemplateArnHasBeenSet() const { return m_privacyBudgetTemplateArnHasBeenSet; }
    template<typename PrivacyBudgetTemplateArnT = Aws::String>
    void SetPrivacyBudgetTemplateArn(PrivacyBudgetTemplateArnT&& value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn = std::forward<PrivacyBudgetTemplateArnT>(value); }
    template<typename PrivacyBudgetTemplateArnT = Aws::String>
    CollaborationPrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(PrivacyBudgetTemplateArnT&& value) { SetPrivacyBudgetTemplateArn(std::forward<PrivacyBudgetTemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration that includes this privacy
     * budget.</p>
     */
    inline const Aws::String& GetCollaborationId() const { return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    template<typename CollaborationIdT = Aws::String>
    void SetCollaborationId(CollaborationIdT&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::forward<CollaborationIdT>(value); }
    template<typename CollaborationIdT = Aws::String>
    CollaborationPrivacyBudgetSummary& WithCollaborationId(CollaborationIdT&& value) { SetCollaborationId(std::forward<CollaborationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collaboration that includes this privacy budget.</p>
     */
    inline const Aws::String& GetCollaborationArn() const { return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    template<typename CollaborationArnT = Aws::String>
    void SetCollaborationArn(CollaborationArnT&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::forward<CollaborationArnT>(value); }
    template<typename CollaborationArnT = Aws::String>
    CollaborationPrivacyBudgetSummary& WithCollaborationArn(CollaborationArnT&& value) { SetCollaborationArn(std::forward<CollaborationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account that created this privacy budget.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    CollaborationPrivacyBudgetSummary& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of privacy budget template.</p>
     */
    inline PrivacyBudgetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PrivacyBudgetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CollaborationPrivacyBudgetSummary& WithType(PrivacyBudgetType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    CollaborationPrivacyBudgetSummary& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    CollaborationPrivacyBudgetSummary& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The includes epsilon provided and utility in terms of aggregations.</p>
     */
    inline const PrivacyBudget& GetBudget() const { return m_budget; }
    inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }
    template<typename BudgetT = PrivacyBudget>
    void SetBudget(BudgetT&& value) { m_budgetHasBeenSet = true; m_budget = std::forward<BudgetT>(value); }
    template<typename BudgetT = PrivacyBudget>
    CollaborationPrivacyBudgetSummary& WithBudget(BudgetT&& value) { SetBudget(std::forward<BudgetT>(value)); return *this;}
    ///@}
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

    PrivacyBudgetType m_type{PrivacyBudgetType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    PrivacyBudget m_budget;
    bool m_budgetHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
