/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/model/DeploymentData.h>
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
  class GetDeploymentResult
  {
  public:
    AWS_LAUNCHWIZARD_API GetDeploymentResult();
    AWS_LAUNCHWIZARD_API GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that details the deployment.</p>
     */
    inline const DeploymentData& GetDeployment() const{ return m_deployment; }

    /**
     * <p>An object that details the deployment.</p>
     */
    inline void SetDeployment(const DeploymentData& value) { m_deployment = value; }

    /**
     * <p>An object that details the deployment.</p>
     */
    inline void SetDeployment(DeploymentData&& value) { m_deployment = std::move(value); }

    /**
     * <p>An object that details the deployment.</p>
     */
    inline GetDeploymentResult& WithDeployment(const DeploymentData& value) { SetDeployment(value); return *this;}

    /**
     * <p>An object that details the deployment.</p>
     */
    inline GetDeploymentResult& WithDeployment(DeploymentData&& value) { SetDeployment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeploymentData m_deployment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
