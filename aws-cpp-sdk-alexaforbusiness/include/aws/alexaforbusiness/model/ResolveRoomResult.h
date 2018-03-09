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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/alexaforbusiness/model/RoomSkillParameter.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AlexaForBusiness
{
namespace Model
{
  class AWS_ALEXAFORBUSINESS_API ResolveRoomResult
  {
  public:
    ResolveRoomResult();
    ResolveRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ResolveRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline const Aws::String& GetRoomArn() const{ return m_roomArn; }

    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline void SetRoomArn(const Aws::String& value) { m_roomArn = value; }

    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline void SetRoomArn(Aws::String&& value) { m_roomArn = std::move(value); }

    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline void SetRoomArn(const char* value) { m_roomArn.assign(value); }

    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline ResolveRoomResult& WithRoomArn(const Aws::String& value) { SetRoomArn(value); return *this;}

    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline ResolveRoomResult& WithRoomArn(Aws::String&& value) { SetRoomArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the room from which the skill request was invoked.</p>
     */
    inline ResolveRoomResult& WithRoomArn(const char* value) { SetRoomArn(value); return *this;}


    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline const Aws::String& GetRoomName() const{ return m_roomName; }

    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline void SetRoomName(const Aws::String& value) { m_roomName = value; }

    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline void SetRoomName(Aws::String&& value) { m_roomName = std::move(value); }

    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline void SetRoomName(const char* value) { m_roomName.assign(value); }

    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline ResolveRoomResult& WithRoomName(const Aws::String& value) { SetRoomName(value); return *this;}

    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline ResolveRoomResult& WithRoomName(Aws::String&& value) { SetRoomName(std::move(value)); return *this;}

    /**
     * <p>The name of the room from which the skill request was invoked.</p>
     */
    inline ResolveRoomResult& WithRoomName(const char* value) { SetRoomName(value); return *this;}


    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline const Aws::Vector<RoomSkillParameter>& GetRoomSkillParameters() const{ return m_roomSkillParameters; }

    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline void SetRoomSkillParameters(const Aws::Vector<RoomSkillParameter>& value) { m_roomSkillParameters = value; }

    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline void SetRoomSkillParameters(Aws::Vector<RoomSkillParameter>&& value) { m_roomSkillParameters = std::move(value); }

    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline ResolveRoomResult& WithRoomSkillParameters(const Aws::Vector<RoomSkillParameter>& value) { SetRoomSkillParameters(value); return *this;}

    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline ResolveRoomResult& WithRoomSkillParameters(Aws::Vector<RoomSkillParameter>&& value) { SetRoomSkillParameters(std::move(value)); return *this;}

    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline ResolveRoomResult& AddRoomSkillParameters(const RoomSkillParameter& value) { m_roomSkillParameters.push_back(value); return *this; }

    /**
     * <p>Response to get the room profile request. Required.</p>
     */
    inline ResolveRoomResult& AddRoomSkillParameters(RoomSkillParameter&& value) { m_roomSkillParameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_roomArn;

    Aws::String m_roomName;

    Aws::Vector<RoomSkillParameter> m_roomSkillParameters;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
