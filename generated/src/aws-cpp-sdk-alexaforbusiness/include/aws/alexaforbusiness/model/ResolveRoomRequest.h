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
  class ResolveRoomRequest : public AlexaForBusinessRequest
  {
  public:
    AWS_ALEXAFORBUSINESS_API ResolveRoomRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResolveRoom"; }

    AWS_ALEXAFORBUSINESS_API Aws::String SerializePayload() const override;

    AWS_ALEXAFORBUSINESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline ResolveRoomRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline ResolveRoomRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user. Required.</p>
     */
    inline ResolveRoomRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline bool SkillIdHasBeenSet() const { return m_skillIdHasBeenSet; }

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline ResolveRoomRequest& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline ResolveRoomRequest& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill that was requested. Required.</p>
     */
    inline ResolveRoomRequest& WithSkillId(const char* value) { SetSkillId(value); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
