/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/RouterType.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeRouterConfigurationResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult() = default;
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const { return m_customerRouterConfig; }
    template<typename CustomerRouterConfigT = Aws::String>
    void SetCustomerRouterConfig(CustomerRouterConfigT&& value) { m_customerRouterConfigHasBeenSet = true; m_customerRouterConfig = std::forward<CustomerRouterConfigT>(value); }
    template<typename CustomerRouterConfigT = Aws::String>
    DescribeRouterConfigurationResult& WithCustomerRouterConfig(CustomerRouterConfigT&& value) { SetCustomerRouterConfig(std::forward<CustomerRouterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details about the router.</p>
     */
    inline const RouterType& GetRouter() const { return m_router; }
    template<typename RouterT = RouterType>
    void SetRouter(RouterT&& value) { m_routerHasBeenSet = true; m_router = std::forward<RouterT>(value); }
    template<typename RouterT = RouterType>
    DescribeRouterConfigurationResult& WithRouter(RouterT&& value) { SetRouter(std::forward<RouterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    DescribeRouterConfigurationResult& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const { return m_virtualInterfaceName; }
    template<typename VirtualInterfaceNameT = Aws::String>
    void SetVirtualInterfaceName(VirtualInterfaceNameT&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = std::forward<VirtualInterfaceNameT>(value); }
    template<typename VirtualInterfaceNameT = Aws::String>
    DescribeRouterConfigurationResult& WithVirtualInterfaceName(VirtualInterfaceNameT&& value) { SetVirtualInterfaceName(std::forward<VirtualInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRouterConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customerRouterConfig;
    bool m_customerRouterConfigHasBeenSet = false;

    RouterType m_router;
    bool m_routerHasBeenSet = false;

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::String m_virtualInterfaceName;
    bool m_virtualInterfaceNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
