/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecycleExecutionResourceState.h>
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
   * <p>Contains the state of an impacted snapshot resource that the runtime instance
   * of the lifecycle policy identified for action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecycleExecutionSnapshotResource">AWS
   * API Reference</a></p>
   */
  class LifecycleExecutionSnapshotResource
  {
  public:
    AWS_IMAGEBUILDER_API LifecycleExecutionSnapshotResource() = default;
    AWS_IMAGEBUILDER_API LifecycleExecutionSnapshotResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecycleExecutionSnapshotResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the impacted snapshot resource.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    LifecycleExecutionSnapshotResource& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime status of the lifecycle action taken for the snapshot.</p>
     */
    inline const LifecycleExecutionResourceState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = LifecycleExecutionResourceState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = LifecycleExecutionResourceState>
    LifecycleExecutionSnapshotResource& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    LifecycleExecutionResourceState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
