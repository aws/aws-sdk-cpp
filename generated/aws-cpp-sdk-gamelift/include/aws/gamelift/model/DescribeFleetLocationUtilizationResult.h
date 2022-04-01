/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetUtilization.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetLocationUtilizationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult
  {
  public:
    DescribeFleetLocationUtilizationResult();
    DescribeFleetLocationUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetLocationUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline const FleetUtilization& GetFleetUtilization() const{ return m_fleetUtilization; }

    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline void SetFleetUtilization(const FleetUtilization& value) { m_fleetUtilization = value; }

    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline void SetFleetUtilization(FleetUtilization&& value) { m_fleetUtilization = std::move(value); }

    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline DescribeFleetLocationUtilizationResult& WithFleetUtilization(const FleetUtilization& value) { SetFleetUtilization(value); return *this;}

    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline DescribeFleetLocationUtilizationResult& WithFleetUtilization(FleetUtilization&& value) { SetFleetUtilization(std::move(value)); return *this;}

  private:

    FleetUtilization m_fleetUtilization;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
