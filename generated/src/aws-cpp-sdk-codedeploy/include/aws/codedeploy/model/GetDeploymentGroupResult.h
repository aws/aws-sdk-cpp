/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentGroupInfo.h>
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
   * <p>Represents the output of a <code>GetDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class GetDeploymentGroupResult
  {
  public:
    AWS_CODEDEPLOY_API GetDeploymentGroupResult();
    AWS_CODEDEPLOY_API GetDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deployment group.</p>
     */
    inline const DeploymentGroupInfo& GetDeploymentGroupInfo() const{ return m_deploymentGroupInfo; }

    /**
     * <p>Information about the deployment group.</p>
     */
    inline void SetDeploymentGroupInfo(const DeploymentGroupInfo& value) { m_deploymentGroupInfo = value; }

    /**
     * <p>Information about the deployment group.</p>
     */
    inline void SetDeploymentGroupInfo(DeploymentGroupInfo&& value) { m_deploymentGroupInfo = std::move(value); }

    /**
     * <p>Information about the deployment group.</p>
     */
    inline GetDeploymentGroupResult& WithDeploymentGroupInfo(const DeploymentGroupInfo& value) { SetDeploymentGroupInfo(value); return *this;}

    /**
     * <p>Information about the deployment group.</p>
     */
    inline GetDeploymentGroupResult& WithDeploymentGroupInfo(DeploymentGroupInfo&& value) { SetDeploymentGroupInfo(std::move(value)); return *this;}

  private:

    DeploymentGroupInfo m_deploymentGroupInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
