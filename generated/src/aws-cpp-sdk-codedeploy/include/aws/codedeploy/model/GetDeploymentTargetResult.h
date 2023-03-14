/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentTarget.h>
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
  class GetDeploymentTargetResult
  {
  public:
    AWS_CODEDEPLOY_API GetDeploymentTargetResult();
    AWS_CODEDEPLOY_API GetDeploymentTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetDeploymentTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A deployment target that contains information about a deployment such as its
     * status, lifecycle events, and when it was last updated. It also contains
     * metadata about the deployment target. The deployment target metadata depends on
     * the deployment target's type (<code>instanceTarget</code>,
     * <code>lambdaTarget</code>, or <code>ecsTarget</code>). </p>
     */
    inline const DeploymentTarget& GetDeploymentTarget() const{ return m_deploymentTarget; }

    /**
     * <p> A deployment target that contains information about a deployment such as its
     * status, lifecycle events, and when it was last updated. It also contains
     * metadata about the deployment target. The deployment target metadata depends on
     * the deployment target's type (<code>instanceTarget</code>,
     * <code>lambdaTarget</code>, or <code>ecsTarget</code>). </p>
     */
    inline void SetDeploymentTarget(const DeploymentTarget& value) { m_deploymentTarget = value; }

    /**
     * <p> A deployment target that contains information about a deployment such as its
     * status, lifecycle events, and when it was last updated. It also contains
     * metadata about the deployment target. The deployment target metadata depends on
     * the deployment target's type (<code>instanceTarget</code>,
     * <code>lambdaTarget</code>, or <code>ecsTarget</code>). </p>
     */
    inline void SetDeploymentTarget(DeploymentTarget&& value) { m_deploymentTarget = std::move(value); }

    /**
     * <p> A deployment target that contains information about a deployment such as its
     * status, lifecycle events, and when it was last updated. It also contains
     * metadata about the deployment target. The deployment target metadata depends on
     * the deployment target's type (<code>instanceTarget</code>,
     * <code>lambdaTarget</code>, or <code>ecsTarget</code>). </p>
     */
    inline GetDeploymentTargetResult& WithDeploymentTarget(const DeploymentTarget& value) { SetDeploymentTarget(value); return *this;}

    /**
     * <p> A deployment target that contains information about a deployment such as its
     * status, lifecycle events, and when it was last updated. It also contains
     * metadata about the deployment target. The deployment target metadata depends on
     * the deployment target's type (<code>instanceTarget</code>,
     * <code>lambdaTarget</code>, or <code>ecsTarget</code>). </p>
     */
    inline GetDeploymentTargetResult& WithDeploymentTarget(DeploymentTarget&& value) { SetDeploymentTarget(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeploymentTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeploymentTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeploymentTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeploymentTarget m_deploymentTarget;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
