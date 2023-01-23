/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetContainerImagesResult
  {
  public:
    AWS_LIGHTSAIL_API GetContainerImagesResult();
    AWS_LIGHTSAIL_API GetContainerImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline const Aws::Vector<ContainerImage>& GetContainerImages() const{ return m_containerImages; }

    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline void SetContainerImages(const Aws::Vector<ContainerImage>& value) { m_containerImages = value; }

    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline void SetContainerImages(Aws::Vector<ContainerImage>&& value) { m_containerImages = std::move(value); }

    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline GetContainerImagesResult& WithContainerImages(const Aws::Vector<ContainerImage>& value) { SetContainerImages(value); return *this;}

    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline GetContainerImagesResult& WithContainerImages(Aws::Vector<ContainerImage>&& value) { SetContainerImages(std::move(value)); return *this;}

    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline GetContainerImagesResult& AddContainerImages(const ContainerImage& value) { m_containerImages.push_back(value); return *this; }

    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline GetContainerImagesResult& AddContainerImages(ContainerImage&& value) { m_containerImages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ContainerImage> m_containerImages;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
