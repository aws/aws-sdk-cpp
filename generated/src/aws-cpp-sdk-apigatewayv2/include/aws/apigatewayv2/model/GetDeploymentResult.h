/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/DeploymentStatus.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class GetDeploymentResult
  {
  public:
    AWS_APIGATEWAYV2_API GetDeploymentResult() = default;
    AWS_APIGATEWAYV2_API GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether a deployment was automatically released.</p>
     */
    inline bool GetAutoDeployed() const { return m_autoDeployed; }
    inline void SetAutoDeployed(bool value) { m_autoDeployedHasBeenSet = true; m_autoDeployed = value; }
    inline GetDeploymentResult& WithAutoDeployed(bool value) { SetAutoDeployed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetDeploymentResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    GetDeploymentResult& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment: PENDING, FAILED, or SUCCEEDED.</p>
     */
    inline DeploymentStatus GetDeploymentStatus() const { return m_deploymentStatus; }
    inline void SetDeploymentStatus(DeploymentStatus value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline GetDeploymentResult& WithDeploymentStatus(DeploymentStatus value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const { return m_deploymentStatusMessage; }
    template<typename DeploymentStatusMessageT = Aws::String>
    void SetDeploymentStatusMessage(DeploymentStatusMessageT&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::forward<DeploymentStatusMessageT>(value); }
    template<typename DeploymentStatusMessageT = Aws::String>
    GetDeploymentResult& WithDeploymentStatusMessage(DeploymentStatusMessageT&& value) { SetDeploymentStatusMessage(std::forward<DeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the deployment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDeploymentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_autoDeployed{false};
    bool m_autoDeployedHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentStatus m_deploymentStatus{DeploymentStatus::NOT_SET};
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
