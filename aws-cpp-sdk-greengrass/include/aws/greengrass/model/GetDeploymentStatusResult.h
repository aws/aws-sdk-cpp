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
  class AWS_GREENGRASS_API GetDeploymentStatusResult
  {
  public:
    GetDeploymentStatusResult();
    GetDeploymentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatus = value; }

    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatus = std::move(value); }

    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatus.assign(value); }

    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline GetDeploymentStatusResult& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}

    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline GetDeploymentStatusResult& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}

    /**
     * The status of the deployment: ''InProgress'', ''Building'', ''Success'', or
     * ''Failure''.
     */
    inline GetDeploymentStatusResult& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}


    /**
     * The type of the deployment.
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * The type of the deployment.
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentType = value; }

    /**
     * The type of the deployment.
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentType = std::move(value); }

    /**
     * The type of the deployment.
     */
    inline GetDeploymentStatusResult& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * The type of the deployment.
     */
    inline GetDeploymentStatusResult& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * Error details
     */
    inline const Aws::Vector<ErrorDetail>& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * Error details
     */
    inline void SetErrorDetails(const Aws::Vector<ErrorDetail>& value) { m_errorDetails = value; }

    /**
     * Error details
     */
    inline void SetErrorDetails(Aws::Vector<ErrorDetail>&& value) { m_errorDetails = std::move(value); }

    /**
     * Error details
     */
    inline GetDeploymentStatusResult& WithErrorDetails(const Aws::Vector<ErrorDetail>& value) { SetErrorDetails(value); return *this;}

    /**
     * Error details
     */
    inline GetDeploymentStatusResult& WithErrorDetails(Aws::Vector<ErrorDetail>&& value) { SetErrorDetails(std::move(value)); return *this;}

    /**
     * Error details
     */
    inline GetDeploymentStatusResult& AddErrorDetails(const ErrorDetail& value) { m_errorDetails.push_back(value); return *this; }

    /**
     * Error details
     */
    inline GetDeploymentStatusResult& AddErrorDetails(ErrorDetail&& value) { m_errorDetails.push_back(std::move(value)); return *this; }


    /**
     * Error message
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * Error message
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * Error message
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * Error message
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * Error message
     */
    inline GetDeploymentStatusResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * Error message
     */
    inline GetDeploymentStatusResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * Error message
     */
    inline GetDeploymentStatusResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAt = value; }

    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAt = std::move(value); }

    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAt.assign(value); }

    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline GetDeploymentStatusResult& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline GetDeploymentStatusResult& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * The time, in milliseconds since the epoch, when the deployment status was
     * updated.
     */
    inline GetDeploymentStatusResult& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::String m_deploymentStatus;

    DeploymentType m_deploymentType;

    Aws::Vector<ErrorDetail> m_errorDetails;

    Aws::String m_errorMessage;

    Aws::String m_updatedAt;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
