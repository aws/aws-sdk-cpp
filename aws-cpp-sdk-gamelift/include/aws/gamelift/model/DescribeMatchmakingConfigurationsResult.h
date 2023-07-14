﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/MatchmakingConfiguration.h>
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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingConfigurationsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeMatchmakingConfigurationsResult
  {
  public:
    DescribeMatchmakingConfigurationsResult();
    DescribeMatchmakingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMatchmakingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline const Aws::Vector<MatchmakingConfiguration>& GetConfigurations() const{ return m_configurations; }

    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline void SetConfigurations(const Aws::Vector<MatchmakingConfiguration>& value) { m_configurations = value; }

    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline void SetConfigurations(Aws::Vector<MatchmakingConfiguration>&& value) { m_configurations = std::move(value); }

    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& WithConfigurations(const Aws::Vector<MatchmakingConfiguration>& value) { SetConfigurations(value); return *this;}

    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& WithConfigurations(Aws::Vector<MatchmakingConfiguration>&& value) { SetConfigurations(std::move(value)); return *this;}

    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& AddConfigurations(const MatchmakingConfiguration& value) { m_configurations.push_back(value); return *this; }

    /**
     * <p>A collection of requested matchmaking configurations.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& AddConfigurations(MatchmakingConfiguration&& value) { m_configurations.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeMatchmakingConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MatchmakingConfiguration> m_configurations;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
