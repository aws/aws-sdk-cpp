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
   * <p>Represents the output of a ListDeployments operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ListDeploymentsResult
  {
  public:
    ListDeploymentsResult();
    ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
