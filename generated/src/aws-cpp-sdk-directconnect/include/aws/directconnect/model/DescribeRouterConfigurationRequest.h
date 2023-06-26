/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Provides the details about a virtual interface's router.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DescribeRouterConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class DescribeRouterConfigurationRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRouterConfiguration"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline DescribeRouterConfigurationRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline DescribeRouterConfigurationRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline DescribeRouterConfigurationRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline const Aws::String& GetRouterTypeIdentifier() const{ return m_routerTypeIdentifier; }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline bool RouterTypeIdentifierHasBeenSet() const { return m_routerTypeIdentifierHasBeenSet; }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline void SetRouterTypeIdentifier(const Aws::String& value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier = value; }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline void SetRouterTypeIdentifier(Aws::String&& value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier = std::move(value); }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline void SetRouterTypeIdentifier(const char* value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier.assign(value); }

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline DescribeRouterConfigurationRequest& WithRouterTypeIdentifier(const Aws::String& value) { SetRouterTypeIdentifier(value); return *this;}

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline DescribeRouterConfigurationRequest& WithRouterTypeIdentifier(Aws::String&& value) { SetRouterTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline DescribeRouterConfigurationRequest& WithRouterTypeIdentifier(const char* value) { SetRouterTypeIdentifier(value); return *this;}

  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::String m_routerTypeIdentifier;
    bool m_routerTypeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
