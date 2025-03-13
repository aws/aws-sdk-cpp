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
    AWS_IMAGEBUILDER_API LifecycleExecutionResource() = default;
    AWS_IMAGEBUILDER_API LifecycleExecutionResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account that owns the impacted resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    LifecycleExecutionResource& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the impacted resource. The resource ID depends on the type of
     * resource, as follows.</p> <ul> <li> <p>Image Builder image resources: Amazon
     * Resource Name (ARN)</p> </li> <li> <p>Distributed AMIs: AMI ID</p> </li> <li>
     * <p>Container images distributed to an ECR repository: image URI or SHA
     * Digest</p> </li> </ul>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    LifecycleExecutionResource& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime state for the lifecycle execution.</p>
     */
    inline const LifecycleExecutionResourceState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = LifecycleExecutionResourceState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = LifecycleExecutionResourceState>
    LifecycleExecutionResource& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take for the identified resource.</p>
     */
    inline const LifecycleExecutionResourceAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = LifecycleExecutionResourceAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = LifecycleExecutionResourceAction>
    LifecycleExecutionResource& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the lifecycle execution resource is
     * stored.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    LifecycleExecutionResource& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of associated resource snapshots for the impacted resource if it’s an
     * AMI.</p>
     */
    inline const Aws::Vector<LifecycleExecutionSnapshotResource>& GetSnapshots() const { return m_snapshots; }
    inline bool SnapshotsHasBeenSet() const { return m_snapshotsHasBeenSet; }
    template<typename SnapshotsT = Aws::Vector<LifecycleExecutionSnapshotResource>>
    void SetSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots = std::forward<SnapshotsT>(value); }
    template<typename SnapshotsT = Aws::Vector<LifecycleExecutionSnapshotResource>>
    LifecycleExecutionResource& WithSnapshots(SnapshotsT&& value) { SetSnapshots(std::forward<SnapshotsT>(value)); return *this;}
    template<typename SnapshotsT = LifecycleExecutionSnapshotResource>
    LifecycleExecutionResource& AddSnapshots(SnapshotsT&& value) { m_snapshotsHasBeenSet = true; m_snapshots.emplace_back(std::forward<SnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For an impacted container image, this identifies a list of URIs for
     * associated container images distributed to ECR repositories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageUris() const { return m_imageUris; }
    inline bool ImageUrisHasBeenSet() const { return m_imageUrisHasBeenSet; }
    template<typename ImageUrisT = Aws::Vector<Aws::String>>
    void SetImageUris(ImageUrisT&& value) { m_imageUrisHasBeenSet = true; m_imageUris = std::forward<ImageUrisT>(value); }
    template<typename ImageUrisT = Aws::Vector<Aws::String>>
    LifecycleExecutionResource& WithImageUris(ImageUrisT&& value) { SetImageUris(std::forward<ImageUrisT>(value)); return *this;}
    template<typename ImageUrisT = Aws::String>
    LifecycleExecutionResource& AddImageUris(ImageUrisT&& value) { m_imageUrisHasBeenSet = true; m_imageUris.emplace_back(std::forward<ImageUrisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LifecycleExecutionResource& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ending timestamp from the lifecycle action that was applied to the
     * resource.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LifecycleExecutionResource& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
