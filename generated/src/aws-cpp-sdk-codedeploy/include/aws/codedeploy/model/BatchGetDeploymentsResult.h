/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/DeploymentInfo.h>
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
   * <p> Represents the output of a <code>BatchGetDeployments</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentsOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetDeploymentsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentsResult();
    AWS_CODEDEPLOY_API BatchGetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Information about the deployments. </p>
     */
    inline const Aws::Vector<DeploymentInfo>& GetDeploymentsInfo() const{ return m_deploymentsInfo; }

    /**
     * <p> Information about the deployments. </p>
     */
    inline void SetDeploymentsInfo(const Aws::Vector<DeploymentInfo>& value) { m_deploymentsInfo = value; }

    /**
     * <p> Information about the deployments. </p>
     */
    inline void SetDeploymentsInfo(Aws::Vector<DeploymentInfo>&& value) { m_deploymentsInfo = std::move(value); }

    /**
     * <p> Information about the deployments. </p>
     */
    inline BatchGetDeploymentsResult& WithDeploymentsInfo(const Aws::Vector<DeploymentInfo>& value) { SetDeploymentsInfo(value); return *this;}

    /**
     * <p> Information about the deployments. </p>
     */
    inline BatchGetDeploymentsResult& WithDeploymentsInfo(Aws::Vector<DeploymentInfo>&& value) { SetDeploymentsInfo(std::move(value)); return *this;}

    /**
     * <p> Information about the deployments. </p>
     */
    inline BatchGetDeploymentsResult& AddDeploymentsInfo(const DeploymentInfo& value) { m_deploymentsInfo.push_back(value); return *this; }

    /**
     * <p> Information about the deployments. </p>
     */
    inline BatchGetDeploymentsResult& AddDeploymentsInfo(DeploymentInfo&& value) { m_deploymentsInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<DeploymentInfo> m_deploymentsInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
