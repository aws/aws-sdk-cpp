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
    AWS_CLOUDWATCHEVIDENTLY_API StopLaunchRequest();

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
    inline const LaunchStopDesiredState& GetDesiredState() const{ return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(const LaunchStopDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline void SetDesiredState(LaunchStopDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }
    inline StopLaunchRequest& WithDesiredState(const LaunchStopDesiredState& value) { SetDesiredState(value); return *this;}
    inline StopLaunchRequest& WithDesiredState(LaunchStopDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch to stop.</p>
     */
    inline const Aws::String& GetLaunch() const{ return m_launch; }
    inline bool LaunchHasBeenSet() const { return m_launchHasBeenSet; }
    inline void SetLaunch(const Aws::String& value) { m_launchHasBeenSet = true; m_launch = value; }
    inline void SetLaunch(Aws::String&& value) { m_launchHasBeenSet = true; m_launch = std::move(value); }
    inline void SetLaunch(const char* value) { m_launchHasBeenSet = true; m_launch.assign(value); }
    inline StopLaunchRequest& WithLaunch(const Aws::String& value) { SetLaunch(value); return *this;}
    inline StopLaunchRequest& WithLaunch(Aws::String&& value) { SetLaunch(std::move(value)); return *this;}
    inline StopLaunchRequest& WithLaunch(const char* value) { SetLaunch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the launch that you want to
     * stop.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }
    inline StopLaunchRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}
    inline StopLaunchRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}
    inline StopLaunchRequest& WithProject(const char* value) { SetProject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes why you are stopping the launch.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline StopLaunchRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline StopLaunchRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline StopLaunchRequest& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    LaunchStopDesiredState m_desiredState;
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
