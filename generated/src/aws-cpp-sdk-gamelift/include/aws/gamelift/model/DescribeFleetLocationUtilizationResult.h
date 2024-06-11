/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetUtilization.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeFleetLocationUtilizationResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult();
    AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline const FleetUtilization& GetFleetUtilization() const{ return m_fleetUtilization; }
    inline void SetFleetUtilization(const FleetUtilization& value) { m_fleetUtilization = value; }
    inline void SetFleetUtilization(FleetUtilization&& value) { m_fleetUtilization = std::move(value); }
    inline DescribeFleetLocationUtilizationResult& WithFleetUtilization(const FleetUtilization& value) { SetFleetUtilization(value); return *this;}
    inline DescribeFleetLocationUtilizationResult& WithFleetUtilization(FleetUtilization&& value) { SetFleetUtilization(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetLocationUtilizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetLocationUtilizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetLocationUtilizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FleetUtilization m_fleetUtilization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
