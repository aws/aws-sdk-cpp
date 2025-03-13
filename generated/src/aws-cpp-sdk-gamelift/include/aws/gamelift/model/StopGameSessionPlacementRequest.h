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
  class StopGameSessionPlacementRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API StopGameSessionPlacementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopGameSessionPlacement"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for a game session placement to stop.</p>
     */
    inline const Aws::String& GetPlacementId() const { return m_placementId; }
    inline bool PlacementIdHasBeenSet() const { return m_placementIdHasBeenSet; }
    template<typename PlacementIdT = Aws::String>
    void SetPlacementId(PlacementIdT&& value) { m_placementIdHasBeenSet = true; m_placementId = std::forward<PlacementIdT>(value); }
    template<typename PlacementIdT = Aws::String>
    StopGameSessionPlacementRequest& WithPlacementId(PlacementIdT&& value) { SetPlacementId(std::forward<PlacementIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_placementId;
    bool m_placementIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
