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
  class AWS_CHIME_API UpdateRoomResult
  {
  public:
    UpdateRoomResult();
    UpdateRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline UpdateRoomResult& WithRoom(const Room& value) { SetRoom(value); return *this;}

    /**
     * <p>The room details.</p>
     */
    inline UpdateRoomResult& WithRoom(Room&& value) { SetRoom(std::move(value)); return *this;}

  private:

    Room m_room;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
