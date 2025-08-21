/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/DefaultApplication.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/gameliftstreams/model/StreamGroupStatus.h>
#include <aws/gameliftstreams/model/StreamGroupStatusReason.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupResult() = default;
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API UpdateStreamGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that is assigned to the stream group resource and that
     * uniquely identifies the group across all Amazon Web Services Regions. Format is
     * <code>arn:aws:gameliftstreams:[AWS Region]:[AWS account]:streamgroup/[resource
     * ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateStreamGroupResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStreamGroupResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default Amazon GameLift Streams application that is associated with this
     * stream group.</p>
     */
    inline const DefaultApplication& GetDefaultApplication() const { return m_defaultApplication; }
    template<typename DefaultApplicationT = DefaultApplication>
    void SetDefaultApplication(DefaultApplicationT&& value) { m_defaultApplicationHasBeenSet = true; m_defaultApplication = std::forward<DefaultApplicationT>(value); }
    template<typename DefaultApplicationT = DefaultApplication>
    UpdateStreamGroupResult& WithDefaultApplication(DefaultApplicationT&& value) { SetDefaultApplication(std::forward<DefaultApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is set of locations, including their name, current status, and
     * capacities. </p> <p>A location can be in one of the following states:</p> <ul>
     * <li> <p> <code>ACTIVATING</code>: Amazon GameLift Streams is preparing the
     * location. You cannot stream from, scale the capacity of, or remove this location
     * yet.</p> </li> <li> <p> <code>ACTIVE</code>: The location is provisioned with
     * initial capacity. You can now stream from, scale the capacity of, or remove this
     * location.</p> </li> <li> <p> <code>ERROR</code>: Amazon GameLift Streams failed
     * to set up this location. The <code>StatusReason</code> field describes the
     * error. You can remove this location and try to add it again.</p> </li> <li> <p>
     * <code>REMOVING</code>: Amazon GameLift Streams is working to remove this
     * location. This will release all provisioned capacity for this location in this
     * stream group.</p> </li> </ul>
     */
    inline const Aws::Vector<LocationState>& GetLocationStates() const { return m_locationStates; }
    template<typename LocationStatesT = Aws::Vector<LocationState>>
    void SetLocationStates(LocationStatesT&& value) { m_locationStatesHasBeenSet = true; m_locationStates = std::forward<LocationStatesT>(value); }
    template<typename LocationStatesT = Aws::Vector<LocationState>>
    UpdateStreamGroupResult& WithLocationStates(LocationStatesT&& value) { SetLocationStates(std::forward<LocationStatesT>(value)); return *this;}
    template<typename LocationStatesT = LocationState>
    UpdateStreamGroupResult& AddLocationStates(LocationStatesT&& value) { m_locationStatesHasBeenSet = true; m_locationStates.emplace_back(std::forward<LocationStatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The target stream quality for the stream group.</p> <p>A stream class can be
     * one of the following:</p> <ul> <li> <p> <b> <code>gen5n_win2022</code> (NVIDIA,
     * ultra)</b> Supports applications with extremely high 3D scene complexity. Runs
     * applications on Microsoft Windows Server 2022 Base and supports DirectX 12.
     * Compatible with Unreal Engine versions up through 5.4, 32 and 64-bit
     * applications, and anti-cheat technology. Uses NVIDIA A10G Tensor GPU.</p> <ul>
     * <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60
     * fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB RAM, 24 GB
     * VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream session</p> </li>
     * </ul> </li> <li> <p> <b> <code>gen5n_high</code> (NVIDIA, high)</b> Supports
     * applications with moderate to high 3D scene complexity. Uses NVIDIA A10G Tensor
     * GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li> <li> <p>Reference
     * frame rate: 60 fps</p> </li> <li> <p>Workload specifications: 4 vCPUs, 16 GB
     * RAM, 12 GB VRAM</p> </li> <li> <p>Tenancy: Supports up to 2 concurrent stream
     * sessions</p> </li> </ul> </li> <li> <p> <b> <code>gen5n_ultra</code> (NVIDIA,
     * ultra)</b> Supports applications with extremely high 3D scene complexity. Uses
     * dedicated NVIDIA A10G Tensor GPU.</p> <ul> <li> <p>Reference resolution:
     * 1080p</p> </li> <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload
     * specifications: 8 vCPUs, 32 GB RAM, 24 GB VRAM</p> </li> <li> <p>Tenancy:
     * Supports 1 concurrent stream session</p> </li> </ul> </li> <li> <p> <b>
     * <code>gen4n_win2022</code> (NVIDIA, ultra)</b> Supports applications with
     * extremely high 3D scene complexity. Runs applications on Microsoft Windows
     * Server 2022 Base and supports DirectX 12. Compatible with Unreal Engine versions
     * up through 5.4, 32 and 64-bit applications, and anti-cheat technology. Uses
     * NVIDIA T4 Tensor GPU.</p> <ul> <li> <p>Reference resolution: 1080p</p> </li>
     * <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload specifications:
     * 8 vCPUs, 32 GB RAM, 16 GB VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent
     * stream session</p> </li> </ul> </li> <li> <p> <b> <code>gen4n_high</code>
     * (NVIDIA, high)</b> Supports applications with moderate to high 3D scene
     * complexity. Uses NVIDIA T4 Tensor GPU.</p> <ul> <li> <p>Reference resolution:
     * 1080p</p> </li> <li> <p>Reference frame rate: 60 fps</p> </li> <li> <p>Workload
     * specifications: 4 vCPUs, 16 GB RAM, 8 GB VRAM</p> </li> <li> <p>Tenancy:
     * Supports up to 2 concurrent stream sessions</p> </li> </ul> </li> <li> <p> <b>
     * <code>gen4n_ultra</code> (NVIDIA, ultra)</b> Supports applications with high 3D
     * scene complexity. Uses dedicated NVIDIA T4 Tensor GPU.</p> <ul> <li>
     * <p>Reference resolution: 1080p</p> </li> <li> <p>Reference frame rate: 60
     * fps</p> </li> <li> <p>Workload specifications: 8 vCPUs, 32 GB RAM, 16 GB
     * VRAM</p> </li> <li> <p>Tenancy: Supports 1 concurrent stream session</p> </li>
     * </ul> </li> </ul>
     */
    inline StreamClass GetStreamClass() const { return m_streamClass; }
    inline void SetStreamClass(StreamClass value) { m_streamClassHasBeenSet = true; m_streamClass = value; }
    inline UpdateStreamGroupResult& WithStreamClass(StreamClass value) { SetStreamClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID value that is assigned to the resource when it's created. Format
     * example: <code>sg-1AB2C3De4</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateStreamGroupResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    inline StreamGroupStatus GetStatus() const { return m_status; }
    inline void SetStatus(StreamGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateStreamGroupResult& WithStatus(StreamGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A short description of the reason that the stream group is in
     * <code>ERROR</code> status. The possible reasons can be one of the following:
     * </p> <ul> <li> <p> <code>internalError</code>: The request can't process right
     * now because of an issue with the server. Try again later.</p> </li> <li> <p>
     * <code>noAvailableInstances</code>: Amazon GameLift Streams does not currently
     * have enough available on-demand capacity to fulfill your request. Wait a few
     * minutes and retry the request as capacity can shift frequently. You can also try
     * to make the request using a different stream class or in another region.</p>
     * </li> </ul>
     */
    inline StreamGroupStatusReason GetStatusReason() const { return m_statusReason; }
    inline void SetStatusReason(StreamGroupStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline UpdateStreamGroupResult& WithStatusReason(StreamGroupStatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    UpdateStreamGroupResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UpdateStreamGroupResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of applications that this stream group is associated with. You can
     * stream any of these applications with the stream group. </p> <p>This value is a
     * set of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Names (ARNs)</a> that uniquely identify application resources. Example
     * ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedApplications() const { return m_associatedApplications; }
    template<typename AssociatedApplicationsT = Aws::Vector<Aws::String>>
    void SetAssociatedApplications(AssociatedApplicationsT&& value) { m_associatedApplicationsHasBeenSet = true; m_associatedApplications = std::forward<AssociatedApplicationsT>(value); }
    template<typename AssociatedApplicationsT = Aws::Vector<Aws::String>>
    UpdateStreamGroupResult& WithAssociatedApplications(AssociatedApplicationsT&& value) { SetAssociatedApplications(std::forward<AssociatedApplicationsT>(value)); return *this;}
    template<typename AssociatedApplicationsT = Aws::String>
    UpdateStreamGroupResult& AddAssociatedApplications(AssociatedApplicationsT&& value) { m_associatedApplicationsHasBeenSet = true; m_associatedApplications.emplace_back(std::forward<AssociatedApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateStreamGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DefaultApplication m_defaultApplication;
    bool m_defaultApplicationHasBeenSet = false;

    Aws::Vector<LocationState> m_locationStates;
    bool m_locationStatesHasBeenSet = false;

    StreamClass m_streamClass{StreamClass::NOT_SET};
    bool m_streamClassHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    StreamGroupStatus m_status{StreamGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StreamGroupStatusReason m_statusReason{StreamGroupStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedApplications;
    bool m_associatedApplicationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
