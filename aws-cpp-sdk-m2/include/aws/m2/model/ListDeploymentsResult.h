/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DeploymentSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListDeploymentsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDeploymentsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline const Aws::Vector<DeploymentSummary>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline void SetDeployments(const Aws::Vector<DeploymentSummary>& value) { m_deployments = value; }

    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline void SetDeployments(Aws::Vector<DeploymentSummary>&& value) { m_deployments = std::move(value); }

    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline ListDeploymentsResult& WithDeployments(const Aws::Vector<DeploymentSummary>& value) { SetDeployments(value); return *this;}

    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline ListDeploymentsResult& WithDeployments(Aws::Vector<DeploymentSummary>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline ListDeploymentsResult& AddDeployments(const DeploymentSummary& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline ListDeploymentsResult& AddDeployments(DeploymentSummary&& value) { m_deployments.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeploymentSummary> m_deployments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
