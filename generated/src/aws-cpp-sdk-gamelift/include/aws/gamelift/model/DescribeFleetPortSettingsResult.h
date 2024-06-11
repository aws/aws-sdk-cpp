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
    AWS_GAMELIFT_API DescribeFleetPortSettingsResult();
    AWS_GAMELIFT_API DescribeFleetPortSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetPortSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the fleet that was requested. </p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline void SetFleetId(const Aws::String& value) { m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetId.assign(value); }
    inline DescribeFleetPortSettingsResult& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline DescribeFleetPortSettingsResult& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline DescribeFleetPortSettingsResult& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift fleet resource and uniquely identifies it.
     * ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }
    inline void SetFleetArn(const Aws::String& value) { m_fleetArn = value; }
    inline void SetFleetArn(Aws::String&& value) { m_fleetArn = std::move(value); }
    inline void SetFleetArn(const char* value) { m_fleetArn.assign(value); }
    inline DescribeFleetPortSettingsResult& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}
    inline DescribeFleetPortSettingsResult& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}
    inline DescribeFleetPortSettingsResult& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port settings for the requested fleet ID.</p>
     */
    inline const Aws::Vector<IpPermission>& GetInboundPermissions() const{ return m_inboundPermissions; }
    inline void SetInboundPermissions(const Aws::Vector<IpPermission>& value) { m_inboundPermissions = value; }
    inline void SetInboundPermissions(Aws::Vector<IpPermission>&& value) { m_inboundPermissions = std::move(value); }
    inline DescribeFleetPortSettingsResult& WithInboundPermissions(const Aws::Vector<IpPermission>& value) { SetInboundPermissions(value); return *this;}
    inline DescribeFleetPortSettingsResult& WithInboundPermissions(Aws::Vector<IpPermission>&& value) { SetInboundPermissions(std::move(value)); return *this;}
    inline DescribeFleetPortSettingsResult& AddInboundPermissions(const IpPermission& value) { m_inboundPermissions.push_back(value); return *this; }
    inline DescribeFleetPortSettingsResult& AddInboundPermissions(IpPermission&& value) { m_inboundPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of updates to the fleet's port settings in the requested
     * fleet location. A status of <code>PENDING_UPDATE</code> indicates that an update
     * was requested for the fleet but has not yet been completed for the location.</p>
     */
    inline const LocationUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline void SetUpdateStatus(const LocationUpdateStatus& value) { m_updateStatus = value; }
    inline void SetUpdateStatus(LocationUpdateStatus&& value) { m_updateStatus = std::move(value); }
    inline DescribeFleetPortSettingsResult& WithUpdateStatus(const LocationUpdateStatus& value) { SetUpdateStatus(value); return *this;}
    inline DescribeFleetPortSettingsResult& WithUpdateStatus(LocationUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The requested fleet location, expressed as an Amazon Web Services Region
     * code, such as <code>us-west-2</code>. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline DescribeFleetPortSettingsResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline DescribeFleetPortSettingsResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline DescribeFleetPortSettingsResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetPortSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetPortSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetPortSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;

    Aws::String m_fleetArn;

    Aws::Vector<IpPermission> m_inboundPermissions;

    LocationUpdateStatus m_updateStatus;

    Aws::String m_location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
