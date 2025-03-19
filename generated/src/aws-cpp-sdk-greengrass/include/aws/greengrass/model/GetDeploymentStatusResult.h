/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/ErrorDetail.h>
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
namespace Greengrass
{
namespace Model
{
  class GetDeploymentStatusResult
  {
  public:
    AWS_GREENGRASS_API GetDeploymentStatusResult() = default;
    AWS_GREENGRASS_API GetDeploymentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetDeploymentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline const Aws::String& GetDeploymentStatus() const { return m_deploymentStatus; }
    template<typename DeploymentStatusT = Aws::String>
    void SetDeploymentStatus(DeploymentStatusT&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::forward<DeploymentStatusT>(value); }
    template<typename DeploymentStatusT = Aws::String>
    GetDeploymentStatusResult& WithDeploymentStatus(DeploymentStatusT&& value) { SetDeploymentStatus(std::forward<DeploymentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The type of the deployment.
     */
    inline DeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline void SetDeploymentType(DeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline GetDeploymentStatusResult& WithDeploymentType(DeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * Error details
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const { return m_errorDetails; }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::Vector<ErrorDetail>>
    GetDeploymentStatusResult& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    template<typename ErrorDetailsT = ErrorDetail>
    GetDeploymentStatusResult& AddErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Error message
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetDeploymentStatusResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::String>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::String>
    GetDeploymentStatusResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    DeploymentType m_deploymentType{DeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::Vector<ErrorDetail> m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
