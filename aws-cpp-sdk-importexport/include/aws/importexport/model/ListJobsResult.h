/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/importexport/model/ResponseMetadata.h>
#include <aws/importexport/model/Job.h>

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
   * Output structure for the ListJobs operation.
   */
  class AWS_IMPORTEXPORT_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListJobsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = value; }

    
    inline ListJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    
    inline ListJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(value); return *this;}

    
    inline ListJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    
    inline ListJobsResult& AddJobs(Job&& value) { m_jobs.push_back(value); return *this; }

    
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    
    inline ListJobsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListJobsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListJobsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Job> m_jobs;
    bool m_isTruncated;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws