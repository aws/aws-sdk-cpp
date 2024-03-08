/**
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
   * <p>Details about the configured audience model association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ConfiguredAudienceModelAssociation">AWS
   * API Reference</a></p>
   */
  class ConfiguredAudienceModelAssociation
  {
  public:
    AWS_CLEANROOMS_API ConfiguredAudienceModelAssociation();
    AWS_CLEANROOMS_API ConfiguredAudienceModelAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ConfiguredAudienceModelAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model
     * association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline const Aws::String& GetConfiguredAudienceModelArn() const{ return m_configuredAudienceModelArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline bool ConfiguredAudienceModelArnHasBeenSet() const { return m_configuredAudienceModelArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelArn(const Aws::String& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelArn(Aws::String&& value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline void SetConfiguredAudienceModelArn(const char* value) { m_configuredAudienceModelArnHasBeenSet = true; m_configuredAudienceModelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithConfiguredAudienceModelArn(const Aws::String& value) { SetConfiguredAudienceModelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithConfiguredAudienceModelArn(Aws::String&& value) { SetConfiguredAudienceModelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configured audience model that was used
     * for this configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithConfiguredAudienceModelArn(const char* value) { SetConfiguredAudienceModelArn(value); return *this;}


    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the membership that contains this configured audience
     * model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the membership that contains this
     * configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}


    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline const Aws::String& GetCollaborationId() const{ return m_collaborationId; }

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline bool CollaborationIdHasBeenSet() const { return m_collaborationIdHasBeenSet; }

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline void SetCollaborationId(const Aws::String& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = value; }

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline void SetCollaborationId(Aws::String&& value) { m_collaborationIdHasBeenSet = true; m_collaborationId = std::move(value); }

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline void SetCollaborationId(const char* value) { m_collaborationIdHasBeenSet = true; m_collaborationId.assign(value); }

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCollaborationId(const Aws::String& value) { SetCollaborationId(value); return *this;}

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCollaborationId(Aws::String&& value) { SetCollaborationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier of the collaboration that contains this configured
     * audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCollaborationId(const char* value) { SetCollaborationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline const Aws::String& GetCollaborationArn() const{ return m_collaborationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline bool CollaborationArnHasBeenSet() const { return m_collaborationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline void SetCollaborationArn(const Aws::String& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline void SetCollaborationArn(Aws::String&& value) { m_collaborationArnHasBeenSet = true; m_collaborationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline void SetCollaborationArn(const char* value) { m_collaborationArnHasBeenSet = true; m_collaborationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCollaborationArn(const Aws::String& value) { SetCollaborationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCollaborationArn(Aws::String&& value) { SetCollaborationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the collaboration that contains this
     * configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCollaborationArn(const char* value) { SetCollaborationArn(value); return *this;}


    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p>
     */
    inline bool GetManageResourcePolicies() const{ return m_manageResourcePolicies; }

    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p>
     */
    inline bool ManageResourcePoliciesHasBeenSet() const { return m_manageResourcePoliciesHasBeenSet; }

    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p>
     */
    inline void SetManageResourcePolicies(bool value) { m_manageResourcePoliciesHasBeenSet = true; m_manageResourcePolicies = value; }

    /**
     * <p>When <code>TRUE</code>, indicates that the resource policy for the configured
     * audience model resource being associated is configured for Clean Rooms to manage
     * permissions related to the given collaboration. When <code>FALSE</code>,
     * indicates that the configured audience model resource owner will manage
     * permissions related to the given collaboration.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithManageResourcePolicies(bool value) { SetManageResourcePolicies(value); return *this;}


    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the configured audience model association.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time at which the configured audience model association was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the configured audience model association was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the configured audience model association was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the configured audience model association was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the configured audience model association was created.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the configured audience model association was created.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The most recent time at which the configured audience model association was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The most recent time at which the configured audience model association was
     * updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The most recent time at which the configured audience model association was
     * updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The most recent time at which the configured audience model association was
     * updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The most recent time at which the configured audience model association was
     * updated.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The most recent time at which the configured audience model association was
     * updated.</p>
     */
    inline ConfiguredAudienceModelAssociation& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_configuredAudienceModelArn;
    bool m_configuredAudienceModelArnHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;

    Aws::String m_collaborationId;
    bool m_collaborationIdHasBeenSet = false;

    Aws::String m_collaborationArn;
    bool m_collaborationArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_manageResourcePolicies;
    bool m_manageResourcePoliciesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
