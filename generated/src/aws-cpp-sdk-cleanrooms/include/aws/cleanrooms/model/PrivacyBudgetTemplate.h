/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/PrivacyBudgetType.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateAutoRefresh.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateParametersOutput.h>
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
   * <p>An object that defines the privacy budget template.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetTemplate">AWS
   * API Reference</a></p>
   */
  class PrivacyBudgetTemplate
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudgetTemplate();
    AWS_CLEANROOMS_API PrivacyBudgetTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PrivacyBudgetTemplate& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PrivacyBudgetTemplate& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PrivacyBudgetTemplate& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline PrivacyBudgetTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline PrivacyBudgetTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline PrivacyBudgetTemplate& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline PrivacyBudgetTemplate& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline PrivacyBudgetTemplate& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline PrivacyBudgetTemplate& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }
    inline PrivacyBudgetTemplate& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}
    inline PrivacyBudgetTemplate& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}
    inline PrivacyBudgetTemplate& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }
    inline PrivacyBudgetTemplate& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}
    inline PrivacyBudgetTemplate& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}
    inline PrivacyBudgetTemplate& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }
    inline PrivacyBudgetTemplate& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}
    inline PrivacyBudgetTemplate& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}
    inline PrivacyBudgetTemplate& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline PrivacyBudgetTemplate& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline PrivacyBudgetTemplate& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline PrivacyBudgetTemplate& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline PrivacyBudgetTemplate& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the privacy budget template.</p>
     */
    inline const PrivacyBudgetType& GetPrivacyBudgetType() const{ return m_privacyBudgetType; }
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }
    inline void SetPrivacyBudgetType(const PrivacyBudgetType& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }
    inline void SetPrivacyBudgetType(PrivacyBudgetType&& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = std::move(value); }
    inline PrivacyBudgetTemplate& WithPrivacyBudgetType(const PrivacyBudgetType& value) { SetPrivacyBudgetType(value); return *this;}
    inline PrivacyBudgetTemplate& WithPrivacyBudgetType(PrivacyBudgetType&& value) { SetPrivacyBudgetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How often the privacy budget refreshes.</p>  <p>If you plan to
     * regularly bring new data into the collaboration, use <code>CALENDAR_MONTH</code>
     * to automatically get a new privacy budget for the collaboration every calendar
     * month. Choosing this option allows arbitrary amounts of information to be
     * revealed about rows of the data when repeatedly queried across refreshes. Avoid
     * choosing this if the same rows will be repeatedly queried between privacy budget
     * refreshes.</p> 
     */
    inline const PrivacyBudgetTemplateAutoRefresh& GetAutoRefresh() const{ return m_autoRefresh; }
    inline bool AutoRefreshHasBeenSet() const { return m_autoRefreshHasBeenSet; }
    inline void SetAutoRefresh(const PrivacyBudgetTemplateAutoRefresh& value) { m_autoRefreshHasBeenSet = true; m_autoRefresh = value; }
    inline void SetAutoRefresh(PrivacyBudgetTemplateAutoRefresh&& value) { m_autoRefreshHasBeenSet = true; m_autoRefresh = std::move(value); }
    inline PrivacyBudgetTemplate& WithAutoRefresh(const PrivacyBudgetTemplateAutoRefresh& value) { SetAutoRefresh(value); return *this;}
    inline PrivacyBudgetTemplate& WithAutoRefresh(PrivacyBudgetTemplateAutoRefresh&& value) { SetAutoRefresh(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the epsilon and noise parameters for the privacy budget
     * template.</p>
     */
    inline const PrivacyBudgetTemplateParametersOutput& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const PrivacyBudgetTemplateParametersOutput& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(PrivacyBudgetTemplateParametersOutput&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline PrivacyBudgetTemplate& WithParameters(const PrivacyBudgetTemplateParametersOutput& value) { SetParameters(value); return *this;}
    inline PrivacyBudgetTemplate& WithParameters(PrivacyBudgetTemplateParametersOutput&& value) { SetParameters(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    PrivacyBudgetType m_privacyBudgetType;
    bool m_privacyBudgetTypeHasBeenSet = false;

    PrivacyBudgetTemplateAutoRefresh m_autoRefresh;
    bool m_autoRefreshHasBeenSet = false;

    PrivacyBudgetTemplateParametersOutput m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
