/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/NetworkType.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the network configuration for directory update
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/NetworkUpdateSettings">AWS
   * API Reference</a></p>
   */
  class NetworkUpdateSettings
  {
  public:
    AWS_DIRECTORYSERVICE_API NetworkUpdateSettings() = default;
    AWS_DIRECTORYSERVICE_API NetworkUpdateSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API NetworkUpdateSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target network type for the directory update.</p>
     */
    inline NetworkType GetNetworkType() const { return m_networkType; }
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
    inline void SetNetworkType(NetworkType value) { m_networkTypeHasBeenSet = true; m_networkType = value; }
    inline NetworkUpdateSettings& WithNetworkType(NetworkType value) { SetNetworkType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPv6 addresses of DNS servers or domain controllers in the self-managed
     * directory. Required only when updating an AD Connector directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerDnsIpsV6() const { return m_customerDnsIpsV6; }
    inline bool CustomerDnsIpsV6HasBeenSet() const { return m_customerDnsIpsV6HasBeenSet; }
    template<typename CustomerDnsIpsV6T = Aws::Vector<Aws::String>>
    void SetCustomerDnsIpsV6(CustomerDnsIpsV6T&& value) { m_customerDnsIpsV6HasBeenSet = true; m_customerDnsIpsV6 = std::forward<CustomerDnsIpsV6T>(value); }
    template<typename CustomerDnsIpsV6T = Aws::Vector<Aws::String>>
    NetworkUpdateSettings& WithCustomerDnsIpsV6(CustomerDnsIpsV6T&& value) { SetCustomerDnsIpsV6(std::forward<CustomerDnsIpsV6T>(value)); return *this;}
    template<typename CustomerDnsIpsV6T = Aws::String>
    NetworkUpdateSettings& AddCustomerDnsIpsV6(CustomerDnsIpsV6T&& value) { m_customerDnsIpsV6HasBeenSet = true; m_customerDnsIpsV6.emplace_back(std::forward<CustomerDnsIpsV6T>(value)); return *this; }
    ///@}
  private:

    NetworkType m_networkType{NetworkType::NOT_SET};
    bool m_networkTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerDnsIpsV6;
    bool m_customerDnsIpsV6HasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
