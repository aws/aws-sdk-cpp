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
    AWS_LIGHTSAIL_API GetContainerServicesResult() = default;
    AWS_LIGHTSAIL_API GetContainerServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetContainerServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe one or more container services.</p>
     */
    inline const Aws::Vector<ContainerService>& GetContainerServices() const { return m_containerServices; }
    template<typename ContainerServicesT = Aws::Vector<ContainerService>>
    void SetContainerServices(ContainerServicesT&& value) { m_containerServicesHasBeenSet = true; m_containerServices = std::forward<ContainerServicesT>(value); }
    template<typename ContainerServicesT = Aws::Vector<ContainerService>>
    GetContainerServicesResult& WithContainerServices(ContainerServicesT&& value) { SetContainerServices(std::forward<ContainerServicesT>(value)); return *this;}
    template<typename ContainerServicesT = ContainerService>
    GetContainerServicesResult& AddContainerServices(ContainerServicesT&& value) { m_containerServicesHasBeenSet = true; m_containerServices.emplace_back(std::forward<ContainerServicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContainerServicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContainerService> m_containerServices;
    bool m_containerServicesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
