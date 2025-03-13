/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glacier/Glacier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glacier/model/GlacierJobDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Glacier
{
namespace Model
{
  /**
   * <p>Contains the Amazon S3 Glacier response to your request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glacier-2012-06-01/ListJobsOutput">AWS
   * API Reference</a></p>
   */
  class ListJobsResult
  {
  public:
    AWS_GLACIER_API ListJobsResult() = default;
    AWS_GLACIER_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLACIER_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of job objects. Each job object contains metadata describing the
     * job.</p>
     */
    inline const Aws::Vector<GlacierJobDescription>& GetJobList() const { return m_jobList; }
    template<typename JobListT = Aws::Vector<GlacierJobDescription>>
    void SetJobList(JobListT&& value) { m_jobListHasBeenSet = true; m_jobList = std::forward<JobListT>(value); }
    template<typename JobListT = Aws::Vector<GlacierJobDescription>>
    ListJobsResult& WithJobList(JobListT&& value) { SetJobList(std::forward<JobListT>(value)); return *this;}
    template<typename JobListT = GlacierJobDescription>
    ListJobsResult& AddJobList(JobListT&& value) { m_jobListHasBeenSet = true; m_jobList.emplace_back(std::forward<JobListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An opaque string used for pagination that specifies the job at which the
     * listing of jobs should begin. You get the <code>marker</code> value from a
     * previous List Jobs response. You only need to include the marker if you are
     * continuing the pagination of the results started in a previous List Jobs
     * request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListJobsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GlacierJobDescription> m_jobList;
    bool m_jobListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glacier
} // namespace Aws
