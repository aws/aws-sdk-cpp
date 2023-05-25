/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AssociateSkillGroupWithRoomRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API AssociateSkillGroupWithRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateSkillGroupWithRoom"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline const Aws::String& GetSkillGroupArn() const{ return m_skillGroupArn; }

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline bool SkillGroupArnHasBeenSet() const { return m_skillGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline void SetSkillGroupArn(const Aws::String& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = value; }

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline void SetSkillGroupArn(Aws::String&& value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn = std::move(value); }

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline void SetSkillGroupArn(const char* value) { m_skillGroupArnHasBeenSet = true; m_skillGroupArn.assign(value); }

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline AssociateSkillGroupWithRoomRequest& WithSkillGroupArn(const Aws::String& value) { SetSkillGroupArn(value); return *this;}

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline AssociateSkillGroupWithRoomRequest& WithSkillGroupArn(Aws::String&& value) { SetSkillGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill group to associate with a room. Required.</p>
     */
    inline AssociateSkillGroupWithRoomRequest& WithSkillGroupArn(const char* value) { SetSkillGroupArn(value); return *this;}


    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline AssociateSkillGroupWithRoomRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline AssociateSkillGroupWithRoomRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room with which to associate the skill group. Required.</p>
     */
    inline AssociateSkillGroupWithRoomRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}

  private:

    Aws::String m_skillGroupArn;
    bool m_skillGroupArnHasBeenSet = false;

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
