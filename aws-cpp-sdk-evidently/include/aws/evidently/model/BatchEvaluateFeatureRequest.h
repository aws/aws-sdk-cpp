/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evidently/model/EvaluationRequest.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class BatchEvaluateFeatureRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API BatchEvaluateFeatureRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEvaluateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline const Aws::String& GetProject() const{ return m_project; }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline void SetProject(const Aws::String& value) { m_projectHasBeenSet = true; m_project = value; }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline void SetProject(Aws::String&& value) { m_projectHasBeenSet = true; m_project = std::move(value); }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline void SetProject(const char* value) { m_projectHasBeenSet = true; m_project.assign(value); }

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline BatchEvaluateFeatureRequest& WithProject(const Aws::String& value) { SetProject(value); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline BatchEvaluateFeatureRequest& WithProject(Aws::String&& value) { SetProject(std::move(value)); return *this;}

    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline BatchEvaluateFeatureRequest& WithProject(const char* value) { SetProject(value); return *this;}


    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline const Aws::Vector<EvaluationRequest>& GetRequests() const{ return m_requests; }

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline void SetRequests(const Aws::Vector<EvaluationRequest>& value) { m_requestsHasBeenSet = true; m_requests = value; }

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline void SetRequests(Aws::Vector<EvaluationRequest>&& value) { m_requestsHasBeenSet = true; m_requests = std::move(value); }

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline BatchEvaluateFeatureRequest& WithRequests(const Aws::Vector<EvaluationRequest>& value) { SetRequests(value); return *this;}

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline BatchEvaluateFeatureRequest& WithRequests(Aws::Vector<EvaluationRequest>&& value) { SetRequests(std::move(value)); return *this;}

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline BatchEvaluateFeatureRequest& AddRequests(const EvaluationRequest& value) { m_requestsHasBeenSet = true; m_requests.push_back(value); return *this; }

    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline BatchEvaluateFeatureRequest& AddRequests(EvaluationRequest&& value) { m_requestsHasBeenSet = true; m_requests.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<EvaluationRequest> m_requests;
    bool m_requestsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
