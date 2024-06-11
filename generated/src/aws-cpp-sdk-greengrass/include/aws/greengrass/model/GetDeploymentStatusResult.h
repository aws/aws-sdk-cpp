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
    AWS_GREENGRASS_API GetDeploymentStatusResult();
    AWS_GREENGRASS_API GetDeploymentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API GetDeploymentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatus = value; }
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatus = std::move(value); }
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatus.assign(value); }
    inline GetDeploymentStatusResult& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}
    inline GetDeploymentStatusResult& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    inline GetDeploymentStatusResult& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of the deployment.
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentType = value; }
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentType = std::move(value); }
    inline GetDeploymentStatusResult& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}
    inline GetDeploymentStatusResult& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Error details
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const{ return m_errorDetails; }
    inline void SetErrorDetails(const Aws::Vector<ErrorDetail>& value) { m_errorDetails = value; }
    inline void SetErrorDetails(Aws::Vector<ErrorDetail>&& value) { m_errorDetails = std::move(value); }
    inline GetDeploymentStatusResult& WithErrorDetails(const Aws::Vector<ErrorDetail>& value) { SetErrorDetails(value); return *this;}
    inline GetDeploymentStatusResult& WithErrorDetails(Aws::Vector<ErrorDetail>&& value) { SetErrorDetails(std::move(value)); return *this;}
    inline GetDeploymentStatusResult& AddErrorDetails(const ErrorDetail& value) { m_errorDetails.push_back(value); return *this; }
    inline GetDeploymentStatusResult& AddErrorDetails(ErrorDetail&& value) { m_errorDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * Error message
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline GetDeploymentStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline GetDeploymentStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline GetDeploymentStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAt = std::move(value); }
    inline void SetUpdatedAt(const char* value) { m_updatedAt.assign(value); }
    inline GetDeploymentStatusResult& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}
    inline GetDeploymentStatusResult& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}
    inline GetDeploymentStatusResult& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeploymentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeploymentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeploymentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentStatus;

    DeploymentType m_deploymentType;

    Aws::Vector<ErrorDetail> m_errorDetails;

    Aws::String m_errorMessage;

    Aws::String m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
