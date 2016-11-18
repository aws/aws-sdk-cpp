﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/gamelift/model/PlayerSession.h>

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
  /**
   * <p>Represents the returned data in response to a request action.</p>
   */
  class AWS_GAMELIFT_API CreatePlayerSessionResult
  {
  public:
    CreatePlayerSessionResult();
    CreatePlayerSessionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreatePlayerSessionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Object containing the newly created player session record.</p>
     */
    inline const PlayerSession& GetPlayerSession() const{ return m_playerSession; }

    /**
     * <p>Object containing the newly created player session record.</p>
     */
    inline void SetPlayerSession(const PlayerSession& value) { m_playerSession = value; }

    /**
     * <p>Object containing the newly created player session record.</p>
     */
    inline void SetPlayerSession(PlayerSession&& value) { m_playerSession = value; }

    /**
     * <p>Object containing the newly created player session record.</p>
     */
    inline CreatePlayerSessionResult& WithPlayerSession(const PlayerSession& value) { SetPlayerSession(value); return *this;}

    /**
     * <p>Object containing the newly created player session record.</p>
     */
    inline CreatePlayerSessionResult& WithPlayerSession(PlayerSession&& value) { SetPlayerSession(value); return *this;}

  private:
    PlayerSession m_playerSession;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
