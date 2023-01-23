/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateRoomMembershipResult
  {
  public:
    AWS_CHIME_API CreateRoomMembershipResult();
    AWS_CHIME_API CreateRoomMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateRoomMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateRoomMembershipResult& WithRoomMembership(const RoomMembership& value) { SetRoomMembership(value); return *this;}

    /**
     * <p>The room membership details.</p>
     */
    inline CreateRoomMembershipResult& WithRoomMembership(RoomMembership&& value) { SetRoomMembership(std::move(value)); return *this;}

  private:

    RoomMembership m_roomMembership;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
