﻿/**
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
  class AWS_HEALTHLAKE_API ListFHIRExportJobsRequest : public HealthLakeRequest
  {
  public:
    ListFHIRExportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFHIRExportJobs"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline ListFHIRExportJobsRequest& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline ListFHIRExportJobsRequest& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p> This parameter limits the response to the export job with the specified Data
     * Store ID. </p>
     */
    inline ListFHIRExportJobsRequest& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline ListFHIRExportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline ListFHIRExportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A pagination token used to identify the next page of results to return for a
     * ListFHIRExportJobs query. </p>
     */
    inline ListFHIRExportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> This parameter limits the number of results returned for a
     * ListFHIRExportJobs to a maximum quantity specified by the user. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> This parameter limits the number of results returned for a
     * ListFHIRExportJobs to a maximum quantity specified by the user. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> This parameter limits the number of results returned for a
     * ListFHIRExportJobs to a maximum quantity specified by the user. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> This parameter limits the number of results returned for a
     * ListFHIRExportJobs to a maximum quantity specified by the user. </p>
     */
    inline ListFHIRExportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline ListFHIRExportJobsRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline ListFHIRExportJobsRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p> This parameter limits the response to the export job with the specified job
     * name. </p>
     */
    inline ListFHIRExportJobsRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p> This parameter limits the response to the export jobs with the specified job
     * status. </p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p> This parameter limits the response to the export jobs with the specified job
     * status. </p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p> This parameter limits the response to the export jobs with the specified job
     * status. </p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p> This parameter limits the response to the export jobs with the specified job
     * status. </p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p> This parameter limits the response to the export jobs with the specified job
     * status. </p>
     */
    inline ListFHIRExportJobsRequest& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p> This parameter limits the response to the export jobs with the specified job
     * status. </p>
     */
    inline ListFHIRExportJobsRequest& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p> This parameter limits the response to FHIR export jobs submitted before a
     * user specified date. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedBefore() const{ return m_submittedBefore; }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted before a
     * user specified date. </p>
     */
    inline bool SubmittedBeforeHasBeenSet() const { return m_submittedBeforeHasBeenSet; }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted before a
     * user specified date. </p>
     */
    inline void SetSubmittedBefore(const Aws::Utils::DateTime& value) { m_submittedBeforeHasBeenSet = true; m_submittedBefore = value; }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted before a
     * user specified date. </p>
     */
    inline void SetSubmittedBefore(Aws::Utils::DateTime&& value) { m_submittedBeforeHasBeenSet = true; m_submittedBefore = std::move(value); }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted before a
     * user specified date. </p>
     */
    inline ListFHIRExportJobsRequest& WithSubmittedBefore(const Aws::Utils::DateTime& value) { SetSubmittedBefore(value); return *this;}

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted before a
     * user specified date. </p>
     */
    inline ListFHIRExportJobsRequest& WithSubmittedBefore(Aws::Utils::DateTime&& value) { SetSubmittedBefore(std::move(value)); return *this;}


    /**
     * <p> This parameter limits the response to FHIR export jobs submitted after a
     * user specified date. </p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAfter() const{ return m_submittedAfter; }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted after a
     * user specified date. </p>
     */
    inline bool SubmittedAfterHasBeenSet() const { return m_submittedAfterHasBeenSet; }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted after a
     * user specified date. </p>
     */
    inline void SetSubmittedAfter(const Aws::Utils::DateTime& value) { m_submittedAfterHasBeenSet = true; m_submittedAfter = value; }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted after a
     * user specified date. </p>
     */
    inline void SetSubmittedAfter(Aws::Utils::DateTime&& value) { m_submittedAfterHasBeenSet = true; m_submittedAfter = std::move(value); }

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted after a
     * user specified date. </p>
     */
    inline ListFHIRExportJobsRequest& WithSubmittedAfter(const Aws::Utils::DateTime& value) { SetSubmittedAfter(value); return *this;}

    /**
     * <p> This parameter limits the response to FHIR export jobs submitted after a
     * user specified date. </p>
     */
    inline ListFHIRExportJobsRequest& WithSubmittedAfter(Aws::Utils::DateTime&& value) { SetSubmittedAfter(std::move(value)); return *this;}

  private:

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;

    Aws::Utils::DateTime m_submittedBefore;
    bool m_submittedBeforeHasBeenSet;

    Aws::Utils::DateTime m_submittedAfter;
    bool m_submittedAfterHasBeenSet;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
