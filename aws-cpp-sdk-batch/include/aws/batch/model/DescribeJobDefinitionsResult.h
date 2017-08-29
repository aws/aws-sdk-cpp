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
  class AWS_BATCH_API DescribeJobDefinitionsResult
  {
  public:
    DescribeJobDefinitionsResult();
    DescribeJobDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeJobDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of job definitions. </p>
     */
    inline const Aws::Vector<JobDefinition>& GetJobDefinitions() const{ return m_jobDefinitions; }

    /**
     * <p>The list of job definitions. </p>
     */
    inline void SetJobDefinitions(const Aws::Vector<JobDefinition>& value) { m_jobDefinitions = value; }

    /**
     * <p>The list of job definitions. </p>
     */
    inline void SetJobDefinitions(Aws::Vector<JobDefinition>&& value) { m_jobDefinitions = std::move(value); }

    /**
     * <p>The list of job definitions. </p>
     */
    inline DescribeJobDefinitionsResult& WithJobDefinitions(const Aws::Vector<JobDefinition>& value) { SetJobDefinitions(value); return *this;}

    /**
     * <p>The list of job definitions. </p>
     */
    inline DescribeJobDefinitionsResult& WithJobDefinitions(Aws::Vector<JobDefinition>&& value) { SetJobDefinitions(std::move(value)); return *this;}

    /**
     * <p>The list of job definitions. </p>
     */
    inline DescribeJobDefinitionsResult& AddJobDefinitions(const JobDefinition& value) { m_jobDefinitions.push_back(value); return *this; }

    /**
     * <p>The list of job definitions. </p>
     */
    inline DescribeJobDefinitionsResult& AddJobDefinitions(JobDefinition&& value) { m_jobDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeJobDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeJobDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeJobDefinitions</code> request. When the results of a
     * <code>DescribeJobDefinitions</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeJobDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobDefinition> m_jobDefinitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
