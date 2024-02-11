/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentStatus.h>
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
namespace LaunchWizard
{
namespace Model
{
  class DeleteDeploymentResult
  {
  public:
    AWS_LAUNCHWIZARD_API DeleteDeploymentResult();
    AWS_LAUNCHWIZARD_API DeleteDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API DeleteDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the deployment.</p>
     */
    inline const DeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetStatus(const DeploymentStatus& value) { m_status = value; }

    /**
     * <p>The status of the deployment.</p>
     */
    inline void SetStatus(DeploymentStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the deployment.</p>
     */
    inline DeleteDeploymentResult& WithStatus(const DeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the deployment.</p>
     */
    inline DeleteDeploymentResult& WithStatus(DeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for the deployment status.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The reason for the deployment status.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReason = value; }

    /**
     * <p>The reason for the deployment status.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReason = std::move(value); }

    /**
     * <p>The reason for the deployment status.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReason.assign(value); }

    /**
     * <p>The reason for the deployment status.</p>
     */
    inline DeleteDeploymentResult& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The reason for the deployment status.</p>
     */
    inline DeleteDeploymentResult& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the deployment status.</p>
     */
    inline DeleteDeploymentResult& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeploymentStatus m_status;

    Aws::String m_statusReason;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
