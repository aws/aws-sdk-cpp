/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Service.h>
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
namespace ECS
{
namespace Model
{
  class CreateServiceResult
  {
  public:
    AWS_ECS_API CreateServiceResult();
    AWS_ECS_API CreateServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API CreateServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of your service following the create call.</p> <p>A
     * service will return either a <code>capacityProviderStrategy</code> or
     * <code>launchType</code> parameter, but not both, depending where one was
     * specified when it was created.</p> <p>If a service is using the <code>ECS</code>
     * deployment controller, the <code>deploymentController</code> and
     * <code>taskSets</code> parameters will not be returned.</p> <p>if the service
     * uses the <code>CODE_DEPLOY</code> deployment controller, the
     * <code>deploymentController</code>, <code>taskSets</code> and
     * <code>deployments</code> parameters will be returned, however the
     * <code>deployments</code> parameter will be an empty list.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>The full description of your service following the create call.</p> <p>A
     * service will return either a <code>capacityProviderStrategy</code> or
     * <code>launchType</code> parameter, but not both, depending where one was
     * specified when it was created.</p> <p>If a service is using the <code>ECS</code>
     * deployment controller, the <code>deploymentController</code> and
     * <code>taskSets</code> parameters will not be returned.</p> <p>if the service
     * uses the <code>CODE_DEPLOY</code> deployment controller, the
     * <code>deploymentController</code>, <code>taskSets</code> and
     * <code>deployments</code> parameters will be returned, however the
     * <code>deployments</code> parameter will be an empty list.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>The full description of your service following the create call.</p> <p>A
     * service will return either a <code>capacityProviderStrategy</code> or
     * <code>launchType</code> parameter, but not both, depending where one was
     * specified when it was created.</p> <p>If a service is using the <code>ECS</code>
     * deployment controller, the <code>deploymentController</code> and
     * <code>taskSets</code> parameters will not be returned.</p> <p>if the service
     * uses the <code>CODE_DEPLOY</code> deployment controller, the
     * <code>deploymentController</code>, <code>taskSets</code> and
     * <code>deployments</code> parameters will be returned, however the
     * <code>deployments</code> parameter will be an empty list.</p>
     */
    inline void SetService(Service&& value) { m_service = std::move(value); }

    /**
     * <p>The full description of your service following the create call.</p> <p>A
     * service will return either a <code>capacityProviderStrategy</code> or
     * <code>launchType</code> parameter, but not both, depending where one was
     * specified when it was created.</p> <p>If a service is using the <code>ECS</code>
     * deployment controller, the <code>deploymentController</code> and
     * <code>taskSets</code> parameters will not be returned.</p> <p>if the service
     * uses the <code>CODE_DEPLOY</code> deployment controller, the
     * <code>deploymentController</code>, <code>taskSets</code> and
     * <code>deployments</code> parameters will be returned, however the
     * <code>deployments</code> parameter will be an empty list.</p>
     */
    inline CreateServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>The full description of your service following the create call.</p> <p>A
     * service will return either a <code>capacityProviderStrategy</code> or
     * <code>launchType</code> parameter, but not both, depending where one was
     * specified when it was created.</p> <p>If a service is using the <code>ECS</code>
     * deployment controller, the <code>deploymentController</code> and
     * <code>taskSets</code> parameters will not be returned.</p> <p>if the service
     * uses the <code>CODE_DEPLOY</code> deployment controller, the
     * <code>deploymentController</code>, <code>taskSets</code> and
     * <code>deployments</code> parameters will be returned, however the
     * <code>deployments</code> parameter will be an empty list.</p>
     */
    inline CreateServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Service m_service;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
