/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/TransformationJobStatus.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>ListDataTransformationJobs</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListDataTransformationJobsRequest">AWS
 * API Reference</a></p>
 */
class ListDataTransformationJobsRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API ListDataTransformationJobsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDataTransformationJobs"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The maximum number of jobs to return per page. If you don't specify a value,
   * the service returns up to 100 results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDataTransformationJobsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token from a previous response. Pass this value to retrieve
   * the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataTransformationJobsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only jobs with the specified status.</p>
   */
  inline TransformationJobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(TransformationJobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline ListDataTransformationJobsRequest& WithJobStatus(TransformationJobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only jobs with the specified name.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  ListDataTransformationJobsRequest& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only jobs submitted at or after this
   * timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedAfter() const { return m_submittedAfter; }
  inline bool SubmittedAfterHasBeenSet() const { return m_submittedAfterHasBeenSet; }
  template <typename SubmittedAfterT = Aws::Utils::DateTime>
  void SetSubmittedAfter(SubmittedAfterT&& value) {
    m_submittedAfterHasBeenSet = true;
    m_submittedAfter = std::forward<SubmittedAfterT>(value);
  }
  template <typename SubmittedAfterT = Aws::Utils::DateTime>
  ListDataTransformationJobsRequest& WithSubmittedAfter(SubmittedAfterT&& value) {
    SetSubmittedAfter(std::forward<SubmittedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to include only jobs submitted at or before this
   * timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetSubmittedBefore() const { return m_submittedBefore; }
  inline bool SubmittedBeforeHasBeenSet() const { return m_submittedBeforeHasBeenSet; }
  template <typename SubmittedBeforeT = Aws::Utils::DateTime>
  void SetSubmittedBefore(SubmittedBeforeT&& value) {
    m_submittedBeforeHasBeenSet = true;
    m_submittedBefore = std::forward<SubmittedBeforeT>(value);
  }
  template <typename SubmittedBeforeT = Aws::Utils::DateTime>
  ListDataTransformationJobsRequest& WithSubmittedBefore(SubmittedBeforeT&& value) {
    SetSubmittedBefore(std::forward<SubmittedBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};

  Aws::String m_nextToken;

  TransformationJobStatus m_jobStatus{TransformationJobStatus::NOT_SET};

  Aws::String m_jobName;

  Aws::Utils::DateTime m_submittedAfter{};

  Aws::Utils::DateTime m_submittedBefore{};
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_submittedAfterHasBeenSet = false;
  bool m_submittedBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
