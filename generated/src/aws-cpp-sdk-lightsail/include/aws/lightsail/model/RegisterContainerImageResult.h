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
    AWS_LIGHTSAIL_API RegisterContainerImageResult() = default;
    AWS_LIGHTSAIL_API RegisterContainerImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API RegisterContainerImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that describes a container image that is registered to a Lightsail
     * container service</p>
     */
    inline const ContainerImage& GetContainerImage() const { return m_containerImage; }
    template<typename ContainerImageT = ContainerImage>
    void SetContainerImage(ContainerImageT&& value) { m_containerImageHasBeenSet = true; m_containerImage = std::forward<ContainerImageT>(value); }
    template<typename ContainerImageT = ContainerImage>
    RegisterContainerImageResult& WithContainerImage(ContainerImageT&& value) { SetContainerImage(std::forward<ContainerImageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterContainerImageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContainerImage m_containerImage;
    bool m_containerImageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
