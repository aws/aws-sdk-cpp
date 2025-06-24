/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/LocationUpdateStatus.h>
#include <aws/gamelift/model/IpPermission.h>
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
  class DescribeFleetPortSettingsResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetPortSettingsResult() = default;
    AWS_GAMELIFT_API DescribeFleetPortSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetPortSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the fleet that was requested. </p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    DescribeFleetPortSettingsResult& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers fleet resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    DescribeFleetPortSettingsResult& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissions() const { return m_inboundPermissions; }
    template<typename InboundPermissionsT = Aws::Vector<IpPermission>>
    void SetInboundPermissions(InboundPermissionsT&& value) { m_inboundPermissionsHasBeenSet = true; m_inboundPermissions = std::forward<InboundPermissionsT>(value); }
    template<typename InboundPermissionsT = Aws::Vector<IpPermission>>
    DescribeFleetPortSettingsResult& WithInboundPermissions(InboundPermissionsT&& value) { SetInboundPermissions(std::forward<InboundPermissionsT>(value)); return *this;}
    template<typename InboundPermissionsT = IpPermission>
    DescribeFleetPortSettingsResult& AddInboundPermissions(InboundPermissionsT&& value) { m_inboundPermissionsHasBeenSet = true; m_inboundPermissions.emplace_back(std::forward<InboundPermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of updates to the fleet's port settings in the requested
     * fleet location. A status of <code>PENDING_UPDATE</code> indicates that an update
     * was requested for the fleet but has not yet been completed for the location.</p>
     */
    inline LocationUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
    inline void SetUpdateStatus(LocationUpdateStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline DescribeFleetPortSettingsResult& WithUpdateStatus(LocationUpdateStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested fleet location, expressed as an Amazon Web Services Region
     * code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    DescribeFleetPortSettingsResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetPortSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::Vector<IpPermission> m_inboundPermissions;
    bool m_inboundPermissionsHasBeenSet = false;

    LocationUpdateStatus m_updateStatus{LocationUpdateStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
