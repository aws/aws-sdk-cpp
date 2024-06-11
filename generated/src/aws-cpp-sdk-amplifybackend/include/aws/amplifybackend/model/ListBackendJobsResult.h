﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifybackend/model/BackendJobRespObj.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class ListBackendJobsResult
  {
  public:
    AWS_AMPLIFYBACKEND_API ListBackendJobsResult();
    AWS_AMPLIFYBACKEND_API ListBackendJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYBACKEND_API ListBackendJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of jobs and their properties.</p>
     */
    inline const Aws::Vector<BackendJobRespObj>& GetJobs() const{ return m_jobs; }
    inline void SetJobs(const Aws::Vector<BackendJobRespObj>& value) { m_jobs = value; }
    inline void SetJobs(Aws::Vector<BackendJobRespObj>&& value) { m_jobs = std::move(value); }
    inline ListBackendJobsResult& WithJobs(const Aws::Vector<BackendJobRespObj>& value) { SetJobs(value); return *this;}
    inline ListBackendJobsResult& WithJobs(Aws::Vector<BackendJobRespObj>&& value) { SetJobs(std::move(value)); return *this;}
    inline ListBackendJobsResult& AddJobs(const BackendJobRespObj& value) { m_jobs.push_back(value); return *this; }
    inline ListBackendJobsResult& AddJobs(BackendJobRespObj&& value) { m_jobs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListBackendJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListBackendJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListBackendJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListBackendJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListBackendJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListBackendJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BackendJobRespObj> m_jobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
