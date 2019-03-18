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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The value to be compared with the <code>metric</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MetricValue">AWS API
   * Reference</a></p>
   */
  class AWS_IOT_API MetricValue
  {
  public:
    MetricValue();
    MetricValue(Aws::Utils::Json::JsonView jsonValue);
    MetricValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the <code>comparisonOperator</code> calls for a numeric value, use this to
     * specify that numeric value to be compared with the <code>metric</code>.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a numeric value, use this to
     * specify that numeric value to be compared with the <code>metric</code>.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a numeric value, use this to
     * specify that numeric value to be compared with the <code>metric</code>.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a numeric value, use this to
     * specify that numeric value to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }


    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline const Aws::Vector<int>& GetPorts() const{ return m_ports; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline void SetPorts(const Aws::Vector<int>& value) { m_portsHasBeenSet = true; m_ports = value; }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline void SetPorts(Aws::Vector<int>&& value) { m_portsHasBeenSet = true; m_ports = std::move(value); }

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& WithPorts(const Aws::Vector<int>& value) { SetPorts(value); return *this;}

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& WithPorts(Aws::Vector<int>&& value) { SetPorts(std::move(value)); return *this;}

    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline MetricValue& AddPorts(int value) { m_portsHasBeenSet = true; m_ports.push_back(value); return *this; }

  private:

    long long m_count;
    bool m_countHasBeenSet;

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet;

    Aws::Vector<int> m_ports;
    bool m_portsHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
