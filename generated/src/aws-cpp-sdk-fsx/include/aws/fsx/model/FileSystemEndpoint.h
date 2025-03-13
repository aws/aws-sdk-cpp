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
    AWS_FSX_API FileSystemEndpoint() = default;
    AWS_FSX_API FileSystemEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API FileSystemEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    FileSystemEndpoint& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IP addresses of the file system endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpAddresses() const { return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    template<typename IpAddressesT = Aws::Vector<Aws::String>>
    void SetIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::forward<IpAddressesT>(value); }
    template<typename IpAddressesT = Aws::Vector<Aws::String>>
    FileSystemEndpoint& WithIpAddresses(IpAddressesT&& value) { SetIpAddresses(std::forward<IpAddressesT>(value)); return *this;}
    template<typename IpAddressesT = Aws::String>
    FileSystemEndpoint& AddIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses.emplace_back(std::forward<IpAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
