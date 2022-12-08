/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeFleetLocationAttributesRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeFleetLocationAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleetLocationAttributes"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet to retrieve remote locations for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLocations() const{ return m_locations; }

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline bool LocationsHasBeenSet() const { return m_locationsHasBeenSet; }

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline void SetLocations(const Aws::Vector<Aws::String>& value) { m_locationsHasBeenSet = true; m_locations = value; }

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline void SetLocations(Aws::Vector<Aws::String>&& value) { m_locationsHasBeenSet = true; m_locations = std::move(value); }

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithLocations(const Aws::Vector<Aws::String>& value) { SetLocations(value); return *this;}

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithLocations(Aws::Vector<Aws::String>&& value) { SetLocations(std::move(value)); return *this;}

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline DescribeFleetLocationAttributesRequest& AddLocations(const Aws::String& value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline DescribeFleetLocationAttributesRequest& AddLocations(Aws::String&& value) { m_locationsHasBeenSet = true; m_locations.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of fleet locations to retrieve information for. Specify locations in
     * the form of an Amazon Web Services Region code, such as
     * <code>us-west-2</code>.</p>
     */
    inline DescribeFleetLocationAttributesRequest& AddLocations(const char* value) { m_locationsHasBeenSet = true; m_locations.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This limit
     * is not currently enforced.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This limit
     * is not currently enforced.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This limit
     * is not currently enforced.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This limit
     * is not currently enforced.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeFleetLocationAttributesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_locations;
    bool m_locationsHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
