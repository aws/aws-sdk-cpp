/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
   * <p>Contains configuration settings for self-managed instances with SSM used in
   * hybrid directory operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/HybridCustomerInstancesSettings">AWS
   * API Reference</a></p>
   */
  class HybridCustomerInstancesSettings
  {
  public:
    AWS_DIRECTORYSERVICE_API HybridCustomerInstancesSettings() = default;
    AWS_DIRECTORYSERVICE_API HybridCustomerInstancesSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API HybridCustomerInstancesSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP addresses of the DNS servers or domain controllers in your
     * self-managed AD environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerDnsIps() const { return m_customerDnsIps; }
    inline bool CustomerDnsIpsHasBeenSet() const { return m_customerDnsIpsHasBeenSet; }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    void SetCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps = std::forward<CustomerDnsIpsT>(value); }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    HybridCustomerInstancesSettings& WithCustomerDnsIps(CustomerDnsIpsT&& value) { SetCustomerDnsIps(std::forward<CustomerDnsIpsT>(value)); return *this;}
    template<typename CustomerDnsIpsT = Aws::String>
    HybridCustomerInstancesSettings& AddCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.emplace_back(std::forward<CustomerDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers of the self-managed instances with SSM used in hybrid
     * directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    HybridCustomerInstancesSettings& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    HybridCustomerInstancesSettings& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_customerDnsIps;
    bool m_customerDnsIpsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
