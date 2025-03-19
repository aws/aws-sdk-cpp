/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/CustomerManagedFleetConfiguration.h>
#include <aws/deadline/model/ServiceManagedEc2FleetConfiguration.h>
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
   * <p>Fleet configuration details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/FleetConfiguration">AWS
   * API Reference</a></p>
   */
  class FleetConfiguration
  {
  public:
    AWS_DEADLINE_API FleetConfiguration() = default;
    AWS_DEADLINE_API FleetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API FleetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The customer managed fleets within a fleet configuration.</p>
     */
    inline const CustomerManagedFleetConfiguration& GetCustomerManaged() const { return m_customerManaged; }
    inline bool CustomerManagedHasBeenSet() const { return m_customerManagedHasBeenSet; }
    template<typename CustomerManagedT = CustomerManagedFleetConfiguration>
    void SetCustomerManaged(CustomerManagedT&& value) { m_customerManagedHasBeenSet = true; m_customerManaged = std::forward<CustomerManagedT>(value); }
    template<typename CustomerManagedT = CustomerManagedFleetConfiguration>
    FleetConfiguration& WithCustomerManaged(CustomerManagedT&& value) { SetCustomerManaged(std::forward<CustomerManagedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service managed Amazon EC2 instances for a fleet configuration.</p>
     */
    inline const ServiceManagedEc2FleetConfiguration& GetServiceManagedEc2() const { return m_serviceManagedEc2; }
    inline bool ServiceManagedEc2HasBeenSet() const { return m_serviceManagedEc2HasBeenSet; }
    template<typename ServiceManagedEc2T = ServiceManagedEc2FleetConfiguration>
    void SetServiceManagedEc2(ServiceManagedEc2T&& value) { m_serviceManagedEc2HasBeenSet = true; m_serviceManagedEc2 = std::forward<ServiceManagedEc2T>(value); }
    template<typename ServiceManagedEc2T = ServiceManagedEc2FleetConfiguration>
    FleetConfiguration& WithServiceManagedEc2(ServiceManagedEc2T&& value) { SetServiceManagedEc2(std::forward<ServiceManagedEc2T>(value)); return *this;}
    ///@}
  private:

    CustomerManagedFleetConfiguration m_customerManaged;
    bool m_customerManagedHasBeenSet = false;

    ServiceManagedEc2FleetConfiguration m_serviceManagedEc2;
    bool m_serviceManagedEc2HasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
