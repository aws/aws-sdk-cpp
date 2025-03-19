/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/model/LaunchStopDesiredState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class StopLaunchRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StopLaunchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopLaunch"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify whether to consider the launch as <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline LaunchStopDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(LaunchStopDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline StopLaunchRequest& WithDesiredState(LaunchStopDesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch to stop.</p>
     */
    inline const Aws::String& GetLaunch() const { return m_launch; }
    inline bool LaunchHasBeenSet() const { return m_launchHasBeenSet; }
    template<typename LaunchT = Aws::String>
    void SetLaunch(LaunchT&& value) { m_launchHasBeenSet = true; m_launch = std::forward<LaunchT>(value); }
    template<typename LaunchT = Aws::String>
    StopLaunchRequest& WithLaunch(LaunchT&& value) { SetLaunch(std::forward<LaunchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the launch that you want to
     * stop.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    StopLaunchRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes why you are stopping the launch.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    StopLaunchRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    LaunchStopDesiredState m_desiredState{LaunchStopDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    Aws::String m_launch;
    bool m_launchHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
