/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MetricValue
  {
  public:
    AWS_IOT_API MetricValue() = default;
    AWS_IOT_API MetricValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If the <code>comparisonOperator</code> calls for a numeric value, use this to
     * specify that numeric value to be compared with the <code>metric</code>.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline MetricValue& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of CIDRs, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    void SetCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::forward<CidrsT>(value); }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    MetricValue& WithCidrs(CidrsT&& value) { SetCidrs(std::forward<CidrsT>(value)); return *this;}
    template<typename CidrsT = Aws::String>
    MetricValue& AddCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs.emplace_back(std::forward<CidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the <code>comparisonOperator</code> calls for a set of ports, use this to
     * specify that set to be compared with the <code>metric</code>.</p>
     */
    inline const Aws::Vector<int>& GetPorts() const { return m_ports; }
    inline bool PortsHasBeenSet() const { return m_portsHasBeenSet; }
    template<typename PortsT = Aws::Vector<int>>
    void SetPorts(PortsT&& value) { m_portsHasBeenSet = true; m_ports = std::forward<PortsT>(value); }
    template<typename PortsT = Aws::Vector<int>>
    MetricValue& WithPorts(PortsT&& value) { SetPorts(std::forward<PortsT>(value)); return *this;}
    inline MetricValue& AddPorts(int value) { m_portsHasBeenSet = true; m_ports.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The numeral value of a metric. </p>
     */
    inline double GetNumber() const { return m_number; }
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
    inline void SetNumber(double value) { m_numberHasBeenSet = true; m_number = value; }
    inline MetricValue& WithNumber(double value) { SetNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The numeral values of a metric. </p>
     */
    inline const Aws::Vector<double>& GetNumbers() const { return m_numbers; }
    inline bool NumbersHasBeenSet() const { return m_numbersHasBeenSet; }
    template<typename NumbersT = Aws::Vector<double>>
    void SetNumbers(NumbersT&& value) { m_numbersHasBeenSet = true; m_numbers = std::forward<NumbersT>(value); }
    template<typename NumbersT = Aws::Vector<double>>
    MetricValue& WithNumbers(NumbersT&& value) { SetNumbers(std::forward<NumbersT>(value)); return *this;}
    inline MetricValue& AddNumbers(double value) { m_numbersHasBeenSet = true; m_numbers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The string values of a metric. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStrings() const { return m_strings; }
    inline bool StringsHasBeenSet() const { return m_stringsHasBeenSet; }
    template<typename StringsT = Aws::Vector<Aws::String>>
    void SetStrings(StringsT&& value) { m_stringsHasBeenSet = true; m_strings = std::forward<StringsT>(value); }
    template<typename StringsT = Aws::Vector<Aws::String>>
    MetricValue& WithStrings(StringsT&& value) { SetStrings(std::forward<StringsT>(value)); return *this;}
    template<typename StringsT = Aws::String>
    MetricValue& AddStrings(StringsT&& value) { m_stringsHasBeenSet = true; m_strings.emplace_back(std::forward<StringsT>(value)); return *this; }
    ///@}
  private:

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;

    Aws::Vector<int> m_ports;
    bool m_portsHasBeenSet = false;

    double m_number{0.0};
    bool m_numberHasBeenSet = false;

    Aws::Vector<double> m_numbers;
    bool m_numbersHasBeenSet = false;

    Aws::Vector<Aws::String> m_strings;
    bool m_stringsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
