/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_LIGHTSAIL_API InstanceNetworking
  {
  public:
    InstanceNetworking();
    InstanceNetworking(Aws::Utils::Json::JsonView jsonValue);
    InstanceNetworking& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline const MonthlyTransfer& GetMonthlyTransfer() const{ return m_monthlyTransfer; }

    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline bool MonthlyTransferHasBeenSet() const { return m_monthlyTransferHasBeenSet; }

    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline void SetMonthlyTransfer(const MonthlyTransfer& value) { m_monthlyTransferHasBeenSet = true; m_monthlyTransfer = value; }

    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline void SetMonthlyTransfer(MonthlyTransfer&& value) { m_monthlyTransferHasBeenSet = true; m_monthlyTransfer = std::move(value); }

    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline InstanceNetworking& WithMonthlyTransfer(const MonthlyTransfer& value) { SetMonthlyTransfer(value); return *this;}

    /**
     * <p>The amount of data in GB allocated for monthly data transfers.</p>
     */
    inline InstanceNetworking& WithMonthlyTransfer(MonthlyTransfer&& value) { SetMonthlyTransfer(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline const Aws::Vector<InstancePortInfo>& GetPorts() const{ return m_ports; }

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline void SetPorts(const Aws::Vector<InstancePortInfo>& value) { m_portsHasBeenSet = true; m_ports = value; }

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline void SetPorts(Aws::Vector<InstancePortInfo>&& value) { m_portsHasBeenSet = true; m_ports = std::move(value); }

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline InstanceNetworking& WithPorts(const Aws::Vector<InstancePortInfo>& value) { SetPorts(value); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline InstanceNetworking& WithPorts(Aws::Vector<InstancePortInfo>&& value) { SetPorts(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline InstanceNetworking& AddPorts(const InstancePortInfo& value) { m_portsHasBeenSet = true; m_ports.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs containing information about the ports on the
     * instance.</p>
     */
    inline InstanceNetworking& AddPorts(InstancePortInfo&& value) { m_portsHasBeenSet = true; m_ports.push_back(std::move(value)); return *this; }

  private:

    MonthlyTransfer m_monthlyTransfer;
    bool m_monthlyTransferHasBeenSet;

    Aws::Vector<InstancePortInfo> m_ports;
    bool m_portsHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
