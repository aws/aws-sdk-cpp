/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeGameSessionDetailsRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeGameSessionDetailsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGameSessionDetails"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to retrieve all game sessions active on the
     * fleet. You can use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    DescribeGameSessionDetailsRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the game session to retrieve. </p>
     */
    inline const Aws::String& GetGameSessionId() const { return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    template<typename GameSessionIdT = Aws::String>
    void SetGameSessionId(GameSessionIdT&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::forward<GameSessionIdT>(value); }
    template<typename GameSessionIdT = Aws::String>
    DescribeGameSessionDetailsRequest& WithGameSessionId(GameSessionIdT&& value) { SetGameSessionId(std::forward<GameSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the alias associated with the fleet to retrieve all
     * game sessions for. You can use either the alias ID or ARN value.</p>
     */
    inline const Aws::String& GetAliasId() const { return m_aliasId; }
    inline bool AliasIdHasBeenSet() const { return m_aliasIdHasBeenSet; }
    template<typename AliasIdT = Aws::String>
    void SetAliasId(AliasIdT&& value) { m_aliasIdHasBeenSet = true; m_aliasId = std::forward<AliasIdT>(value); }
    template<typename AliasIdT = Aws::String>
    DescribeGameSessionDetailsRequest& WithAliasId(AliasIdT&& value) { SetAliasId(std::forward<AliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fleet location to get game session details for. You can specify a fleet's
     * home Region or a remote location. Use the Amazon Web Services Region code
     * format, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    DescribeGameSessionDetailsRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Game session status to filter results on. Possible game session statuses
     * include <code>ACTIVE</code>, <code>TERMINATED</code>, <code>ACTIVATING</code>
     * and <code>TERMINATING</code> (the last two are transitory). </p>
     */
    inline const Aws::String& GetStatusFilter() const { return m_statusFilter; }
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    template<typename StatusFilterT = Aws::String>
    void SetStatusFilter(StatusFilterT&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::forward<StatusFilterT>(value); }
    template<typename StatusFilterT = Aws::String>
    DescribeGameSessionDetailsRequest& WithStatusFilter(StatusFilterT&& value) { SetStatusFilter(std::forward<StatusFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeGameSessionDetailsRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeGameSessionDetailsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    Aws::String m_aliasId;
    bool m_aliasIdHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_statusFilter;
    bool m_statusFilterHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
