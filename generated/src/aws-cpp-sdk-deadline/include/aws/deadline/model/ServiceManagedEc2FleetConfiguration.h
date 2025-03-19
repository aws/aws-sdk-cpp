/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/ServiceManagedEc2InstanceCapabilities.h>
#include <aws/deadline/model/ServiceManagedEc2InstanceMarketOptions.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The configuration details for a service managed Amazon EC2
   * fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ServiceManagedEc2FleetConfiguration">AWS
   * API Reference</a></p>
   */
  class ServiceManagedEc2FleetConfiguration
  {
  public:
    AWS_DEADLINE_API ServiceManagedEc2FleetConfiguration() = default;
    AWS_DEADLINE_API ServiceManagedEc2FleetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ServiceManagedEc2FleetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline const ServiceManagedEc2InstanceCapabilities& GetInstanceCapabilities() const { return m_instanceCapabilities; }
    inline bool InstanceCapabilitiesHasBeenSet() const { return m_instanceCapabilitiesHasBeenSet; }
    template<typename InstanceCapabilitiesT = ServiceManagedEc2InstanceCapabilities>
    void SetInstanceCapabilities(InstanceCapabilitiesT&& value) { m_instanceCapabilitiesHasBeenSet = true; m_instanceCapabilities = std::forward<InstanceCapabilitiesT>(value); }
    template<typename InstanceCapabilitiesT = ServiceManagedEc2InstanceCapabilities>
    ServiceManagedEc2FleetConfiguration& WithInstanceCapabilities(InstanceCapabilitiesT&& value) { SetInstanceCapabilities(std::forward<InstanceCapabilitiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline const ServiceManagedEc2InstanceMarketOptions& GetInstanceMarketOptions() const { return m_instanceMarketOptions; }
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }
    template<typename InstanceMarketOptionsT = ServiceManagedEc2InstanceMarketOptions>
    void SetInstanceMarketOptions(InstanceMarketOptionsT&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::forward<InstanceMarketOptionsT>(value); }
    template<typename InstanceMarketOptionsT = ServiceManagedEc2InstanceMarketOptions>
    ServiceManagedEc2FleetConfiguration& WithInstanceMarketOptions(InstanceMarketOptionsT&& value) { SetInstanceMarketOptions(std::forward<InstanceMarketOptionsT>(value)); return *this;}
    ///@}
  private:

    ServiceManagedEc2InstanceCapabilities m_instanceCapabilities;
    bool m_instanceCapabilitiesHasBeenSet = false;

    ServiceManagedEc2InstanceMarketOptions m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
