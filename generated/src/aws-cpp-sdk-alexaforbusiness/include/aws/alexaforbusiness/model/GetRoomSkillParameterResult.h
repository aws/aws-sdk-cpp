/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetRoomSkillParameterResult
  {
  public:
    AWS_ALEXAFORBUSINESS_API GetRoomSkillParameterResult();
    AWS_ALEXAFORBUSINESS_API GetRoomSkillParameterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ALEXAFORBUSINESS_API GetRoomSkillParameterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
