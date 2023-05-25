/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
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
  class GetExperimentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExperiment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline const Aws::String& GetExperiment() const{ return m_experiment; }

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline bool ExperimentHasBeenSet() const { return m_experimentHasBeenSet; }

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline void SetExperiment(const Aws::String& value) { m_experimentHasBeenSet = true; m_experiment = value; }

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline void SetExperiment(Aws::String&& value) { m_experimentHasBeenSet = true; m_experiment = std::move(value); }

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline void SetExperiment(const char* value) { m_experimentHasBeenSet = true; m_experiment.assign(value); }

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline GetExperimentRequest& WithExperiment(const Aws::String& value) { SetExperiment(value); return *this;}

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline GetExperimentRequest& WithExperiment(Aws::String&& value) { SetExperiment(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment that you want to see the details of.</p>
     */
    inline GetExperimentRequest& WithExperiment(const char* value) { SetExperiment(value); return *this;}


    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline GetExperimentRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline GetExperimentRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the experiment.</p>
     */
    inline GetExperimentRequest& WithProject(const char* value) { SetProject(value); return *this;}

  private:

    Aws::String m_experiment;
    bool m_experimentHasBeenSet = false;

    Aws::String m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
