/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/DefaultApplication.h>
#include <aws/gameliftstreams/model/StreamGroupStatus.h>
#include <aws/gameliftstreams/model/StreamGroupStatusReason.h>
#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/gameliftstreams/model/LocationState.h>
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
namespace GameLiftStreams
{
namespace Model
{
  class UpdateStreamGroupResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupResult();
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that is assigned to the stream group resource
     * and that uniquely identifies the group across all Amazon Web Services Regions.
     * Format is <code>arn:aws:gameliftstreams:[AWS Region]:[AWS
     * account]:streamgroup/[resource ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateStreamGroupResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateStreamGroupResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateStreamGroupResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of applications that this stream group is associated with. You can
     * stream any of these applications with the stream group. </p> <p>This value is a
     * set of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARNs)</a> that uniquely identify application resources. Format
     * example:
     * <code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedApplications() const{ return m_associatedApplications; }
    inline void SetAssociatedApplications(const Aws::Vector<Aws::String>& value) { m_associatedApplications = value; }
    inline void SetAssociatedApplications(Aws::Vector<Aws::String>&& value) { m_associatedApplications = std::move(value); }
    inline UpdateStreamGroupResult& WithAssociatedApplications(const Aws::Vector<Aws::String>& value) { SetAssociatedApplications(value); return *this;}
    inline UpdateStreamGroupResult& WithAssociatedApplications(Aws::Vector<Aws::String>&& value) { SetAssociatedApplications(std::move(value)); return *this;}
    inline UpdateStreamGroupResult& AddAssociatedApplications(const Aws::String& value) { m_associatedApplications.push_back(value); return *this; }
    inline UpdateStreamGroupResult& AddAssociatedApplications(Aws::String&& value) { m_associatedApplications.push_back(std::move(value)); return *this; }
    inline UpdateStreamGroupResult& AddAssociatedApplications(const char* value) { m_associatedApplications.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateStreamGroupResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateStreamGroupResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon GameLift Streams application that is associated with this stream
     * group.</p>
     */
    inline const DefaultApplication& GetDefaultApplication() const{ return m_defaultApplication; }
    inline void SetDefaultApplication(const DefaultApplication& value) { m_defaultApplication = value; }
    inline void SetDefaultApplication(DefaultApplication&& value) { m_defaultApplication = std::move(value); }
    inline UpdateStreamGroupResult& WithDefaultApplication(const DefaultApplication& value) { SetDefaultApplication(value); return *this;}
    inline UpdateStreamGroupResult& WithDefaultApplication(DefaultApplication&& value) { SetDefaultApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateStreamGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateStreamGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateStreamGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID value that is assigned to the resource when it's created. Format
     * example: <code>1AB2C3De4</code>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateStreamGroupResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateStreamGroupResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateStreamGroupResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline UpdateStreamGroupResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline UpdateStreamGroupResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set of locations, including their name, current status, and
     * capacities. </p> <p> A location can be in one of the following states: </p> <ul>
     * <li> <p> <b>ACTIVATING</b>: Amazon GameLift Streams is preparing the location.
     * You cannot stream from, scale the capacity of, or remove this location yet. </p>
     * </li> <li> <p> <b>ACTIVE</b>: The location is provisioned with initial capacity.
     * You can now stream from, scale the capacity of, or remove this location. </p>
     * </li> <li> <p> <b>ERROR</b>: Amazon GameLift Streams failed to set up this
     * location. The StatusReason field describes the error. You can remove this
     * location and try to add it again. </p> </li> <li> <p> <b>REMOVING</b>: Amazon
     * GameLift Streams is working to remove this location. It releases all provisioned
     * capacity for this location in this stream group. </p> </li> </ul>
     */
    inline const Aws::Vector<LocationState>& GetLocationStates() const{ return m_locationStates; }
    inline void SetLocationStates(const Aws::Vector<LocationState>& value) { m_locationStates = value; }
    inline void SetLocationStates(Aws::Vector<LocationState>&& value) { m_locationStates = std::move(value); }
    inline UpdateStreamGroupResult& WithLocationStates(const Aws::Vector<LocationState>& value) { SetLocationStates(value); return *this;}
    inline UpdateStreamGroupResult& WithLocationStates(Aws::Vector<LocationState>&& value) { SetLocationStates(std::move(value)); return *this;}
    inline UpdateStreamGroupResult& AddLocationStates(const LocationState& value) { m_locationStates.push_back(value); return *this; }
    inline UpdateStreamGroupResult& AddLocationStates(LocationState&& value) { m_locationStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the stream group resource. Possible statuses include
     * the following:</p> <ul> <li> <p> <code>ACTIVATING</code>: The stream group is
     * deploying and isn't ready to host streams. </p> </li> <li> <p>
     * <code>ACTIVE</code>: The stream group is ready to host streams. </p> </li> <li>
     * <p> <code>ACTIVE_WITH_ERRORS</code>: One or more locations in the stream group
     * are in an error state. Verify the details of individual locations and remove any
     * locations which are in error. </p> </li> <li> <p> <code>ERROR</code>: An error
     * occurred when the stream group deployed. See <code>StatusReason</code> for more
     * information. </p> </li> <li> <p> <code>DELETING</code>: Amazon GameLift Streams
     * is in the process of deleting the stream group. </p> </li> <li> <p>
     * <code>UPDATING_LOCATIONS</code>: One or more locations in the stream group are
     * in the process of updating (either activating or deleting). </p> </li> </ul>
     */
    inline const StreamGroupStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StreamGroupStatus& value) { m_status = value; }
    inline void SetStatus(StreamGroupStatus&& value) { m_status = std::move(value); }
    inline UpdateStreamGroupResult& WithStatus(const StreamGroupStatus& value) { SetStatus(value); return *this;}
    inline UpdateStreamGroupResult& WithStatus(StreamGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A short description of the reason that the stream group is in
     * <code>ERROR</code> status. The possible reasons can be one of the following:
     * </p> <ul> <li> <p> <code>internalError</code>: The request can't process right
     * now bcause of an issue with the server. Try again later. Reach out to the Amazon
     * GameLift Streams team for more help. </p> </li> <li> <p>
     * <code>noAvailableInstances</code>: Amazon GameLift Streams does not currently
     * have enough available On-Demand capacity to fulfill your request. Wait a few
     * minutes and retry the request as capacity can shift frequently. You can also try
     * to make the request using a different stream class or in another region. </p>
     * </li> </ul>
     */
    inline const StreamGroupStatusReason& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const StreamGroupStatusReason& value) { m_statusReason = value; }
    inline void SetStatusReason(StreamGroupStatusReason&& value) { m_statusReason = std::move(value); }
    inline UpdateStreamGroupResult& WithStatusReason(const StreamGroupStatusReason& value) { SetStatusReason(value); return *this;}
    inline UpdateStreamGroupResult& WithStatusReason(StreamGroupStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target stream quality for the stream group.</p> <p>A stream class can be
     * one of the following:</p> <ul> <li> <p> <b> <code>gen5n_win2022</code> (NVIDIA,
     * ultra)</b> Supports applications with extremely high 3D scene complexity. Runs
     * applications on Microsoft Windows Server 2022 Base and supports DirectX 12.
     * Compatible with most Unreal Engine 5.x builds, 32-bit applications, and
     * anti-cheat technology. Uses NVIDIA A10G Tensor GPU.</p> <ul> <li> <p>Reference
     * resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60 fps</p> </li> <li>
     * <p>Workload specifications: 8 vCPUs, 32 GB RAM, 24 GB VRAM</p> </li> <li>
     * <p>Tenancy: Supports 1 concurrent stream session</p> </li> </ul> </li> <li> <p>
     * <b> <code>gen5n_high</code> (NVIDIA, high)</b> Supports applications with
     * moderate to high 3D scene complexity. Uses NVIDIA A10G Tensor GPU.</p> <ul> <li>
     * <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60
     * fps</p> </li> <li> <p>Workload specifications: 4 vCPUs, 16 GB RAM, 12 GB
     * VRAM</p> </li> <li> <p>Tenancy: Supports up to 2 concurrent stream sessions</p>
     * </li> </ul> </li> <li> <p> <b> <code>gen5n_ultra</code> (NVIDIA, ultra)</b>
     * Supports applications with extremely high 3D scene complexity. Uses dedicated
     * NVIDIA A10G Tensor GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li>
     * <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload specifications:
     * 8 vCPUs, 32 GB RAM, 24 GB VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent
     * stream session</p> </li> </ul> </li> <li> <p> <b> <code>gen4n_win2022</code>
     * (NVIDIA, ultra)</b> Supports applications with extremely high 3D scene
     * complexity. Runs applications on Microsoft Windows Server 2022 Base and supports
     * DirectX 12. Compatible with most Unreal Engine 5.2 and 5.3 builds, 32-bit
     * applications, and anti-cheat technology. Uses NVIDIA T4 Tensor GPU.</p> <ul>
     * <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60
     * fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB RAM, 16 GB
     * VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream session</p> </li>
     * </ul> </li> <li> <p> <b> <code>gen4n_high</code> (NVIDIA, high)</b> Supports
     * applications with moderate to high 3D scene complexity. Uses NVIDIA T4 Tensor
     * GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference
     * frame rate: 60 fps</p> </li> <li> <p>Workload specifications: 4 vCPUs, 16 GB
     * RAM, 8 GB VRAM</p> </li> <li> <p>Tenancy: Supports up to 2 concurrent stream
     * sessions</p> </li> </ul> </li> <li> <p> <b> <code>gen4n_ultra</code> (NVIDIA,
     * ultra)</b> Supports applications with high 3D scene complexity. Uses dedicated
     * NVIDIA T4 Tensor GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li>
     * <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload specifications:
     * 8 vCPUs, 32 GB RAM, 16 GB VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent
     * stream session</p> </li> </ul> </li> </ul>
     */
    inline const StreamClass& GetStreamClass() const{ return m_streamClass; }
    inline void SetStreamClass(const StreamClass& value) { m_streamClass = value; }
    inline void SetStreamClass(StreamClass&& value) { m_streamClass = std::move(value); }
    inline UpdateStreamGroupResult& WithStreamClass(const StreamClass& value) { SetStreamClass(value); return *this;}
    inline UpdateStreamGroupResult& WithStreamClass(StreamClass&& value) { SetStreamClass(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateStreamGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateStreamGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateStreamGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_associatedApplications;

    Aws::Utils::DateTime m_createdAt;

    DefaultApplication m_defaultApplication;

    Aws::String m_description;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Vector<LocationState> m_locationStates;

    StreamGroupStatus m_status;

    StreamGroupStatusReason m_statusReason;

    StreamClass m_streamClass;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
