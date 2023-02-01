/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PlayerSession.h>
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


    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline const PlayerSession& GetPlayerSession() const{ return m_playerSession; }

    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline void SetPlayerSession(const PlayerSession& value) { m_playerSession = value; }

    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline void SetPlayerSession(PlayerSession&& value) { m_playerSession = std::move(value); }

    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline CreatePlayerSessionResult& WithPlayerSession(const PlayerSession& value) { SetPlayerSession(value); return *this;}

    /**
     * <p>Object that describes the newly created player session record.</p>
     */
    inline CreatePlayerSessionResult& WithPlayerSession(PlayerSession&& value) { SetPlayerSession(std::move(value)); return *this;}

  private:

    PlayerSession m_playerSession;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
