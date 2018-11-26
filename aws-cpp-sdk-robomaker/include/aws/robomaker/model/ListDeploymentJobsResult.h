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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/DeploymentJob.h>
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
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API ListDeploymentJobsResult
  {
  public:
    ListDeploymentJobsResult();
    ListDeploymentJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDeploymentJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<DeploymentJob>& GetDeploymentJobs() const{ return m_deploymentJobs; }

    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline void SetDeploymentJobs(const Aws::Vector<DeploymentJob>& value) { m_deploymentJobs = value; }

    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline void SetDeploymentJobs(Aws::Vector<DeploymentJob>&& value) { m_deploymentJobs = std::move(value); }

    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline ListDeploymentJobsResult& WithDeploymentJobs(const Aws::Vector<DeploymentJob>& value) { SetDeploymentJobs(value); return *this;}

    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline ListDeploymentJobsResult& WithDeploymentJobs(Aws::Vector<DeploymentJob>&& value) { SetDeploymentJobs(std::move(value)); return *this;}

    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline ListDeploymentJobsResult& AddDeploymentJobs(const DeploymentJob& value) { m_deploymentJobs.push_back(value); return *this; }

    /**
     * <p>A list of deployment jobs that meet the criteria of the request.</p>
     */
    inline ListDeploymentJobsResult& AddDeploymentJobs(DeploymentJob&& value) { m_deploymentJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListDeploymentJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListDeploymentJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListDeploymentJobs</code> request. When the results of a
     * <code>ListDeploymentJobs</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListDeploymentJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeploymentJob> m_deploymentJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
