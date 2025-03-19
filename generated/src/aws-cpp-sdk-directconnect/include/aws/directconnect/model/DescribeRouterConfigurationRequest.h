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
    AWS_DIRECTCONNECT_API DescribeRouterConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRouterConfiguration"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const { return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    template<typename VirtualInterfaceIdT = Aws::String>
    void SetVirtualInterfaceId(VirtualInterfaceIdT&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::forward<VirtualInterfaceIdT>(value); }
    template<typename VirtualInterfaceIdT = Aws::String>
    DescribeRouterConfigurationRequest& WithVirtualInterfaceId(VirtualInterfaceIdT&& value) { SetVirtualInterfaceId(std::forward<VirtualInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the router by a combination of vendor, platform, and software
     * version. For example, <code>CiscoSystemsInc-2900SeriesRouters-IOS124</code>.</p>
     */
    inline const Aws::String& GetRouterTypeIdentifier() const { return m_routerTypeIdentifier; }
    inline bool RouterTypeIdentifierHasBeenSet() const { return m_routerTypeIdentifierHasBeenSet; }
    template<typename RouterTypeIdentifierT = Aws::String>
    void SetRouterTypeIdentifier(RouterTypeIdentifierT&& value) { m_routerTypeIdentifierHasBeenSet = true; m_routerTypeIdentifier = std::forward<RouterTypeIdentifierT>(value); }
    template<typename RouterTypeIdentifierT = Aws::String>
    DescribeRouterConfigurationRequest& WithRouterTypeIdentifier(RouterTypeIdentifierT&& value) { SetRouterTypeIdentifier(std::forward<RouterTypeIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    Aws::String m_routerTypeIdentifier;
    bool m_routerTypeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
