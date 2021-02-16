﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/Job.h>
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
namespace GlueDataBrew
{
namespace Model
{
  class AWS_GLUEDATABREW_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline void SetJobs(const Aws::Vector<Job>& value) { m_jobs = value; }

    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline void SetJobs(Aws::Vector<Job>&& value) { m_jobs = std::move(value); }

    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline ListJobsResult& WithJobs(const Aws::Vector<Job>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline ListJobsResult& WithJobs(Aws::Vector<Job>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline ListJobsResult& AddJobs(const Job& value) { m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of jobs that are defined.</p>
     */
    inline ListJobsResult& AddJobs(Job&& value) { m_jobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent call to retrieve the next set of
     * results.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Job> m_jobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
