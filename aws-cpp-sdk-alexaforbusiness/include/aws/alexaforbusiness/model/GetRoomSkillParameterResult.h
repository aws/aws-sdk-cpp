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
  class AWS_ALEXAFORBUSINESS_API GetRoomSkillParameterResult
  {
  public:
    GetRoomSkillParameterResult();
    GetRoomSkillParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRoomSkillParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the room skill parameter requested. Required.</p>
     */
    inline const RoomSkillParameter& GetRoomSkillParameter() const{ return m_roomSkillParameter; }

    /**
     * <p>The details of the room skill parameter requested. Required.</p>
     */
    inline void SetRoomSkillParameter(const RoomSkillParameter& value) { m_roomSkillParameter = value; }

    /**
     * <p>The details of the room skill parameter requested. Required.</p>
     */
    inline void SetRoomSkillParameter(RoomSkillParameter&& value) { m_roomSkillParameter = std::move(value); }

    /**
     * <p>The details of the room skill parameter requested. Required.</p>
     */
    inline GetRoomSkillParameterResult& WithRoomSkillParameter(const RoomSkillParameter& value) { SetRoomSkillParameter(value); return *this;}

    /**
     * <p>The details of the room skill parameter requested. Required.</p>
     */
    inline GetRoomSkillParameterResult& WithRoomSkillParameter(RoomSkillParameter&& value) { SetRoomSkillParameter(std::move(value)); return *this;}

  private:

    RoomSkillParameter m_roomSkillParameter;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
