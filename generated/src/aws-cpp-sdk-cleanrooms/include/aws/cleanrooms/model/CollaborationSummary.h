/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cleanrooms/model/MemberStatus.h>
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
   * <p>The metadata of the collaboration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/CollaborationSummary">AWS
   * API Reference</a></p>
   */
  class CollaborationSummary
  {
  public:
    AWS_CLEANROOMS_API CollaborationSummary();
    AWS_CLEANROOMS_API CollaborationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API CollaborationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline CollaborationSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline CollaborationSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the collaboration.</p>
     */
    inline CollaborationSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline CollaborationSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline CollaborationSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the collaboration.</p>
     */
    inline CollaborationSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline CollaborationSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline CollaborationSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A human-readable identifier provided by the collaboration owner. Display
     * names are not unique.</p>
     */
    inline CollaborationSummary& WithName(const char* value) { SetName(value); return *this;}


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
    inline CollaborationSummary& WithCreatorAccountId(const Aws::String& value) { SetCreatorAccountId(value); return *this;}

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline CollaborationSummary& WithCreatorAccountId(Aws::String&& value) { SetCreatorAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline CollaborationSummary& WithCreatorAccountId(const char* value) { SetCreatorAccountId(value); return *this;}


    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline const Aws::String& GetCreatorDisplayName() const{ return m_creatorDisplayName; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline bool CreatorDisplayNameHasBeenSet() const { return m_creatorDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCreatorDisplayName(const Aws::String& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = value; }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCreatorDisplayName(Aws::String&& value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName = std::move(value); }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline void SetCreatorDisplayName(const char* value) { m_creatorDisplayNameHasBeenSet = true; m_creatorDisplayName.assign(value); }

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline CollaborationSummary& WithCreatorDisplayName(const Aws::String& value) { SetCreatorDisplayName(value); return *this;}

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline CollaborationSummary& WithCreatorDisplayName(Aws::String&& value) { SetCreatorDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the collaboration creator.</p>
     */
    inline CollaborationSummary& WithCreatorDisplayName(const char* value) { SetCreatorDisplayName(value); return *this;}


    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline CollaborationSummary& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time when the collaboration was created.</p>
     */
    inline CollaborationSummary& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline CollaborationSummary& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>The time the collaboration metadata was last updated.</p>
     */
    inline CollaborationSummary& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline const MemberStatus& GetMemberStatus() const{ return m_memberStatus; }

    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }

    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline void SetMemberStatus(const MemberStatus& value) { m_memberStatusHasBeenSet = true; m_memberStatus = value; }

    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline void SetMemberStatus(MemberStatus&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::move(value); }

    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMemberStatus(const MemberStatus& value) { SetMemberStatus(value); return *this;}

    /**
     * <p>The status of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMemberStatus(MemberStatus&& value) { SetMemberStatus(std::move(value)); return *this;}


    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}


    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline const Aws::String& GetMembershipArn() const{ return m_membershipArn; }

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline bool MembershipArnHasBeenSet() const { return m_membershipArnHasBeenSet; }

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline void SetMembershipArn(const Aws::String& value) { m_membershipArnHasBeenSet = true; m_membershipArn = value; }

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline void SetMembershipArn(Aws::String&& value) { m_membershipArnHasBeenSet = true; m_membershipArn = std::move(value); }

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline void SetMembershipArn(const char* value) { m_membershipArnHasBeenSet = true; m_membershipArn.assign(value); }

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMembershipArn(const Aws::String& value) { SetMembershipArn(value); return *this;}

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMembershipArn(Aws::String&& value) { SetMembershipArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a member in a collaboration.</p>
     */
    inline CollaborationSummary& WithMembershipArn(const char* value) { SetMembershipArn(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    Aws::String m_creatorDisplayName;
    bool m_creatorDisplayNameHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    MemberStatus m_memberStatus;
    bool m_memberStatusHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_membershipArn;
    bool m_membershipArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
