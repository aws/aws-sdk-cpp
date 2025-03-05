/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/DefaultApplication.h>
#include <aws/gameliftstreams/model/StreamGroupStatus.h>
#include <aws/gameliftstreams/model/StreamClass.h>
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
   * streams. To retrieve additional stream group details, call
   * <a>GetStreamGroup</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/StreamGroupSummary">AWS
   * API Reference</a></p>
   */
  class StreamGroupSummary
  {
  public:
    AWS_GAMELIFTSTREAMS_API StreamGroupSummary();
    AWS_GAMELIFTSTREAMS_API StreamGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API StreamGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StreamGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StreamGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StreamGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline StreamGroupSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline StreamGroupSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object that identifies the Amazon GameLift Streams application to stream with
     * this stream group.</p>
     */
    inline const DefaultApplication& GetDefaultApplication() const{ return m_defaultApplication; }
    inline bool DefaultApplicationHasBeenSet() const { return m_defaultApplicationHasBeenSet; }
    inline void SetDefaultApplication(const DefaultApplication& value) { m_defaultApplicationHasBeenSet = true; m_defaultApplication = value; }
    inline void SetDefaultApplication(DefaultApplication&& value) { m_defaultApplicationHasBeenSet = true; m_defaultApplication = std::move(value); }
    inline StreamGroupSummary& WithDefaultApplication(const DefaultApplication& value) { SetDefaultApplication(value); return *this;}
    inline StreamGroupSummary& WithDefaultApplication(DefaultApplication&& value) { SetDefaultApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive label for the stream group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StreamGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StreamGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StreamGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> or ID that uniquely identifies the stream group
     * resource. Format example:
     * ARN-<code>arn:aws:gameliftstreams:us-west-2:123456789012:streamgroup/1AB2C3De4</code>
     * or ID-<code>1AB2C3De4</code>. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline StreamGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StreamGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StreamGroupSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline StreamGroupSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline StreamGroupSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StreamGroupStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StreamGroupStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StreamGroupSummary& WithStatus(const StreamGroupStatus& value) { SetStatus(value); return *this;}
    inline StreamGroupSummary& WithStatus(StreamGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target stream quality for the stream group. </p> <p>A stream class can be
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
    inline bool StreamClassHasBeenSet() const { return m_streamClassHasBeenSet; }
    inline void SetStreamClass(const StreamClass& value) { m_streamClassHasBeenSet = true; m_streamClass = value; }
    inline void SetStreamClass(StreamClass&& value) { m_streamClassHasBeenSet = true; m_streamClass = std::move(value); }
    inline StreamGroupSummary& WithStreamClass(const StreamClass& value) { SetStreamClass(value); return *this;}
    inline StreamGroupSummary& WithStreamClass(StreamClass&& value) { SetStreamClass(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DefaultApplication m_defaultApplication;
    bool m_defaultApplicationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    StreamGroupStatus m_status;
    bool m_statusHasBeenSet = false;

    StreamClass m_streamClass;
    bool m_streamClassHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
