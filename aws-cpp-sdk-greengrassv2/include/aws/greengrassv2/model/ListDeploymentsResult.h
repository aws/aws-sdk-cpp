/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/Deployment.h>
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
namespace GreengrassV2
{
namespace Model
{
  class ListDeploymentsResult
  {
  public:
    AWS_GREENGRASSV2_API ListDeploymentsResult();
    AWS_GREENGRASSV2_API ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline const Aws::Vector<Deployment>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline void SetDeployments(const Aws::Vector<Deployment>& value) { m_deployments = value; }

    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline void SetDeployments(Aws::Vector<Deployment>&& value) { m_deployments = std::move(value); }

    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline ListDeploymentsResult& WithDeployments(const Aws::Vector<Deployment>& value) { SetDeployments(value); return *this;}

    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline ListDeploymentsResult& WithDeployments(Aws::Vector<Deployment>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline ListDeploymentsResult& AddDeployments(const Deployment& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each deployment.</p>
     */
    inline ListDeploymentsResult& AddDeployments(Deployment&& value) { m_deployments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Deployment> m_deployments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
