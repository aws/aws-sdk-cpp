/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ContainerService.h>
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
  class GetContainerServicesResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerServicesResult();
    AWS_LIGHTSAIL_API GetContainerServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline const Aws::Vector<ContainerService>& GetContainerServices() const{ return m_containerServices; }

    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline void SetContainerServices(const Aws::Vector<ContainerService>& value) { m_containerServices = value; }

    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline void SetContainerServices(Aws::Vector<ContainerService>&& value) { m_containerServices = std::move(value); }

    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline GetContainerServicesResult& WithContainerServices(const Aws::Vector<ContainerService>& value) { SetContainerServices(value); return *this;}

    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline GetContainerServicesResult& WithContainerServices(Aws::Vector<ContainerService>&& value) { SetContainerServices(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline GetContainerServicesResult& AddContainerServices(const ContainerService& value) { m_containerServices.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline GetContainerServicesResult& AddContainerServices(ContainerService&& value) { m_containerServices.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContainerServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContainerServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContainerServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ContainerService> m_containerServices;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
