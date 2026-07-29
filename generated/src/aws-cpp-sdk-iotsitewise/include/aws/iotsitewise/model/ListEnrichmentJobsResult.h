/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentJobSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
class ListEnrichmentJobsResult {
 public:
  AWS_IOTSITEWISE_API ListEnrichmentJobsResult() = default;
  AWS_IOTSITEWISE_API ListEnrichmentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API ListEnrichmentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Array of job summaries matching the filter criteria, ordered by creation time
   * descending (newest first). Each summary includes key identifiers (jobId,
   * datasetId, propertyAlias/timeSeriesId) and status information without the full
   * job configuration. Use DescribeEnrichmentJob to retrieve complete details.</p>
   */
  inline const Aws::Vector<EnrichmentJobSummary>& GetJobs() const { return m_jobs; }
  template <typename JobsT = Aws::Vector<EnrichmentJobSummary>>
  void SetJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs = std::forward<JobsT>(value);
  }
  template <typename JobsT = Aws::Vector<EnrichmentJobSummary>>
  ListEnrichmentJobsResult& WithJobs(JobsT&& value) {
    SetJobs(std::forward<JobsT>(value));
    return *this;
  }
  template <typename JobsT = EnrichmentJobSummary>
  ListEnrichmentJobsResult& AddJobs(JobsT&& value) {
    m_jobsHasBeenSet = true;
    m_jobs.emplace_back(std::forward<JobsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token to retrieve the next page of results. If present, more jobs
   * exist that match the filter criteria. Include this token in a subsequent
   * ListEnrichmentJobs request to retrieve the next page. If absent, you have
   * retrieved all matching jobs.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEnrichmentJobsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListEnrichmentJobsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EnrichmentJobSummary> m_jobs;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_jobsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
