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


    ///@{
    /**
     * <p>The unique identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationId.assign(value); }
    inline GetDeploymentResult& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline GetDeploymentResult& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application version.</p>
     */
    inline int GetApplicationVersion() const{ return m_applicationVersion; }
    inline void SetApplicationVersion(int value) { m_applicationVersion = value; }
    inline GetDeploymentResult& WithApplicationVersion(int value) { SetApplicationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetDeploymentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetDeploymentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentId.assign(value); }
    inline GetDeploymentResult& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline GetDeploymentResult& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the runtime environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetDeploymentResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetDeploymentResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentLifecycle& GetStatus() const{ return m_status; }
    inline void SetStatus(const DeploymentLifecycle& value) { m_status = value; }
    inline void SetStatus(DeploymentLifecycle&& value) { m_status = std::move(value); }
    inline GetDeploymentResult& WithStatus(const DeploymentLifecycle& value) { SetStatus(value); return *this;}
    inline GetDeploymentResult& WithStatus(DeploymentLifecycle&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the reported status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }
    inline GetDeploymentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline GetDeploymentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline GetDeploymentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;

    int m_applicationVersion;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_deploymentId;

    Aws::String m_environmentId;

    DeploymentLifecycle m_status;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
