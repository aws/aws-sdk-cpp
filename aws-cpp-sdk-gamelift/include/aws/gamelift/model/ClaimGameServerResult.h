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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameServer.h>
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
  class AWS_GAMELIFT_API ClaimGameServerResult
  {
  public:
    ClaimGameServerResult();
    ClaimGameServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ClaimGameServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Object that describes the newly claimed game server resource.</p>
     */
    inline const GameServer& GetGameServer() const{ return m_gameServer; }

    /**
     * <p>Object that describes the newly claimed game server resource.</p>
     */
    inline void SetGameServer(const GameServer& value) { m_gameServer = value; }

    /**
     * <p>Object that describes the newly claimed game server resource.</p>
     */
    inline void SetGameServer(GameServer&& value) { m_gameServer = std::move(value); }

    /**
     * <p>Object that describes the newly claimed game server resource.</p>
     */
    inline ClaimGameServerResult& WithGameServer(const GameServer& value) { SetGameServer(value); return *this;}

    /**
     * <p>Object that describes the newly claimed game server resource.</p>
     */
    inline ClaimGameServerResult& WithGameServer(GameServer&& value) { SetGameServer(std::move(value)); return *this;}

  private:

    GameServer m_gameServer;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
