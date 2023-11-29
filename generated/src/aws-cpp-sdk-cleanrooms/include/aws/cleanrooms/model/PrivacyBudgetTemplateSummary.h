/**
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
   * <p>A summary of the privacy budget template. The summary includes membership
   * information, collaboration information, and creation information.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/PrivacyBudgetTemplateSummary">AWS
   * API Reference</a></p>
   */
  class PrivacyBudgetTemplateSummary
  {
  public:
    AWS_CLEANROOMS_API PrivacyBudgetTemplateSummary();
    AWS_CLEANROOMS_API PrivacyBudgetTemplateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API PrivacyBudgetTemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a membership resource.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the member who created the privacy budget
     * template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}


    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the collaboration that contains this privacy budget
     * template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the collaboration that contains this privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}


    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline const PrivacyBudgetType& GetPrivacyBudgetType() const{ return m_privacyBudgetType; }

    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline bool PrivacyBudgetTypeHasBeenSet() const { return m_privacyBudgetTypeHasBeenSet; }

    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetType(const PrivacyBudgetType& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = value; }

    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline void SetPrivacyBudgetType(PrivacyBudgetType&& value) { m_privacyBudgetTypeHasBeenSet = true; m_privacyBudgetType = std::move(value); }

    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithPrivacyBudgetType(const PrivacyBudgetType& value) { SetPrivacyBudgetType(value); return *this;}

    /**
     * <p>The type of the privacy budget template.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithPrivacyBudgetType(PrivacyBudgetType&& value) { SetPrivacyBudgetType(std::move(value)); return *this;}


    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the privacy budget template was created.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the privacy budget template was updated.</p>
     */
    inline PrivacyBudgetTemplateSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

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
