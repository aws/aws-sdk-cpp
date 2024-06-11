﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline const Aws::Vector<ContainerImage>& GetContainerImages() const{ return m_containerImages; }
    inline void SetContainerImages(const Aws::Vector<ContainerImage>& value) { m_containerImages = value; }
    inline void SetContainerImages(Aws::Vector<ContainerImage>&& value) { m_containerImages = std::move(value); }
    inline GetContainerImagesResult& WithContainerImages(const Aws::Vector<ContainerImage>& value) { SetContainerImages(value); return *this;}
    inline GetContainerImagesResult& WithContainerImages(Aws::Vector<ContainerImage>&& value) { SetContainerImages(std::move(value)); return *this;}
    inline GetContainerImagesResult& AddContainerImages(const ContainerImage& value) { m_containerImages.push_back(value); return *this; }
    inline GetContainerImagesResult& AddContainerImages(ContainerImage&& value) { m_containerImages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContainerImagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContainerImagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContainerImagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerImage> m_containerImages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
