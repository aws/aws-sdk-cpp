/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecutionResourceState.h>
#include <aws/imagebuilder/model/LifecycleExecutionResourceAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/imagebuilder/model/LifecycleExecutionSnapshotResource.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains details for a resource that the runtime instance of the lifecycle
   * policy identified for action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecutionResource">AWS
   * API Reference</a></p>
   */
  class LifecycleExecutionResource
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecutionResource();
    AWS_IMAGEBUILDER_API LifecycleExecutionResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline LifecycleExecutionResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline LifecycleExecutionResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline LifecycleExecutionResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline LifecycleExecutionResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline LifecycleExecutionResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline LifecycleExecutionResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline const LifecycleExecutionResourceState& GetState() const{ return m_state; }

    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline void SetState(const LifecycleExecutionResourceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline void SetState(LifecycleExecutionResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline LifecycleExecutionResource& WithState(const LifecycleExecutionResourceState& value) { SetState(value); return *this;}

    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline LifecycleExecutionResource& WithState(LifecycleExecutionResourceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline const LifecycleExecutionResourceAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline void SetAction(const LifecycleExecutionResourceAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline void SetAction(LifecycleExecutionResourceAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline LifecycleExecutionResource& WithAction(const LifecycleExecutionResourceAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline LifecycleExecutionResource& WithAction(LifecycleExecutionResourceAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline LifecycleExecutionResource& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline LifecycleExecutionResource& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline LifecycleExecutionResource& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline const Aws::Vector<LifecycleExecutionSnapshotResource>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline bool SnapshotsHasBeenSet() const { return m_snapshotsHasBeenSet; }

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline void SetSnapshots(const Aws::Vector<LifecycleExecutionSnapshotResource>& value) { m_snapshotsHasBeenSet = true; m_snapshots = value; }

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline void SetSnapshots(Aws::Vector<LifecycleExecutionSnapshotResource>&& value) { m_snapshotsHasBeenSet = true; m_snapshots = std::move(value); }

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline LifecycleExecutionResource& WithSnapshots(const Aws::Vector<LifecycleExecutionSnapshotResource>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline LifecycleExecutionResource& WithSnapshots(Aws::Vector<LifecycleExecutionSnapshotResource>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline LifecycleExecutionResource& AddSnapshots(const LifecycleExecutionSnapshotResource& value) { m_snapshotsHasBeenSet = true; m_snapshots.push_back(value); return *this; }

    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline LifecycleExecutionResource& AddSnapshots(LifecycleExecutionSnapshotResource&& value) { m_snapshotsHasBeenSet = true; m_snapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageUris() const{ return m_imageUris; }

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline bool ImageUrisHasBeenSet() const { return m_imageUrisHasBeenSet; }

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline void SetImageUris(const Aws::Vector<Aws::String>& value) { m_imageUrisHasBeenSet = true; m_imageUris = value; }

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline void SetImageUris(Aws::Vector<Aws::String>&& value) { m_imageUrisHasBeenSet = true; m_imageUris = std::move(value); }

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline LifecycleExecutionResource& WithImageUris(const Aws::Vector<Aws::String>& value) { SetImageUris(value); return *this;}

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline LifecycleExecutionResource& WithImageUris(Aws::Vector<Aws::String>&& value) { SetImageUris(std::move(value)); return *this;}

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline LifecycleExecutionResource& AddImageUris(const Aws::String& value) { m_imageUrisHasBeenSet = true; m_imageUris.push_back(value); return *this; }

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline LifecycleExecutionResource& AddImageUris(Aws::String&& value) { m_imageUrisHasBeenSet = true; m_imageUris.push_back(std::move(value)); return *this; }

    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline LifecycleExecutionResource& AddImageUris(const char* value) { m_imageUrisHasBeenSet = true; m_imageUris.push_back(value); return *this; }


    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline LifecycleExecutionResource& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline LifecycleExecutionResource& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline LifecycleExecutionResource& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline LifecycleExecutionResource& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    LifecycleExecutionResourceState m_state;
    bool m_stateHasBeenSet = false;

    LifecycleExecutionResourceAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::Vector<LifecycleExecutionSnapshotResource> m_snapshots;
    bool m_snapshotsHasBeenSet = false;

    Aws::Vector<Aws::String> m_imageUris;
    bool m_imageUrisHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
