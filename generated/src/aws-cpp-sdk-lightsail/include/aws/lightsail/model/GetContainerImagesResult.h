/**
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
    AWS_LIGHTSAIL_API GetContainerImagesResult() = default;
    AWS_LIGHTSAIL_API GetContainerImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe container images that are registered to the
     * container service.</p>
     */
    inline const Aws::Vector<ContainerImage>& GetContainerImages() const { return m_containerImages; }
    template<typename ContainerImagesT = Aws::Vector<ContainerImage>>
    void SetContainerImages(ContainerImagesT&& value) { m_containerImagesHasBeenSet = true; m_containerImages = std::forward<ContainerImagesT>(value); }
    template<typename ContainerImagesT = Aws::Vector<ContainerImage>>
    GetContainerImagesResult& WithContainerImages(ContainerImagesT&& value) { SetContainerImages(std::forward<ContainerImagesT>(value)); return *this;}
    template<typename ContainerImagesT = ContainerImage>
    GetContainerImagesResult& AddContainerImages(ContainerImagesT&& value) { m_containerImagesHasBeenSet = true; m_containerImages.emplace_back(std::forward<ContainerImagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContainerImagesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerImage> m_containerImages;
    bool m_containerImagesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
