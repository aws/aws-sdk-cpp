/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/importexport/model/ResponseMetadata.h>
#include <aws/importexport/model/Job.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace ImportExport
{
namespace Model
{
  /**
   * Output structure for the ListJobs operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/ListJobsOutput">AWS
   * API Reference</a></p>
   */
  class ListJobsResult
  {
  public:
    AWS_IMPORTEXPORT_API ListJobsResult() = default;
    AWS_IMPORTEXPORT_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IMPORTEXPORT_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Vector<Job>& GetJobs() const { return m_jobs; }
    template<typename JobsT = Aws::Vector<Job>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<Job>>
    ListJobsResult& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = Job>
    ListJobsResult& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListJobsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListJobsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Job> m_jobs;
    bool m_jobsHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
