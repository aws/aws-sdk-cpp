/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about a private IP address associated with a network
   * interface. This data type is used as a response element in the
   * <a>DescribeFindings</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/PrivateIp">AWS
   * API Reference</a></p>
   */
  class PrivateIp
  {
  public:
    AWS_INSPECTOR_API PrivateIp();
    AWS_INSPECTOR_API PrivateIp(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API PrivateIp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline PrivateIp& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline PrivateIp& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The DNS name of the private IP address.</p>
     */
    inline PrivateIp& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline PrivateIp& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline PrivateIp& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The full IP address of the network inteface.</p>
     */
    inline PrivateIp& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
