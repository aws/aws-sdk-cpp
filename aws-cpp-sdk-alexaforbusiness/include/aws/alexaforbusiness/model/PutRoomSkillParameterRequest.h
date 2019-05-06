/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/AlexaForBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/alexaforbusiness/model/RoomSkillParameter.h>
#include <utility>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

  /**
   */
  class AWS_ALEXAFORBUSINESS_API PutRoomSkillParameterRequest : public AlexaForBusinessRequest
  {
  public:
    PutRoomSkillParameterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRoomSkillParameter"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline bool RoomArnHasBeenSet() const { return m_roomArnHasBeenSet; }

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArnHasBeenSet = true; m_roomArn = value; }

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArnHasBeenSet = true; m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArnHasBeenSet = true; m_roomArn.assign(value); }

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room associated with the room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline const Aws::String& GetSkillId() const{ return m_skillId; }

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline bool SkillIdHasBeenSet() const { return m_skillIdHasBeenSet; }

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline void SetSkillId(const Aws::String& value) { m_skillIdHasBeenSet = true; m_skillId = value; }

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline void SetSkillId(Aws::String&& value) { m_skillIdHasBeenSet = true; m_skillId = std::move(value); }

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline void SetSkillId(const char* value) { m_skillIdHasBeenSet = true; m_skillId.assign(value); }

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithSkillId(const Aws::String& value) { SetSkillId(value); return *this;}

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithSkillId(Aws::String&& value) { SetSkillId(std::move(value)); return *this;}

    /**
     * <p>The ARN of the skill associated with the room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithSkillId(const char* value) { SetSkillId(value); return *this;}


    /**
     * <p>The updated room skill parameter. Required.</p>
     */
    inline const RoomSkillParameter& GetRoomSkillParameter() const{ return m_roomSkillParameter; }

    /**
     * <p>The updated room skill parameter. Required.</p>
     */
    inline bool RoomSkillParameterHasBeenSet() const { return m_roomSkillParameterHasBeenSet; }

    /**
     * <p>The updated room skill parameter. Required.</p>
     */
    inline void SetRoomSkillParameter(const RoomSkillParameter& value) { m_roomSkillParameterHasBeenSet = true; m_roomSkillParameter = value; }

    /**
     * <p>The updated room skill parameter. Required.</p>
     */
    inline void SetRoomSkillParameter(RoomSkillParameter&& value) { m_roomSkillParameterHasBeenSet = true; m_roomSkillParameter = std::move(value); }

    /**
     * <p>The updated room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithRoomSkillParameter(const RoomSkillParameter& value) { SetRoomSkillParameter(value); return *this;}

    /**
     * <p>The updated room skill parameter. Required.</p>
     */
    inline PutRoomSkillParameterRequest& WithRoomSkillParameter(RoomSkillParameter&& value) { SetRoomSkillParameter(std::move(value)); return *this;}

  private:

    Aws::String m_roomArn;
    bool m_roomArnHasBeenSet;

    Aws::String m_skillId;
    bool m_skillIdHasBeenSet;

    RoomSkillParameter m_roomSkillParameter;
    bool m_roomSkillParameterHasBeenSet;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
