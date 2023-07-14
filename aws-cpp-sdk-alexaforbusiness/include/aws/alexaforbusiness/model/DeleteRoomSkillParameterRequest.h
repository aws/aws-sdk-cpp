﻿/**
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
  class AWS_ALEXAFORBUSINESS_API DeleteRoomSkillParameterRequest : public AlexaForBusinessRequest
  {
  public:
    DeleteRoomSkillParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRoomSkillParameter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room from which to remove the room skill parameter
     * details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline bool SkillIdHasBeenSet() const { return m_skillIdHasBeenSet; }

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The ID of the skill from which to remove the room skill parameter
     * details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithSkillId(const char* value) { SetSkillId(value); return *this;}


    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::move(value); }

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithParameterKey(Aws::String&& value) { SetParameterKey(std::move(value)); return *this;}

    /**
     * <p>The room skill parameter key for which to remove details.</p>
     */
    inline DeleteRoomSkillParameterRequest& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}

  private:

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet;

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet;

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
