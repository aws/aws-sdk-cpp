/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PlayerSession.h>
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
namespace GameLift
{
namespace Model
{
  class CreatePlayerSessionResult
  {
  public:
    AWS_GAMELIFT_API CreatePlayerSessionResult();
    AWS_GAMELIFT_API CreatePlayerSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreatePlayerSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline const PlayerSession& GetPlayerSession() const{ return m_playerSession; }
    inline void SetPlayerSession(const PlayerSession& value) { m_playerSession = value; }
    inline void SetPlayerSession(PlayerSession&& value) { m_playerSession = std::move(value); }
    inline CreatePlayerSessionResult& WithPlayerSession(const PlayerSession& value) { SetPlayerSession(value); return *this;}
    inline CreatePlayerSessionResult& WithPlayerSession(PlayerSession&& value) { SetPlayerSession(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePlayerSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePlayerSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePlayerSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PlayerSession m_playerSession;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
