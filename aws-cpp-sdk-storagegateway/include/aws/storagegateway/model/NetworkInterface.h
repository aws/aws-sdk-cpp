/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a gateway's network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API NetworkInterface
  {
  public:
    NetworkInterface();
    NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline const Aws::String& GetIpv4Address() const{ return m_ipv4Address; }

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline void SetIpv4Address(const Aws::String& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = value; }

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline void SetIpv4Address(Aws::String&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::move(value); }

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline void SetIpv4Address(const char* value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address.assign(value); }

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline NetworkInterface& WithIpv4Address(const Aws::String& value) { SetIpv4Address(value); return *this;}

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline NetworkInterface& WithIpv4Address(Aws::String&& value) { SetIpv4Address(std::move(value)); return *this;}

    /**
     * <p>The Internet Protocol version 4 (IPv4) address of the interface.</p>
     */
    inline NetworkInterface& WithIpv4Address(const char* value) { SetIpv4Address(value); return *this;}


    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline NetworkInterface& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline NetworkInterface& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The Media Access Control (MAC) address of the interface.</p> <note> <p>This
     * is currently unsupported and will not be returned in output.</p> </note>
     */
    inline NetworkInterface& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline const Aws::String& GetIpv6Address() const{ return m_ipv6Address; }

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline void SetIpv6Address(const Aws::String& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = value; }

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline void SetIpv6Address(Aws::String&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::move(value); }

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline void SetIpv6Address(const char* value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address.assign(value); }

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline NetworkInterface& WithIpv6Address(const Aws::String& value) { SetIpv6Address(value); return *this;}

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline NetworkInterface& WithIpv6Address(Aws::String&& value) { SetIpv6Address(std::move(value)); return *this;}

    /**
     * <p>The Internet Protocol version 6 (IPv6) address of the interface. <i>Currently
     * not supported</i>.</p>
     */
    inline NetworkInterface& WithIpv6Address(const char* value) { SetIpv6Address(value); return *this;}

  private:

    Aws::String m_ipv4Address;
    bool m_ipv4AddressHasBeenSet;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
