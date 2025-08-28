/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace HealthLake
{
namespace Model
{

  /**
   */
  class ListFHIRImportJobsRequest : public HealthLakeRequest
  {
  public:
    AWS_HEALTHLAKE_API ListFHIRImportJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFHIRImportJobs"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Limits the response to the import job with the specified data store ID. </p>
     */
    inline const Aws::String& GetDatastoreId() const { return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    template<typename DatastoreIdT = Aws::String>
    void SetDatastoreId(DatastoreIdT&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::forward<DatastoreIdT>(value); }
    template<typename DatastoreIdT = Aws::String>
    ListFHIRImportJobsRequest& WithDatastoreId(DatastoreIdT&& value) { SetDatastoreId(std::forward<DatastoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used to identify the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFHIRImportJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the number of results returned for <code>ListFHIRImportJobs</code> to
     * a maximum quantity specified by the user.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFHIRImportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the response to the import job with the specified job name. </p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    ListFHIRImportJobsRequest& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the response to the import job with the specified job status. </p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline ListFHIRImportJobsRequest& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the response to FHIR import jobs submitted before a user- specified
     * date. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedBefore() const { return m_submittedBefore; }
    inline bool SubmittedBeforeHasBeenSet() const { return m_submittedBeforeHasBeenSet; }
    template<typename SubmittedBeforeT = Aws::Utils::DateTime>
    void SetSubmittedBefore(SubmittedBeforeT&& value) { m_submittedBeforeHasBeenSet = true; m_submittedBefore = std::forward<SubmittedBeforeT>(value); }
    template<typename SubmittedBeforeT = Aws::Utils::DateTime>
    ListFHIRImportJobsRequest& WithSubmittedBefore(SubmittedBeforeT&& value) { SetSubmittedBefore(std::forward<SubmittedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the response to FHIR import jobs submitted after a user-specified
     * date.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAfter() const { return m_submittedAfter; }
    inline bool SubmittedAfterHasBeenSet() const { return m_submittedAfterHasBeenSet; }
    template<typename SubmittedAfterT = Aws::Utils::DateTime>
    void SetSubmittedAfter(SubmittedAfterT&& value) { m_submittedAfterHasBeenSet = true; m_submittedAfter = std::forward<SubmittedAfterT>(value); }
    template<typename SubmittedAfterT = Aws::Utils::DateTime>
    ListFHIRImportJobsRequest& WithSubmittedAfter(SubmittedAfterT&& value) { SetSubmittedAfter(std::forward<SubmittedAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submittedBefore{};
    bool m_submittedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAfter{};
    bool m_submittedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
