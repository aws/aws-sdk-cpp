/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{
  class CreateDeploymentResult
  {
  public:
    AWS_GREENGRASSV2_API CreateDeploymentResult() = default;
    AWS_GREENGRASSV2_API CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASSV2_API CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    CreateDeploymentResult& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobId() const { return m_iotJobId; }
    template<typename IotJobIdT = Aws::String>
    void SetIotJobId(IotJobIdT&& value) { m_iotJobIdHasBeenSet = true; m_iotJobId = std::forward<IotJobIdT>(value); }
    template<typename IotJobIdT = Aws::String>
    CreateDeploymentResult& WithIotJobId(IotJobIdT&& value) { SetIotJobId(std::forward<IotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the IoT job that applies the deployment to target devices.</p>
     */
    inline const Aws::String& GetIotJobArn() const { return m_iotJobArn; }
    template<typename IotJobArnT = Aws::String>
    void SetIotJobArn(IotJobArnT&& value) { m_iotJobArnHasBeenSet = true; m_iotJobArn = std::forward<IotJobArnT>(value); }
    template<typename IotJobArnT = Aws::String>
    CreateDeploymentResult& WithIotJobArn(IotJobArnT&& value) { SetIotJobArn(std::forward<IotJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_iotJobId;
    bool m_iotJobIdHasBeenSet = false;

    Aws::String m_iotJobArn;
    bool m_iotJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
