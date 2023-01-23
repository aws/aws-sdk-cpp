/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/ContainerImage.h>
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

  private:

    ContainerImage m_containerImage;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
