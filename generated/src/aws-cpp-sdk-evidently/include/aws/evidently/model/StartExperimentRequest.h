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
    AWS_CLOUDWATCHEVIDENTLY_API StartExperimentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExperiment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The date and time to end the experiment. This must be no more than 30 days
     * after the experiment starts.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalysisCompleteTime() const { return m_analysisCompleteTime; }
    inline bool AnalysisCompleteTimeHasBeenSet() const { return m_analysisCompleteTimeHasBeenSet; }
    template<typename AnalysisCompleteTimeT = Aws::Utils::DateTime>
    void SetAnalysisCompleteTime(AnalysisCompleteTimeT&& value) { m_analysisCompleteTimeHasBeenSet = true; m_analysisCompleteTime = std::forward<AnalysisCompleteTimeT>(value); }
    template<typename AnalysisCompleteTimeT = Aws::Utils::DateTime>
    StartExperimentRequest& WithAnalysisCompleteTime(AnalysisCompleteTimeT&& value) { SetAnalysisCompleteTime(std::forward<AnalysisCompleteTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment to start.</p>
     */
    inline const Aws::String& GetExperiment() const { return m_experiment; }
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }
    template<typename ExperimentT = Aws::String>
    void SetExperiment(ExperimentT&& value) { m_experimentHasBeenSet = true; m_experiment = std::forward<ExperimentT>(value); }
    template<typename ExperimentT = Aws::String>
    StartExperimentRequest& WithExperiment(ExperimentT&& value) { SetExperiment(std::forward<ExperimentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the project that contains the experiment to start.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    StartExperimentRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_analysisCompleteTime{};
    bool m_analysisCompleteTimeHasBeenSet = false;

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
