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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{
  class AWS_GLUE_API ListJobsResult
  {
  public:
    ListJobsResult();
    ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobNames() const{ return m_jobNames; }

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline void SetJobNames(const Aws::Vector<Aws::String>& value) { m_jobNames = value; }

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline void SetJobNames(Aws::Vector<Aws::String>&& value) { m_jobNames = std::move(value); }

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline ListJobsResult& WithJobNames(const Aws::Vector<Aws::String>& value) { SetJobNames(value); return *this;}

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline ListJobsResult& WithJobNames(Aws::Vector<Aws::String>&& value) { SetJobNames(std::move(value)); return *this;}

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline ListJobsResult& AddJobNames(const Aws::String& value) { m_jobNames.push_back(value); return *this; }

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline ListJobsResult& AddJobNames(Aws::String&& value) { m_jobNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of all jobs in the account, or the jobs with the specified
     * tags.</p>
     */
    inline ListJobsResult& AddJobNames(const char* value) { m_jobNames.push_back(value); return *this; }


    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
