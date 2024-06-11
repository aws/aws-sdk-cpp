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
  class StopMatchmakingRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API StopMatchmakingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopMatchmaking"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a matchmaking ticket.</p>
     */
    inline const Aws::String& GetTicketId() const{ return m_ticketId; }
    inline bool TicketIdHasBeenSet() const { return m_ticketIdHasBeenSet; }
    inline void SetTicketId(const Aws::String& value) { m_ticketIdHasBeenSet = true; m_ticketId = value; }
    inline void SetTicketId(Aws::String&& value) { m_ticketIdHasBeenSet = true; m_ticketId = std::move(value); }
    inline void SetTicketId(const char* value) { m_ticketIdHasBeenSet = true; m_ticketId.assign(value); }
    inline StopMatchmakingRequest& WithTicketId(const Aws::String& value) { SetTicketId(value); return *this;}
    inline StopMatchmakingRequest& WithTicketId(Aws::String&& value) { SetTicketId(std::move(value)); return *this;}
    inline StopMatchmakingRequest& WithTicketId(const char* value) { SetTicketId(value); return *this;}
    ///@}
  private:

    Aws::String m_ticketId;
    bool m_ticketIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
