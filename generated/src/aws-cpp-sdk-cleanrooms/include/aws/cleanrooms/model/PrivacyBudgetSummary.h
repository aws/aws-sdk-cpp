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
   * <p>An array that summaries the specified privacy budget. This summary includes
   * collaboration information, creation information, membership information, and
   * privacy budget information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetSummary">AWS
   * API Reference</a></p>
   */
  class PrivacyBudgetSummary
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudgetSummary();
    AWS_CLEANROOMS_API PrivacyBudgetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the privacy budget.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PrivacyBudgetSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PrivacyBudgetSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateId() const{ return m_privacyBudgetTemplateId; }
    inline bool PrivacyBudgetTemplateIdHasBeenSet() const { return m_privacyBudgetTemplateIdHasBeenSet; }
    inline void SetPrivacyBudgetTemplateId(const Aws::String& value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId = value; }
    inline void SetPrivacyBudgetTemplateId(Aws::String&& value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId = std::move(value); }
    inline void SetPrivacyBudgetTemplateId(const char* value) { m_privacyBudgetTemplateIdHasBeenSet = true; m_privacyBudgetTemplateId.assign(value); }
    inline PrivacyBudgetSummary& WithPrivacyBudgetTemplateId(const Aws::String& value) { SetPrivacyBudgetTemplateId(value); return *this;}
    inline PrivacyBudgetSummary& WithPrivacyBudgetTemplateId(Aws::String&& value) { SetPrivacyBudgetTemplateId(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithPrivacyBudgetTemplateId(const char* value) { SetPrivacyBudgetTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline const Aws::String& GetPrivacyBudgetTemplateArn() const{ return m_privacyBudgetTemplateArn; }
    inline bool PrivacyBudgetTemplateArnHasBeenSet() const { return m_privacyBudgetTemplateArnHasBeenSet; }
    inline void SetPrivacyBudgetTemplateArn(const Aws::String& value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn = value; }
    inline void SetPrivacyBudgetTemplateArn(Aws::String&& value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn = std::move(value); }
    inline void SetPrivacyBudgetTemplateArn(const char* value) { m_privacyBudgetTemplateArnHasBeenSet = true; m_privacyBudgetTemplateArn.assign(value); }
    inline PrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(const Aws::String& value) { SetPrivacyBudgetTemplateArn(value); return *this;}
    inline PrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(Aws::String&& value) { SetPrivacyBudgetTemplateArn(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithPrivacyBudgetTemplateArn(const char* value) { SetPrivacyBudgetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline PrivacyBudgetSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline PrivacyBudgetSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * summary.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline PrivacyBudgetSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline PrivacyBudgetSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the collaboration that contains this privacy
     * budget.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }
    inline PrivacyBudgetSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline PrivacyBudgetSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collaboration that contains this privacy budget.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }
    inline PrivacyBudgetSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline PrivacyBudgetSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline PrivacyBudgetSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the privacy budget.</p>
     */
    inline const PrivacyBudgetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const PrivacyBudgetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(PrivacyBudgetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PrivacyBudgetSummary& WithType(const PrivacyBudgetType& value) { SetType(value); return *this;}
    inline PrivacyBudgetSummary& WithType(PrivacyBudgetType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the privacy budget was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline PrivacyBudgetSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline PrivacyBudgetSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the privacy budget was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline PrivacyBudgetSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline PrivacyBudgetSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provided privacy budget.</p>
     */
    inline const PrivacyBudget& GetBudget() const{ return m_budget; }
    inline bool BudgetHasBeenSet() const { return m_budgetHasBeenSet; }
    inline void SetBudget(const PrivacyBudget& value) { m_budgetHasBeenSet = true; m_budget = value; }
    inline void SetBudget(PrivacyBudget&& value) { m_budgetHasBeenSet = true; m_budget = std::move(value); }
    inline PrivacyBudgetSummary& WithBudget(const PrivacyBudget& value) { SetBudget(value); return *this;}
    inline PrivacyBudgetSummary& WithBudget(PrivacyBudget&& value) { SetBudget(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateId;
    bool m_privacyBudgetTemplateIdHasBeenSet = false;

    Aws::String m_privacyBudgetTemplateArn;
    bool m_privacyBudgetTemplateArnHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

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
