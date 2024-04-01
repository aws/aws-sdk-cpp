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
    AWS_DEADLINE_API ServiceManagedEc2FleetConfiguration();
    AWS_DEADLINE_API ServiceManagedEc2FleetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ServiceManagedEc2FleetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline const ServiceManagedEc2InstanceCapabilities& GetInstanceCapabilities() const{ return m_instanceCapabilities; }

    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline bool InstanceCapabilitiesHasBeenSet() const { return m_instanceCapabilitiesHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline void SetInstanceCapabilities(const ServiceManagedEc2InstanceCapabilities& value) { m_instanceCapabilitiesHasBeenSet = true; m_instanceCapabilities = value; }

    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline void SetInstanceCapabilities(ServiceManagedEc2InstanceCapabilities&& value) { m_instanceCapabilitiesHasBeenSet = true; m_instanceCapabilities = std::move(value); }

    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline ServiceManagedEc2FleetConfiguration& WithInstanceCapabilities(const ServiceManagedEc2InstanceCapabilities& value) { SetInstanceCapabilities(value); return *this;}

    /**
     * <p>The Amazon EC2 instance capabilities.</p>
     */
    inline ServiceManagedEc2FleetConfiguration& WithInstanceCapabilities(ServiceManagedEc2InstanceCapabilities&& value) { SetInstanceCapabilities(std::move(value)); return *this;}


    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline const ServiceManagedEc2InstanceMarketOptions& GetInstanceMarketOptions() const{ return m_instanceMarketOptions; }

    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline bool InstanceMarketOptionsHasBeenSet() const { return m_instanceMarketOptionsHasBeenSet; }

    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline void SetInstanceMarketOptions(const ServiceManagedEc2InstanceMarketOptions& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = value; }

    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline void SetInstanceMarketOptions(ServiceManagedEc2InstanceMarketOptions&& value) { m_instanceMarketOptionsHasBeenSet = true; m_instanceMarketOptions = std::move(value); }

    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline ServiceManagedEc2FleetConfiguration& WithInstanceMarketOptions(const ServiceManagedEc2InstanceMarketOptions& value) { SetInstanceMarketOptions(value); return *this;}

    /**
     * <p>The Amazon EC2 market type.</p>
     */
    inline ServiceManagedEc2FleetConfiguration& WithInstanceMarketOptions(ServiceManagedEc2InstanceMarketOptions&& value) { SetInstanceMarketOptions(std::move(value)); return *this;}

  private:

    ServiceManagedEc2InstanceCapabilities m_instanceCapabilities;
    bool m_instanceCapabilitiesHasBeenSet = false;

    ServiceManagedEc2InstanceMarketOptions m_instanceMarketOptions;
    bool m_instanceMarketOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
