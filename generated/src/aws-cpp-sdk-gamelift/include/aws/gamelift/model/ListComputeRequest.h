/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ListComputeInputStatus.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class ListComputeRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API ListComputeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCompute"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the fleet to retrieve compute resources for.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    ListComputeRequest& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a location to retrieve compute resources for. For an Amazon
     * GameLift Servers Anywhere fleet, use a custom location. For a managed fleet,
     * provide a Amazon Web Services Region or Local Zone code (for example:
     * <code>us-west-2</code> or <code>us-west-2-lax-1</code>).</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    ListComputeRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For computes in a managed container fleet, the name of the deployed container
     * group definition. </p>
     */
    inline const Aws::String& GetContainerGroupDefinitionName() const { return m_containerGroupDefinitionName; }
    inline bool ContainerGroupDefinitionNameHasBeenSet() const { return m_containerGroupDefinitionNameHasBeenSet; }
    template<typename ContainerGroupDefinitionNameT = Aws::String>
    void SetContainerGroupDefinitionName(ContainerGroupDefinitionNameT&& value) { m_containerGroupDefinitionNameHasBeenSet = true; m_containerGroupDefinitionName = std::forward<ContainerGroupDefinitionNameT>(value); }
    template<typename ContainerGroupDefinitionNameT = Aws::String>
    ListComputeRequest& WithContainerGroupDefinitionName(ContainerGroupDefinitionNameT&& value) { SetContainerGroupDefinitionName(std::forward<ContainerGroupDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of computes in a managed container fleet, based on the success of
     * the latest update deployment.</p> <ul> <li> <p> <code>ACTIVE</code> -- The
     * compute is deployed with the correct container definitions. It is ready to
     * process game servers and host game sessions.</p> </li> <li> <p>
     * <code>IMPAIRED</code> -- An update deployment to the compute failed, and the
     * compute is deployed with incorrect container definitions.</p> </li> </ul>
     */
    inline ListComputeInputStatus GetComputeStatus() const { return m_computeStatus; }
    inline bool ComputeStatusHasBeenSet() const { return m_computeStatusHasBeenSet; }
    inline void SetComputeStatus(ListComputeInputStatus value) { m_computeStatusHasBeenSet = true; m_computeStatus = value; }
    inline ListComputeRequest& WithComputeStatus(ListComputeInputStatus value) { SetComputeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListComputeRequest& WithLimit(int value) { SetLimit(value); return *this;}
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
    ListComputeRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_containerGroupDefinitionName;
    bool m_containerGroupDefinitionNameHasBeenSet = false;

    ListComputeInputStatus m_computeStatus{ListComputeInputStatus::NOT_SET};
    bool m_computeStatusHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
