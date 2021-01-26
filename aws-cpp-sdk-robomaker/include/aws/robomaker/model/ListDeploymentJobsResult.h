/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListDeploymentJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListDeploymentJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListDeploymentJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListDeploymentJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeploymentJob> m_deploymentJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
