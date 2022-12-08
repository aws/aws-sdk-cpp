/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/m2/model/DeploymentLifecycle.h>
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
namespace MainframeModernization
{
namespace Model
{
  class GetDeploymentResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API GetDeploymentResult();
    AWS_MAINFRAMEMODERNIZATION_API GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline GetDeploymentResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline GetDeploymentResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application.</p>
     */
    inline GetDeploymentResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The application version.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The application version.</p>
     */
    inline void SetApplicationVersion(int value) { m_applicationVersion = value; }

    /**
     * <p>The application version.</p>
     */
    inline GetDeploymentResult& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}


    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline GetDeploymentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline GetDeploymentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }

    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }

    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }

    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline GetDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline GetDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline GetDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline GetDeploymentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline GetDeploymentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline GetDeploymentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentLifecycle& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetStatus(const DeploymentLifecycle& value) { m_status = value; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetStatus(DeploymentLifecycle&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the deployment.</p>
     */
    inline GetDeploymentResult& WithStatus(const DeploymentLifecycle& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment.</p>
     */
    inline GetDeploymentResult& WithStatus(DeploymentLifecycle&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the reported status.</p>
     */
    inline GetDeploymentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the reported status.</p>
     */
    inline GetDeploymentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the reported status.</p>
     */
    inline GetDeploymentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Aws::String m_applicationId;

    int m_applicationVersion;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_deploymentId;

    Aws::String m_environmentId;

    DeploymentLifecycle m_status;

    Aws::String m_statusReason;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
