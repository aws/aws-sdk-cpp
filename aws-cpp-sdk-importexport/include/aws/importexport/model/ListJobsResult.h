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
    AWS_IMPORTEXPORT_API ListJobsResult();
    AWS_IMPORTEXPORT_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IMPORTEXPORT_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }

    
    inline ListJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    
    inline ListJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}

    
    inline ListJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    
    inline ListJobsResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }


    
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    
    inline ListJobsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListJobsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListJobsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Job> m_jobs;

    bool m_isTruncated;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
