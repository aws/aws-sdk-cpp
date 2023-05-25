/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/evidently/model/ExperimentStopDesiredState.h>
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
  class StopExperimentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StopExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopExperiment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>Specify whether the experiment is to be considered <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline const ExperimentStopDesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>Specify whether the experiment is to be considered <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>Specify whether the experiment is to be considered <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline void SetDesiredState(const ExperimentStopDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>Specify whether the experiment is to be considered <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline void SetDesiredState(ExperimentStopDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>Specify whether the experiment is to be considered <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline StopExperimentRequest& WithDesiredState(const ExperimentStopDesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>Specify whether the experiment is to be considered <code>COMPLETED</code> or
     * <code>CANCELLED</code> after it stops.</p>
     */
    inline StopExperimentRequest& WithDesiredState(ExperimentStopDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline const Aws::String& GetExperiment() const{ return m_experiment; }

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline void SetExperiment(const Aws::String& value) { m_experimentHasBeenSet = true; m_experiment = value; }

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline void SetExperiment(Aws::String&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline void SetExperiment(const char* value) { m_experimentHasBeenSet = true; m_experiment.assign(value); }

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline StopExperimentRequest& WithExperiment(const Aws::String& value) { SetExperiment(value); return *this;}

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline StopExperimentRequest& WithExperiment(Aws::String&& value) { SetExperiment(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment to stop.</p>
     */
    inline StopExperimentRequest& WithExperiment(const char* value) { SetExperiment(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline StopExperimentRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline StopExperimentRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment to stop.</p>
     */
    inline StopExperimentRequest& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline StopExperimentRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline StopExperimentRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A string that describes why you are stopping the experiment.</p>
     */
    inline StopExperimentRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    ExperimentStopDesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
