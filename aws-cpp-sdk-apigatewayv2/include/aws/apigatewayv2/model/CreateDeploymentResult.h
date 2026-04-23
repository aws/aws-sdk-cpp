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
  class AWS_APIGATEWAYV2_API CreateDeploymentResult
  {
  public:
    CreateDeploymentResult();
    CreateDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline CreateDeploymentResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline CreateDeploymentResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The identifier for the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier for the deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /**
     * <p>The identifier for the deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }

    /**
     * <p>The identifier for the deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * <p>The identifier for the deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier for the deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The status of the deployment: PENDING, FAILED, or
 SUCCEEDED.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The status of the deployment: PENDING, FAILED, or
 SUCCEEDED.</p>
     */
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatus = value; }

    /**
     * <p>The status of the deployment: PENDING, FAILED, or
 SUCCEEDED.</p>
     */
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatus = std::move(value); }

    /**
     * <p>The status of the deployment: PENDING, FAILED, or
 SUCCEEDED.</p>
     */
    inline CreateDeploymentResult& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The status of the deployment: PENDING, FAILED, or
 SUCCEEDED.</p>
     */
    inline CreateDeploymentResult& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }

    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessage = value; }

    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessage = std::move(value); }

    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessage.assign(value); }

    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}

    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}

    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline CreateDeploymentResult& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}


    /**
     * <p>The description for the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for the deployment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for the deployment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for the deployment.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for the deployment.</p>
     */
    inline CreateDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for the deployment.</p>
     */
    inline CreateDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the deployment.</p>
     */
    inline CreateDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_deploymentId;

    DeploymentStatus m_deploymentStatus;

    Aws::String m_deploymentStatusMessage;

    Aws::String m_description;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
