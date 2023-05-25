/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>An Amazon FSx for NetApp ONTAP file system has two endpoints that are used to
   * access data or to manage the file system using the NetApp ONTAP CLI, REST API,
   * or NetApp SnapMirror. They are the <code>Management</code> and
   * <code>Intercluster</code> endpoints.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/FileSystemEndpoint">AWS
   * API Reference</a></p>
   */
  class FileSystemEndpoint
  {
  public:
    AWS_FSX_API FileSystemEndpoint();
    AWS_FSX_API FileSystemEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileSystemEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetDNSName() const{ return m_dNSName; }

    
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }

    
    inline void SetDNSName(const Aws::String& value) { m_dNSNameHasBeenSet = true; m_dNSName = value; }

    
    inline void SetDNSName(Aws::String&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::move(value); }

    
    inline void SetDNSName(const char* value) { m_dNSNameHasBeenSet = true; m_dNSName.assign(value); }

    
    inline FileSystemEndpoint& WithDNSName(const Aws::String& value) { SetDNSName(value); return *this;}

    
    inline FileSystemEndpoint& WithDNSName(Aws::String&& value) { SetDNSName(std::move(value)); return *this;}

    
    inline FileSystemEndpoint& WithDNSName(const char* value) { SetDNSName(value); return *this;}


    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline void SetIpAddresses(const Aws::Vector<Aws::String>& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline void SetIpAddresses(Aws::Vector<Aws::String>&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline FileSystemEndpoint& WithIpAddresses(const Aws::Vector<Aws::String>& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline FileSystemEndpoint& WithIpAddresses(Aws::Vector<Aws::String>&& value) { SetIpAddresses(std::move(value)); return *this;}

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline FileSystemEndpoint& AddIpAddresses(const Aws::String& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline FileSystemEndpoint& AddIpAddresses(Aws::String&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline FileSystemEndpoint& AddIpAddresses(const char* value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.push_back(value); return *this; }

  private:

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
