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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/Deployment.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeDeployments</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeDeploymentsResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeDeploymentsResult
  {
  public:
    DescribeDeploymentsResult();
    DescribeDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline const Aws::Vector<Deployment>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline void SetDeployments(const Aws::Vector<Deployment>& value) { m_deployments = value; }

    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline void SetDeployments(Aws::Vector<Deployment>&& value) { m_deployments = std::move(value); }

    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline DescribeDeploymentsResult& WithDeployments(const Aws::Vector<Deployment>& value) { SetDeployments(value); return *this;}

    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline DescribeDeploymentsResult& WithDeployments(Aws::Vector<Deployment>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline DescribeDeploymentsResult& AddDeployments(const Deployment& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>An array of <code>Deployment</code> objects that describe the
     * deployments.</p>
     */
    inline DescribeDeploymentsResult& AddDeployments(Deployment&& value) { m_deployments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Deployment> m_deployments;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
