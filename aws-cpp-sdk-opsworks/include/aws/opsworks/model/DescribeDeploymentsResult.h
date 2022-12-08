/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeDeploymentsResult
  {
  public:
    AWS_OPSWORKS_API DescribeDeploymentsResult();
    AWS_OPSWORKS_API DescribeDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
