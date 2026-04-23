/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ClusterState.h>
#include <aws/elasticmapreduce/model/ClusterStateChangeReason.h>
#include <aws/elasticmapreduce/model/ClusterTimeline.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The detailed status of the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ClusterStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ClusterStatus
  {
  public:
    ClusterStatus();
    ClusterStatus(Aws::Utils::Json::JsonView jsonValue);
    ClusterStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the cluster.</p>
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the cluster.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the cluster.</p>
     */
    inline void SetState(const ClusterState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the cluster.</p>
     */
    inline void SetState(ClusterState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the cluster.</p>
     */
    inline ClusterStatus& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the cluster.</p>
     */
    inline ClusterStatus& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline const ClusterStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline void SetStateChangeReason(const ClusterStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline void SetStateChangeReason(ClusterStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline ClusterStatus& WithStateChangeReason(const ClusterStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason for the cluster status change.</p>
     */
    inline ClusterStatus& WithStateChangeReason(ClusterStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline const ClusterTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline void SetTimeline(const ClusterTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline void SetTimeline(ClusterTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline ClusterStatus& WithTimeline(const ClusterTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>A timeline that represents the status of a cluster over the lifetime of the
     * cluster.</p>
     */
    inline ClusterStatus& WithTimeline(ClusterTimeline&& value) { SetTimeline(std::move(value)); return *this;}

  private:

    ClusterState m_state;
    bool m_stateHasBeenSet;

    ClusterStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;

    ClusterTimeline m_timeline;
    bool m_timelineHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
