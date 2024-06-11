﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobDefinition.h>
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
namespace Batch
{
namespace Model
{
  class DescribeJobDefinitionsResult
  {
  public:
    AWS_BATCH_API DescribeJobDefinitionsResult();
    AWS_BATCH_API DescribeJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of job definitions.</p>
     */
    inline const Aws::Vector<JobDefinition>& GetJobDefinitions() const{ return m_jobDefinitions; }
    inline void SetJobDefinitions(const Aws::Vector<JobDefinition>& value) { m_jobDefinitions = value; }
    inline void SetJobDefinitions(Aws::Vector<JobDefinition>&& value) { m_jobDefinitions = std::move(value); }
    inline DescribeJobDefinitionsResult& WithJobDefinitions(const Aws::Vector<JobDefinition>& value) { SetJobDefinitions(value); return *this;}
    inline DescribeJobDefinitionsResult& WithJobDefinitions(Aws::Vector<JobDefinition>&& value) { SetJobDefinitions(std::move(value)); return *this;}
    inline DescribeJobDefinitionsResult& AddJobDefinitions(const JobDefinition& value) { m_jobDefinitions.push_back(value); return *this; }
    inline DescribeJobDefinitionsResult& AddJobDefinitions(JobDefinition&& value) { m_jobDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeJobDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeJobDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeJobDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobDefinition> m_jobDefinitions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
