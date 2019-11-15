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
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/RoomMembership.h>
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
namespace Chime
{
namespace Model
{
  class AWS_CHIME_API UpdateRoomMembershipResult
  {
  public:
    UpdateRoomMembershipResult();
    UpdateRoomMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRoomMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The room membership details.</p>
     */
    inline const RoomMembership& GetRoomMembership() const{ return m_roomMembership; }

    /**
     * <p>The room membership details.</p>
     */
    inline void SetRoomMembership(const RoomMembership& value) { m_roomMembership = value; }

    /**
     * <p>The room membership details.</p>
     */
    inline void SetRoomMembership(RoomMembership&& value) { m_roomMembership = std::move(value); }

    /**
     * <p>The room membership details.</p>
     */
    inline UpdateRoomMembershipResult& WithRoomMembership(const RoomMembership& value) { SetRoomMembership(value); return *this;}

    /**
     * <p>The room membership details.</p>
     */
    inline UpdateRoomMembershipResult& WithRoomMembership(RoomMembership&& value) { SetRoomMembership(std::move(value)); return *this;}

  private:

    RoomMembership m_roomMembership;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
