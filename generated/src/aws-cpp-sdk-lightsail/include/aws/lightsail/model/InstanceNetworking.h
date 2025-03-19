/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/MonthlyTransfer.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/InstancePortInfo.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes monthly data transfer rates and port information for an
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceNetworking">AWS
   * API Reference</a></p>
   */
  class InstanceNetworking
  {
  public:
    AWS_LIGHTSAIL_API InstanceNetworking() = default;
    AWS_LIGHTSAIL_API InstanceNetworking(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API InstanceNetworking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline const MonthlyTransfer& GetMonthlyTransfer() const { return m_monthlyTransfer; }
    inline bool MonthlyTransferHasBeenSet() const { return m_monthlyTransferHasBeenSet; }
    template<typename MonthlyTransferT = MonthlyTransfer>
    void SetMonthlyTransfer(MonthlyTransferT&& value) { m_monthlyTransferHasBeenSet = true; m_monthlyTransfer = std::forward<MonthlyTransferT>(value); }
    template<typename MonthlyTransferT = MonthlyTransfer>
    InstanceNetworking& WithMonthlyTransfer(MonthlyTransferT&& value) { SetMonthlyTransfer(std::forward<MonthlyTransferT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline const Aws::Vector<InstancePortInfo>& GetPorts() const { return m_ports; }
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
    template<typename PortsT = Aws::Vector<InstancePortInfo>>
    void SetPorts(PortsT&& value) { m_portsHasBeenSet = true; m_ports = std::forward<PortsT>(value); }
    template<typename PortsT = Aws::Vector<InstancePortInfo>>
    InstanceNetworking& WithPorts(PortsT&& value) { SetPorts(std::forward<PortsT>(value)); return *this;}
    template<typename PortsT = InstancePortInfo>
    InstanceNetworking& AddPorts(PortsT&& value) { m_portsHasBeenSet = true; m_ports.emplace_back(std::forward<PortsT>(value)); return *this; }
    ///@}
  private:

    MonthlyTransfer m_monthlyTransfer;
    bool m_monthlyTransferHasBeenSet = false;

    Aws::Vector<InstancePortInfo> m_ports;
    bool m_portsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
