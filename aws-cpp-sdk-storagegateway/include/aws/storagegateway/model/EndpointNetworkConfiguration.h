/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies network configuration information for the gateway associated with
   * the Amazon FSx file system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/EndpointNetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointNetworkConfiguration
  {
  public:
    AWS_STORAGEGATEWAY_API EndpointNetworkConfiguration();
    AWS_STORAGEGATEWAY_API EndpointNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API EndpointNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline void SetIpAddresses(const Aws::Vector<Aws::String>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline void SetIpAddresses(Aws::Vector<Aws::String>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline EndpointNetworkConfiguration& WithIpAddresses(const Aws::Vector<Aws::String>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline EndpointNetworkConfiguration& WithIpAddresses(Aws::Vector<Aws::String>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline EndpointNetworkConfiguration& AddIpAddresses(const Aws::String& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline EndpointNetworkConfiguration& AddIpAddresses(Aws::String&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of gateway IP addresses on which the associated Amazon FSx file system
     * is available.</p>  <p>If multiple file systems are associated with this
     * gateway, this field is required.</p> 
     */
    inline EndpointNetworkConfiguration& AddIpAddresses(const char* value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
