/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerImage.h>
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
  class RegisterContainerImageResult
  {
  public:
    AWS_LIGHTSAIL_API RegisterContainerImageResult();
    AWS_LIGHTSAIL_API RegisterContainerImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API RegisterContainerImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes a container image that is registered to a Lightsail
     * container service</p>
     */
    inline const ContainerImage& GetContainerImage() const{ return m_containerImage; }

    /**
     * <p>An object that describes a container image that is registered to a Lightsail
     * container service</p>
     */
    inline void SetContainerImage(const ContainerImage& value) { m_containerImage = value; }

    /**
     * <p>An object that describes a container image that is registered to a Lightsail
     * container service</p>
     */
    inline void SetContainerImage(ContainerImage&& value) { m_containerImage = std::move(value); }

    /**
     * <p>An object that describes a container image that is registered to a Lightsail
     * container service</p>
     */
    inline RegisterContainerImageResult& WithContainerImage(const ContainerImage& value) { SetContainerImage(value); return *this;}

    /**
     * <p>An object that describes a container image that is registered to a Lightsail
     * container service</p>
     */
    inline RegisterContainerImageResult& WithContainerImage(ContainerImage&& value) { SetContainerImage(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegisterContainerImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegisterContainerImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegisterContainerImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContainerImage m_containerImage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
