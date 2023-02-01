/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Room.h>
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
  class CreateRoomResult
  {
  public:
    AWS_CHIME_API CreateRoomResult();
    AWS_CHIME_API CreateRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The room details.</p>
     */
    inline const Room& GetRoom() const{ return m_room; }

    /**
     * <p>The room details.</p>
     */
    inline void SetRoom(const Room& value) { m_room = value; }

    /**
     * <p>The room details.</p>
     */
    inline void SetRoom(Room&& value) { m_room = std::move(value); }

    /**
     * <p>The room details.</p>
     */
    inline CreateRoomResult& WithRoom(const Room& value) { SetRoom(value); return *this;}

    /**
     * <p>The room details.</p>
     */
    inline CreateRoomResult& WithRoom(Room&& value) { SetRoom(std::move(value)); return *this;}

  private:

    Room m_room;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
