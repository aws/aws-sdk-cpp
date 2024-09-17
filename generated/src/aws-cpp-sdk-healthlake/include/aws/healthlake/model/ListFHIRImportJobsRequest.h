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
    AWS_HEALTHLAKE_API ListFHIRImportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFHIRImportJobs"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> This parameter limits the response to the import job with the specified data
     * store ID. </p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline ListFHIRImportJobsRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline ListFHIRImportJobsRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline ListFHIRImportJobsRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRImportJobs query. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListFHIRImportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFHIRImportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFHIRImportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This parameter limits the number of results returned for a
     * ListFHIRImportJobs to a maximum quantity specified by the user. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListFHIRImportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This parameter limits the response to the import job with the specified job
     * name. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ListFHIRImportJobsRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ListFHIRImportJobsRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ListFHIRImportJobsRequest& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> This parameter limits the response to the import job with the specified job
     * status. </p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline ListFHIRImportJobsRequest& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline ListFHIRImportJobsRequest& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This parameter limits the response to FHIR import jobs submitted before a
     * user specified date. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedBefore() const{ return m_submittedBefore; }
    inline bool SubmittedBeforeHasBeenSet() const { return m_submittedBeforeHasBeenSet; }
    inline void SetSubmittedBefore(const Aws::Utils::DateTime& value) { m_submittedBeforeHasBeenSet = true; m_submittedBefore = value; }
    inline void SetSubmittedBefore(Aws::Utils::DateTime&& value) { m_submittedBeforeHasBeenSet = true; m_submittedBefore = std::move(value); }
    inline ListFHIRImportJobsRequest& WithSubmittedBefore(const Aws::Utils::DateTime& value) { SetSubmittedBefore(value); return *this;}
    inline ListFHIRImportJobsRequest& WithSubmittedBefore(Aws::Utils::DateTime&& value) { SetSubmittedBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This parameter limits the response to FHIR import jobs submitted after a
     * user specified date. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAfter() const{ return m_submittedAfter; }
    inline bool SubmittedAfterHasBeenSet() const { return m_submittedAfterHasBeenSet; }
    inline void SetSubmittedAfter(const Aws::Utils::DateTime& value) { m_submittedAfterHasBeenSet = true; m_submittedAfter = value; }
    inline void SetSubmittedAfter(Aws::Utils::DateTime&& value) { m_submittedAfterHasBeenSet = true; m_submittedAfter = std::move(value); }
    inline ListFHIRImportJobsRequest& WithSubmittedAfter(const Aws::Utils::DateTime& value) { SetSubmittedAfter(value); return *this;}
    inline ListFHIRImportJobsRequest& WithSubmittedAfter(Aws::Utils::DateTime&& value) { SetSubmittedAfter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submittedBefore;
    bool m_submittedBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAfter;
    bool m_submittedAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
