/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerServiceDeployment.h>
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
namespace Lightsail
{
namespace Model
{
  class GetContainerServiceDeploymentsResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerServiceDeploymentsResult();
    AWS_LIGHTSAIL_API GetContainerServiceDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerServiceDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline const Aws::Vector<ContainerServiceDeployment>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline void SetDeployments(const Aws::Vector<ContainerServiceDeployment>& value) { m_deployments = value; }

    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline void SetDeployments(Aws::Vector<ContainerServiceDeployment>&& value) { m_deployments = std::move(value); }

    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline GetContainerServiceDeploymentsResult& WithDeployments(const Aws::Vector<ContainerServiceDeployment>& value) { SetDeployments(value); return *this;}

    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline GetContainerServiceDeploymentsResult& WithDeployments(Aws::Vector<ContainerServiceDeployment>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline GetContainerServiceDeploymentsResult& AddDeployments(const ContainerServiceDeployment& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe deployments for a container service.</p>
     */
    inline GetContainerServiceDeploymentsResult& AddDeployments(ContainerServiceDeployment&& value) { m_deployments.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContainerServiceDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContainerServiceDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContainerServiceDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ContainerServiceDeployment> m_deployments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
