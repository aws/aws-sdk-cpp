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
#include <aws/elasticmapreduce/model/InstanceFleetState.h>
#include <aws/elasticmapreduce/model/InstanceFleetStateChangeReason.h>
#include <aws/elasticmapreduce/model/InstanceFleetTimeline.h>
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
   * <p>The status of the instance fleet.</p> <note> <p>The instance fleet
   * configuration is available only in Amazon EMR versions 4.8.0 and later,
   * excluding 5.0.x versions.</p> </note><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceFleetStatus
  {
  public:
    InstanceFleetStatus();
    InstanceFleetStatus(Aws::Utils::Json::JsonView jsonValue);
    InstanceFleetStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A code representing the instance fleet status.</p> <ul> <li> <p>
     * <code>PROVISIONING</code>—The instance fleet is provisioning EC2 resources and
     * is not yet ready to run jobs.</p> </li> <li> <p> <code>BOOTSTRAPPING</code>—EC2
     * instances and other resources have been provisioned and the bootstrap actions
     * specified for the instances are underway.</p> </li> <li> <p>
     * <code>RUNNING</code>—EC2 instances and other resources are running. They are
     * either executing jobs or waiting to execute jobs.</p> </li> <li> <p>
     * <code>RESIZING</code>—A resize operation is underway. EC2 instances are either
     * being added or removed.</p> </li> <li> <p> <code>SUSPENDED</code>—A resize
     * operation could not complete. Existing EC2 instances are running, but instances
     * can't be added or removed.</p> </li> <li> <p> <code>TERMINATING</code>—The
     * instance fleet is terminating EC2 instances.</p> </li> <li> <p>
     * <code>TERMINATED</code>—The instance fleet is no longer active, and all EC2
     * instances have been terminated.</p> </li> </ul>
     */
    inline const InstanceFleetState& GetState() const{ return m_state; }

    /**
     * <p>A code representing the instance fleet status.</p> <ul> <li> <p>
     * <code>PROVISIONING</code>—The instance fleet is provisioning EC2 resources and
     * is not yet ready to run jobs.</p> </li> <li> <p> <code>BOOTSTRAPPING</code>—EC2
     * instances and other resources have been provisioned and the bootstrap actions
     * specified for the instances are underway.</p> </li> <li> <p>
     * <code>RUNNING</code>—EC2 instances and other resources are running. They are
     * either executing jobs or waiting to execute jobs.</p> </li> <li> <p>
     * <code>RESIZING</code>—A resize operation is underway. EC2 instances are either
     * being added or removed.</p> </li> <li> <p> <code>SUSPENDED</code>—A resize
     * operation could not complete. Existing EC2 instances are running, but instances
     * can't be added or removed.</p> </li> <li> <p> <code>TERMINATING</code>—The
     * instance fleet is terminating EC2 instances.</p> </li> <li> <p>
     * <code>TERMINATED</code>—The instance fleet is no longer active, and all EC2
     * instances have been terminated.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>A code representing the instance fleet status.</p> <ul> <li> <p>
     * <code>PROVISIONING</code>—The instance fleet is provisioning EC2 resources and
     * is not yet ready to run jobs.</p> </li> <li> <p> <code>BOOTSTRAPPING</code>—EC2
     * instances and other resources have been provisioned and the bootstrap actions
     * specified for the instances are underway.</p> </li> <li> <p>
     * <code>RUNNING</code>—EC2 instances and other resources are running. They are
     * either executing jobs or waiting to execute jobs.</p> </li> <li> <p>
     * <code>RESIZING</code>—A resize operation is underway. EC2 instances are either
     * being added or removed.</p> </li> <li> <p> <code>SUSPENDED</code>—A resize
     * operation could not complete. Existing EC2 instances are running, but instances
     * can't be added or removed.</p> </li> <li> <p> <code>TERMINATING</code>—The
     * instance fleet is terminating EC2 instances.</p> </li> <li> <p>
     * <code>TERMINATED</code>—The instance fleet is no longer active, and all EC2
     * instances have been terminated.</p> </li> </ul>
     */
    inline void SetState(const InstanceFleetState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>A code representing the instance fleet status.</p> <ul> <li> <p>
     * <code>PROVISIONING</code>—The instance fleet is provisioning EC2 resources and
     * is not yet ready to run jobs.</p> </li> <li> <p> <code>BOOTSTRAPPING</code>—EC2
     * instances and other resources have been provisioned and the bootstrap actions
     * specified for the instances are underway.</p> </li> <li> <p>
     * <code>RUNNING</code>—EC2 instances and other resources are running. They are
     * either executing jobs or waiting to execute jobs.</p> </li> <li> <p>
     * <code>RESIZING</code>—A resize operation is underway. EC2 instances are either
     * being added or removed.</p> </li> <li> <p> <code>SUSPENDED</code>—A resize
     * operation could not complete. Existing EC2 instances are running, but instances
     * can't be added or removed.</p> </li> <li> <p> <code>TERMINATING</code>—The
     * instance fleet is terminating EC2 instances.</p> </li> <li> <p>
     * <code>TERMINATED</code>—The instance fleet is no longer active, and all EC2
     * instances have been terminated.</p> </li> </ul>
     */
    inline void SetState(InstanceFleetState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>A code representing the instance fleet status.</p> <ul> <li> <p>
     * <code>PROVISIONING</code>—The instance fleet is provisioning EC2 resources and
     * is not yet ready to run jobs.</p> </li> <li> <p> <code>BOOTSTRAPPING</code>—EC2
     * instances and other resources have been provisioned and the bootstrap actions
     * specified for the instances are underway.</p> </li> <li> <p>
     * <code>RUNNING</code>—EC2 instances and other resources are running. They are
     * either executing jobs or waiting to execute jobs.</p> </li> <li> <p>
     * <code>RESIZING</code>—A resize operation is underway. EC2 instances are either
     * being added or removed.</p> </li> <li> <p> <code>SUSPENDED</code>—A resize
     * operation could not complete. Existing EC2 instances are running, but instances
     * can't be added or removed.</p> </li> <li> <p> <code>TERMINATING</code>—The
     * instance fleet is terminating EC2 instances.</p> </li> <li> <p>
     * <code>TERMINATED</code>—The instance fleet is no longer active, and all EC2
     * instances have been terminated.</p> </li> </ul>
     */
    inline InstanceFleetStatus& WithState(const InstanceFleetState& value) { SetState(value); return *this;}

    /**
     * <p>A code representing the instance fleet status.</p> <ul> <li> <p>
     * <code>PROVISIONING</code>—The instance fleet is provisioning EC2 resources and
     * is not yet ready to run jobs.</p> </li> <li> <p> <code>BOOTSTRAPPING</code>—EC2
     * instances and other resources have been provisioned and the bootstrap actions
     * specified for the instances are underway.</p> </li> <li> <p>
     * <code>RUNNING</code>—EC2 instances and other resources are running. They are
     * either executing jobs or waiting to execute jobs.</p> </li> <li> <p>
     * <code>RESIZING</code>—A resize operation is underway. EC2 instances are either
     * being added or removed.</p> </li> <li> <p> <code>SUSPENDED</code>—A resize
     * operation could not complete. Existing EC2 instances are running, but instances
     * can't be added or removed.</p> </li> <li> <p> <code>TERMINATING</code>—The
     * instance fleet is terminating EC2 instances.</p> </li> <li> <p>
     * <code>TERMINATED</code>—The instance fleet is no longer active, and all EC2
     * instances have been terminated.</p> </li> </ul>
     */
    inline InstanceFleetStatus& WithState(InstanceFleetState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Provides status change reason details for the instance fleet.</p>
     */
    inline const InstanceFleetStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>Provides status change reason details for the instance fleet.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>Provides status change reason details for the instance fleet.</p>
     */
    inline void SetStateChangeReason(const InstanceFleetStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>Provides status change reason details for the instance fleet.</p>
     */
    inline void SetStateChangeReason(InstanceFleetStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>Provides status change reason details for the instance fleet.</p>
     */
    inline InstanceFleetStatus& WithStateChangeReason(const InstanceFleetStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>Provides status change reason details for the instance fleet.</p>
     */
    inline InstanceFleetStatus& WithStateChangeReason(InstanceFleetStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    /**
     * <p>Provides historical timestamps for the instance fleet, including the time of
     * creation, the time it became ready to run jobs, and the time of termination.</p>
     */
    inline const InstanceFleetTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>Provides historical timestamps for the instance fleet, including the time of
     * creation, the time it became ready to run jobs, and the time of termination.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>Provides historical timestamps for the instance fleet, including the time of
     * creation, the time it became ready to run jobs, and the time of termination.</p>
     */
    inline void SetTimeline(const InstanceFleetTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>Provides historical timestamps for the instance fleet, including the time of
     * creation, the time it became ready to run jobs, and the time of termination.</p>
     */
    inline void SetTimeline(InstanceFleetTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>Provides historical timestamps for the instance fleet, including the time of
     * creation, the time it became ready to run jobs, and the time of termination.</p>
     */
    inline InstanceFleetStatus& WithTimeline(const InstanceFleetTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>Provides historical timestamps for the instance fleet, including the time of
     * creation, the time it became ready to run jobs, and the time of termination.</p>
     */
    inline InstanceFleetStatus& WithTimeline(InstanceFleetTimeline&& value) { SetTimeline(std::move(value)); return *this;}

  private:

    InstanceFleetState m_state;
    bool m_stateHasBeenSet;

    InstanceFleetStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;

    InstanceFleetTimeline m_timeline;
    bool m_timelineHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
