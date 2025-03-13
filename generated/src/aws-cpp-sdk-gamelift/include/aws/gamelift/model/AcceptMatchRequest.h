/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/AcceptanceType.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AcceptMatchRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API AcceptMatchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptMatch"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a matchmaking ticket. The ticket must be in status
     * <code>REQUIRES_ACCEPTANCE</code>; otherwise this request will fail.</p>
     */
    inline const Aws::String& GetTicketId() const { return m_ticketId; }
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }
    template<typename TicketIdT = Aws::String>
    void SetTicketId(TicketIdT&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::forward<TicketIdT>(value); }
    template<typename TicketIdT = Aws::String>
    AcceptMatchRequest& WithTicketId(TicketIdT&& value) { SetTicketId(std::forward<TicketIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a player delivering the response. This parameter can
     * include one or multiple player IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPlayerIds() const { return m_playerIds; }
    inline bool PlayerIdsHasBeenSet() const { return m_playerIdsHasBeenSet; }
    template<typename PlayerIdsT = Aws::Vector<Aws::String>>
    void SetPlayerIds(PlayerIdsT&& value) { m_playerIdsHasBeenSet = true; m_playerIds = std::forward<PlayerIdsT>(value); }
    template<typename PlayerIdsT = Aws::Vector<Aws::String>>
    AcceptMatchRequest& WithPlayerIds(PlayerIdsT&& value) { SetPlayerIds(std::forward<PlayerIdsT>(value)); return *this;}
    template<typename PlayerIdsT = Aws::String>
    AcceptMatchRequest& AddPlayerIds(PlayerIdsT&& value) { m_playerIdsHasBeenSet = true; m_playerIds.emplace_back(std::forward<PlayerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Player response to the proposed match.</p>
     */
    inline AcceptanceType GetAcceptanceType() const { return m_acceptanceType; }
    inline bool AcceptanceTypeHasBeenSet() const { return m_acceptanceTypeHasBeenSet; }
    inline void SetAcceptanceType(AcceptanceType value) { m_acceptanceTypeHasBeenSet = true; m_acceptanceType = value; }
    inline AcceptMatchRequest& WithAcceptanceType(AcceptanceType value) { SetAcceptanceType(value); return *this;}
    ///@}
  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_playerIds;
    bool m_playerIdsHasBeenSet = false;

    AcceptanceType m_acceptanceType{AcceptanceType::NOT_SET};
    bool m_acceptanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
