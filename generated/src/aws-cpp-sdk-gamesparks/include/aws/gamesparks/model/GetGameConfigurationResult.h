/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/gamesparks/model/GameConfigurationDetails.h>
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
namespace GameSparks
{
namespace Model
{
  class GetGameConfigurationResult
  {
  public:
    AWS_GAMESPARKS_API GetGameConfigurationResult();
    AWS_GAMESPARKS_API GetGameConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMESPARKS_API GetGameConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the game configuration.</p>
     */
    inline const GameConfigurationDetails& GetGameConfiguration() const{ return m_gameConfiguration; }

    /**
     * <p>Details about the game configuration.</p>
     */
    inline void SetGameConfiguration(const GameConfigurationDetails& value) { m_gameConfiguration = value; }

    /**
     * <p>Details about the game configuration.</p>
     */
    inline void SetGameConfiguration(GameConfigurationDetails&& value) { m_gameConfiguration = std::move(value); }

    /**
     * <p>Details about the game configuration.</p>
     */
    inline GetGameConfigurationResult& WithGameConfiguration(const GameConfigurationDetails& value) { SetGameConfiguration(value); return *this;}

    /**
     * <p>Details about the game configuration.</p>
     */
    inline GetGameConfigurationResult& WithGameConfiguration(GameConfigurationDetails&& value) { SetGameConfiguration(std::move(value)); return *this;}

  private:

    GameConfigurationDetails m_gameConfiguration;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
