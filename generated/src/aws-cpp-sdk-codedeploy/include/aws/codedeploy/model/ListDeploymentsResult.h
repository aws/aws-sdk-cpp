/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>ListDeployments</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentsOutput">AWS
   * API Reference</a></p>
   */
  class ListDeploymentsResult
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentsResult();
    AWS_CODEDEPLOY_API ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of deployment IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline void SetDeployments(const Aws::Vector<Aws::String>& value) { m_deployments = value; }

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline void SetDeployments(Aws::Vector<Aws::String>&& value) { m_deployments = std::move(value); }

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline ListDeploymentsResult& WithDeployments(const Aws::Vector<Aws::String>& value) { SetDeployments(value); return *this;}

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline ListDeploymentsResult& WithDeployments(Aws::Vector<Aws::String>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline ListDeploymentsResult& AddDeployments(const Aws::String& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline ListDeploymentsResult& AddDeployments(Aws::String&& value) { m_deployments.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of deployment IDs.</p>
     */
    inline ListDeploymentsResult& AddDeployments(const char* value) { m_deployments.push_back(value); return *this; }


    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline ListDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployments call to return the next set of
     * deployments in the list.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_deployments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
