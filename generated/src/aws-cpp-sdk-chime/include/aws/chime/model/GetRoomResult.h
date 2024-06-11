﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Room.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetRoomResult
  {
  public:
    AWS_CHIME_API GetRoomResult();
    AWS_CHIME_API GetRoomResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetRoomResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The room details.</p>
     */
    inline const Room& GetRoom() const{ return m_room; }
    inline void SetRoom(const Room& value) { m_room = value; }
    inline void SetRoom(Room&& value) { m_room = std::move(value); }
    inline GetRoomResult& WithRoom(const Room& value) { SetRoom(value); return *this;}
    inline GetRoomResult& WithRoom(Room&& value) { SetRoom(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRoomResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRoomResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRoomResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Room m_room;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
