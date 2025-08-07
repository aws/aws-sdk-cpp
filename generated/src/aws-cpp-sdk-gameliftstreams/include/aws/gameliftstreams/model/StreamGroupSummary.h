/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/DefaultApplication.h>
#include <aws/gameliftstreams/model/StreamClass.h>
#include <aws/gameliftstreams/model/StreamGroupStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLiftStreams
{
namespace Model
{

  /**
   * <p>Describes a Amazon GameLift Streams stream group resource for hosting content
   * streams. To retrieve additional stream group details, call <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_GetStreamGroup.html">GetStreamGroup</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/StreamGroupSummary">AWS
   * API Reference</a></p>
   */
  class StreamGroupSummary
  {
  public:
    AWS_GAMELIFTSTREAMS_API StreamGroupSummary() = default;
    AWS_GAMELIFTSTREAMS_API StreamGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API StreamGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that uniquely identifies the stream group resource.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
     * </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    StreamGroupSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID that uniquely identifies the stream group resource. Example ID:
     * <code>sg-1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StreamGroupSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StreamGroupSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that identifies the Amazon GameLift Streams application to stream with
     * this stream group.</p>
     */
    inline const DefaultApplication& GetDefaultApplication() const { return m_defaultApplication; }
    inline bool DefaultApplicationHasBeenSet() const { return m_defaultApplicationHasBeenSet; }
    template<typename DefaultApplicationT = DefaultApplication>
    void SetDefaultApplication(DefaultApplicationT&& value) { m_defaultApplicationHasBeenSet = true; m_defaultApplication = std::forward<DefaultApplicationT>(value); }
    template<typename DefaultApplicationT = DefaultApplication>
    StreamGroupSummary& WithDefaultApplication(DefaultApplicationT&& value) { SetDefaultApplication(std::forward<DefaultApplicationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target stream quality for the stream group. </p> <p>A stream class can be
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
    inline bool StreamClassHasBeenSet() const { return m_streamClassHasBeenSet; }
    inline void SetStreamClass(StreamClass value) { m_streamClassHasBeenSet = true; m_streamClass = value; }
    inline StreamGroupSummary& WithStreamClass(StreamClass value) { SetStreamClass(value); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StreamGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StreamGroupSummary& WithStatus(StreamGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StreamGroupSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    StreamGroupSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DefaultApplication m_defaultApplication;
    bool m_defaultApplicationHasBeenSet = false;

    StreamClass m_streamClass{StreamClass::NOT_SET};
    bool m_streamClassHasBeenSet = false;

    StreamGroupStatus m_status{StreamGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
