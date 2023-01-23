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
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult();
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const{ return m_customerRouterConfig; }

    /**
     * <p>The customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const Aws::String& value) { m_customerRouterConfig = value; }

    /**
     * <p>The customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfig = std::move(value); }

    /**
     * <p>The customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfig.assign(value); }

    /**
     * <p>The customer router configuration.</p>
     */
    inline DescribeRouterConfigurationResult& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>The customer router configuration.</p>
     */
    inline DescribeRouterConfigurationResult& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(std::move(value)); return *this;}

    /**
     * <p>The customer router configuration.</p>
     */
    inline DescribeRouterConfigurationResult& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}


    /**
     * <p>The details about the router.</p>
     */
    inline const RouterType& GetRouter() const{ return m_router; }

    /**
     * <p>The details about the router.</p>
     */
    inline void SetRouter(const RouterType& value) { m_router = value; }

    /**
     * <p>The details about the router.</p>
     */
    inline void SetRouter(RouterType&& value) { m_router = std::move(value); }

    /**
     * <p>The details about the router.</p>
     */
    inline DescribeRouterConfigurationResult& WithRouter(const RouterType& value) { SetRouter(value); return *this;}

    /**
     * <p>The details about the router.</p>
     */
    inline DescribeRouterConfigurationResult& WithRouter(RouterType&& value) { SetRouter(std::move(value)); return *this;}


    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceId = value; }

    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the virtual interface.</p>
     */
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceName = value; }

    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceName = std::move(value); }

    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceName.assign(value); }

    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}

    /**
     * <p>Provides the details about a virtual interface's router.</p>
     */
    inline DescribeRouterConfigurationResult& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}

  private:

    Aws::String m_customerRouterConfig;

    RouterType m_router;

    Aws::String m_virtualInterfaceId;

    Aws::String m_virtualInterfaceName;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
