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
    AWS_CLOUDWATCHEVIDENTLY_API BatchEvaluateFeatureRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchEvaluateFeature"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or ARN of the project that contains the feature being evaluated.</p>
     */
    inline const Aws::String& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = Aws::String>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = Aws::String>
    BatchEvaluateFeatureRequest& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures, where each structure assigns a feature variation to
     * one user session.</p>
     */
    inline const Aws::Vector<EvaluationRequest>& GetRequests() const { return m_requests; }
    inline bool RequestsHasBeenSet() const { return m_requestsHasBeenSet; }
    template<typename RequestsT = Aws::Vector<EvaluationRequest>>
    void SetRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests = std::forward<RequestsT>(value); }
    template<typename RequestsT = Aws::Vector<EvaluationRequest>>
    BatchEvaluateFeatureRequest& WithRequests(RequestsT&& value) { SetRequests(std::forward<RequestsT>(value)); return *this;}
    template<typename RequestsT = EvaluationRequest>
    BatchEvaluateFeatureRequest& AddRequests(RequestsT&& value) { m_requestsHasBeenSet = true; m_requests.emplace_back(std::forward<RequestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_project;
    bool m_projectHasBeenSet = false;

    Aws::Vector<EvaluationRequest> m_requests;
    bool m_requestsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
