﻿/*
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
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobListEntry.h>

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
namespace Snowball
{
namespace Model
{
  class AWS_SNOWBALL_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline const Aws::Vector<JobListEntry>& GetJobListEntries() const{ return m_jobListEntries; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline void SetJobListEntries(const Aws::Vector<JobListEntry>& value) { m_jobListEntries = value; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline void SetJobListEntries(Aws::Vector<JobListEntry>&& value) { m_jobListEntries = value; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& WithJobListEntries(const Aws::Vector<JobListEntry>& value) { SetJobListEntries(value); return *this;}

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& WithJobListEntries(Aws::Vector<JobListEntry>&& value) { SetJobListEntries(value); return *this;}

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& AddJobListEntries(const JobListEntry& value) { m_jobListEntries.push_back(value); return *this; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& AddJobListEntries(JobListEntry&& value) { m_jobListEntries.push_back(value); return *this; }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<JobListEntry> m_jobListEntries;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
