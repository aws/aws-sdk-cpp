/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a source or a destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteAnalysisEndpointOptionsSpecification">AWS
   * API Reference</a></p>
   */
  class RouteAnalysisEndpointOptionsSpecification
  {
  public:
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptionsSpecification();
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptionsSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysisEndpointOptionsSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentArn() const{ return m_transitGatewayAttachmentArn; }

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline bool TransitGatewayAttachmentArnHasBeenSet() const { return m_transitGatewayAttachmentArnHasBeenSet; }

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentArn(const Aws::String& value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn = value; }

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentArn(Aws::String&& value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn = std::move(value); }

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline void SetTransitGatewayAttachmentArn(const char* value) { m_transitGatewayAttachmentArnHasBeenSet = true; m_transitGatewayAttachmentArn.assign(value); }

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline RouteAnalysisEndpointOptionsSpecification& WithTransitGatewayAttachmentArn(const Aws::String& value) { SetTransitGatewayAttachmentArn(value); return *this;}

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline RouteAnalysisEndpointOptionsSpecification& WithTransitGatewayAttachmentArn(Aws::String&& value) { SetTransitGatewayAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the transit gateway attachment.</p>
     */
    inline RouteAnalysisEndpointOptionsSpecification& WithTransitGatewayAttachmentArn(const char* value) { SetTransitGatewayAttachmentArn(value); return *this;}


    /**
     * <p>The IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address.</p>
     */
    inline RouteAnalysisEndpointOptionsSpecification& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline RouteAnalysisEndpointOptionsSpecification& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address.</p>
     */
    inline RouteAnalysisEndpointOptionsSpecification& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

  private:

    Aws::String m_transitGatewayAttachmentArn;
    bool m_transitGatewayAttachmentArnHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
