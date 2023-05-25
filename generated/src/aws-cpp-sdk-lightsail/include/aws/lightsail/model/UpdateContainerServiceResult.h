/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerService.h>
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
namespace Lightsail
{
namespace Model
{
  class UpdateContainerServiceResult
  {
  public:
    AWS_LIGHTSAIL_API UpdateContainerServiceResult();
    AWS_LIGHTSAIL_API UpdateContainerServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API UpdateContainerServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes a container service.</p>
     */
    inline const ContainerService& GetContainerService() const{ return m_containerService; }

    /**
     * <p>An object that describes a container service.</p>
     */
    inline void SetContainerService(const ContainerService& value) { m_containerService = value; }

    /**
     * <p>An object that describes a container service.</p>
     */
    inline void SetContainerService(ContainerService&& value) { m_containerService = std::move(value); }

    /**
     * <p>An object that describes a container service.</p>
     */
    inline UpdateContainerServiceResult& WithContainerService(const ContainerService& value) { SetContainerService(value); return *this;}

    /**
     * <p>An object that describes a container service.</p>
     */
    inline UpdateContainerServiceResult& WithContainerService(ContainerService&& value) { SetContainerService(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateContainerServiceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateContainerServiceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateContainerServiceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContainerService m_containerService;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
