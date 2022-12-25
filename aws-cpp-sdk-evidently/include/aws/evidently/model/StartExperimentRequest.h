/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/DateTime.h>
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
  class StartExperimentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExperiment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisCompleteTime() const{ return m_analysisCompleteTime; }

    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline bool AnalysisCompleteTimeHasBeenSet() const { return m_analysisCompleteTimeHasBeenSet; }

    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline void SetAnalysisCompleteTime(const Aws::Utils::DateTime& value) { m_analysisCompleteTimeHasBeenSet = true; m_analysisCompleteTime = value; }

    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline void SetAnalysisCompleteTime(Aws::Utils::DateTime&& value) { m_analysisCompleteTimeHasBeenSet = true; m_analysisCompleteTime = std::move(value); }

    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline StartExperimentRequest& WithAnalysisCompleteTime(const Aws::Utils::DateTime& value) { SetAnalysisCompleteTime(value); return *this;}

    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline StartExperimentRequest& WithAnalysisCompleteTime(Aws::Utils::DateTime&& value) { SetAnalysisCompleteTime(std::move(value)); return *this;}


    /**
     * <p>The name of the experiment to start.</p>
     */
    inline const Aws::String& GetExperiment() const{ return m_experiment; }

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline void SetExperiment(const Aws::String& value) { m_experimentHasBeenSet = true; m_experiment = value; }

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline void SetExperiment(Aws::String&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline void SetExperiment(const char* value) { m_experimentHasBeenSet = true; m_experiment.assign(value); }

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline StartExperimentRequest& WithExperiment(const Aws::String& value) { SetExperiment(value); return *this;}

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline StartExperimentRequest& WithExperiment(Aws::String&& value) { SetExperiment(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment to start.</p>
     */
    inline StartExperimentRequest& WithExperiment(const char* value) { SetExperiment(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline StartExperimentRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline StartExperimentRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline StartExperimentRequest& WithProject(const char* value) { SetProject(value); return *this;}

  private:

    Aws::Utils::DateTime m_analysisCompleteTime;
    bool m_analysisCompleteTimeHasBeenSet = false;

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
