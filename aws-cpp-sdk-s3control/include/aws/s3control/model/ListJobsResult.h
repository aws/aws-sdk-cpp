/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/JobListDescriptor.h>
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
namespace S3Control
{
namespace Model
{
  class AWS_S3CONTROL_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the <code>List Jobs</code> request produced more than the maximum number
     * of results, you can pass this value into a subsequent <code>List Jobs</code>
     * request in order to retrieve the next page of results.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline const Aws::Vector<JobListDescriptor>& GetJobs() const{ return m_jobs; }

    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline void SetJobs(const Aws::Vector<JobListDescriptor>& value) { m_jobs = value; }

    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline void SetJobs(Aws::Vector<JobListDescriptor>&& value) { m_jobs = std::move(value); }

    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline ListJobsResult& WithJobs(const Aws::Vector<JobListDescriptor>& value) { SetJobs(value); return *this;}

    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline ListJobsResult& WithJobs(Aws::Vector<JobListDescriptor>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline ListJobsResult& AddJobs(const JobListDescriptor& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>The list of current jobs and jobs that have ended within the last 30
     * days.</p>
     */
    inline ListJobsResult& AddJobs(JobListDescriptor&& value) { m_jobs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<JobListDescriptor> m_jobs;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
