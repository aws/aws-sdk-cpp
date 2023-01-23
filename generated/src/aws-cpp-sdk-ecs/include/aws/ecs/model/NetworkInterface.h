/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the elastic network interface for tasks that use the
   * <code>awsvpc</code> network mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_ECS_API NetworkInterface();
    AWS_ECS_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline const Aws::String& GetAttachmentId() const{ return m_attachmentId; }

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline void SetAttachmentId(const Aws::String& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = value; }

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline void SetAttachmentId(Aws::String&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::move(value); }

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline void SetAttachmentId(const char* value) { m_attachmentIdHasBeenSet = true; m_attachmentId.assign(value); }

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline NetworkInterface& WithAttachmentId(const Aws::String& value) { SetAttachmentId(value); return *this;}

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline NetworkInterface& WithAttachmentId(Aws::String&& value) { SetAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline NetworkInterface& WithAttachmentId(const char* value) { SetAttachmentId(value); return *this;}


    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpv4Address() const{ return m_privateIpv4Address; }

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline bool PrivateIpv4AddressHasBeenSet() const { return m_privateIpv4AddressHasBeenSet; }

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline void SetPrivateIpv4Address(const Aws::String& value) { m_privateIpv4AddressHasBeenSet = true; m_privateIpv4Address = value; }

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline void SetPrivateIpv4Address(Aws::String&& value) { m_privateIpv4AddressHasBeenSet = true; m_privateIpv4Address = std::move(value); }

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline void SetPrivateIpv4Address(const char* value) { m_privateIpv4AddressHasBeenSet = true; m_privateIpv4Address.assign(value); }

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpv4Address(const Aws::String& value) { SetPrivateIpv4Address(value); return *this;}

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpv4Address(Aws::String&& value) { SetPrivateIpv4Address(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline NetworkInterface& WithPrivateIpv4Address(const char* value) { SetPrivateIpv4Address(value); return *this;}


    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}

    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline NetworkInterface& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}

  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_privateIpv4Address;
    bool m_privateIpv4AddressHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
