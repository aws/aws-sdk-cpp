/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetDeployment.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/LocationalDeployment.h>
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
  class DescribeFleetDeploymentResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetDeploymentResult();
    AWS_GAMELIFT_API DescribeFleetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested deployment information.</p>
     */
    inline const FleetDeployment& GetFleetDeployment() const{ return m_fleetDeployment; }
    inline void SetFleetDeployment(const FleetDeployment& value) { m_fleetDeployment = value; }
    inline void SetFleetDeployment(FleetDeployment&& value) { m_fleetDeployment = std::move(value); }
    inline DescribeFleetDeploymentResult& WithFleetDeployment(const FleetDeployment& value) { SetFleetDeployment(value); return *this;}
    inline DescribeFleetDeploymentResult& WithFleetDeployment(FleetDeployment&& value) { SetFleetDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the deployment is for a multi-location fleet, the requests returns the
     * deployment status in each fleet location.</p>
     */
    inline const Aws::Map<Aws::String, LocationalDeployment>& GetLocationalDeployments() const{ return m_locationalDeployments; }
    inline void SetLocationalDeployments(const Aws::Map<Aws::String, LocationalDeployment>& value) { m_locationalDeployments = value; }
    inline void SetLocationalDeployments(Aws::Map<Aws::String, LocationalDeployment>&& value) { m_locationalDeployments = std::move(value); }
    inline DescribeFleetDeploymentResult& WithLocationalDeployments(const Aws::Map<Aws::String, LocationalDeployment>& value) { SetLocationalDeployments(value); return *this;}
    inline DescribeFleetDeploymentResult& WithLocationalDeployments(Aws::Map<Aws::String, LocationalDeployment>&& value) { SetLocationalDeployments(std::move(value)); return *this;}
    inline DescribeFleetDeploymentResult& AddLocationalDeployments(const Aws::String& key, const LocationalDeployment& value) { m_locationalDeployments.emplace(key, value); return *this; }
    inline DescribeFleetDeploymentResult& AddLocationalDeployments(Aws::String&& key, const LocationalDeployment& value) { m_locationalDeployments.emplace(std::move(key), value); return *this; }
    inline DescribeFleetDeploymentResult& AddLocationalDeployments(const Aws::String& key, LocationalDeployment&& value) { m_locationalDeployments.emplace(key, std::move(value)); return *this; }
    inline DescribeFleetDeploymentResult& AddLocationalDeployments(Aws::String&& key, LocationalDeployment&& value) { m_locationalDeployments.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeFleetDeploymentResult& AddLocationalDeployments(const char* key, LocationalDeployment&& value) { m_locationalDeployments.emplace(key, std::move(value)); return *this; }
    inline DescribeFleetDeploymentResult& AddLocationalDeployments(const char* key, const LocationalDeployment& value) { m_locationalDeployments.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FleetDeployment m_fleetDeployment;

    Aws::Map<Aws::String, LocationalDeployment> m_locationalDeployments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
