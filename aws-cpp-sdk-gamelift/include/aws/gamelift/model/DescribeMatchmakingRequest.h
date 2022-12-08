/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeMatchmakingRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeMatchmakingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMatchmaking"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTicketIds() const{ return m_ticketIds; }

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline bool TicketIdsHasBeenSet() const { return m_ticketIdsHasBeenSet; }

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline void SetTicketIds(const Aws::Vector<Aws::String>& value) { m_ticketIdsHasBeenSet = true; m_ticketIds = value; }

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline void SetTicketIds(Aws::Vector<Aws::String>&& value) { m_ticketIdsHasBeenSet = true; m_ticketIds = std::move(value); }

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline DescribeMatchmakingRequest& WithTicketIds(const Aws::Vector<Aws::String>& value) { SetTicketIds(value); return *this;}

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline DescribeMatchmakingRequest& WithTicketIds(Aws::Vector<Aws::String>&& value) { SetTicketIds(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline DescribeMatchmakingRequest& AddTicketIds(const Aws::String& value) { m_ticketIdsHasBeenSet = true; m_ticketIds.push_back(value); return *this; }

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline DescribeMatchmakingRequest& AddTicketIds(Aws::String&& value) { m_ticketIdsHasBeenSet = true; m_ticketIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A unique identifier for a matchmaking ticket. You can include up to 10 ID
     * values. </p>
     */
    inline DescribeMatchmakingRequest& AddTicketIds(const char* value) { m_ticketIdsHasBeenSet = true; m_ticketIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ticketIds;
    bool m_ticketIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
