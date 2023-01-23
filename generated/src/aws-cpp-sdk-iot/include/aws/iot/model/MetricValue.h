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
    AWS_IOT_API MetricValue();
    AWS_IOT_API MetricValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MetricValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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


    /**
     * <p> The numeral value of a metric. </p>
     */
    inline double GetNumber() const{ return m_number; }

    /**
     * <p> The numeral value of a metric. </p>
     */
    inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }

    /**
     * <p> The numeral value of a metric. </p>
     */
    inline void SetNumber(double value) { m_numberHasBeenSet = true; m_number = value; }

    /**
     * <p> The numeral value of a metric. </p>
     */
    inline MetricValue& WithNumber(double value) { SetNumber(value); return *this;}


    /**
     * <p> The numeral values of a metric. </p>
     */
    inline const Aws::Vector<double>& GetNumbers() const{ return m_numbers; }

    /**
     * <p> The numeral values of a metric. </p>
     */
    inline bool NumbersHasBeenSet() const { return m_numbersHasBeenSet; }

    /**
     * <p> The numeral values of a metric. </p>
     */
    inline void SetNumbers(const Aws::Vector<double>& value) { m_numbersHasBeenSet = true; m_numbers = value; }

    /**
     * <p> The numeral values of a metric. </p>
     */
    inline void SetNumbers(Aws::Vector<double>&& value) { m_numbersHasBeenSet = true; m_numbers = std::move(value); }

    /**
     * <p> The numeral values of a metric. </p>
     */
    inline MetricValue& WithNumbers(const Aws::Vector<double>& value) { SetNumbers(value); return *this;}

    /**
     * <p> The numeral values of a metric. </p>
     */
    inline MetricValue& WithNumbers(Aws::Vector<double>&& value) { SetNumbers(std::move(value)); return *this;}

    /**
     * <p> The numeral values of a metric. </p>
     */
    inline MetricValue& AddNumbers(double value) { m_numbersHasBeenSet = true; m_numbers.push_back(value); return *this; }


    /**
     * <p> The string values of a metric. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStrings() const{ return m_strings; }

    /**
     * <p> The string values of a metric. </p>
     */
    inline bool StringsHasBeenSet() const { return m_stringsHasBeenSet; }

    /**
     * <p> The string values of a metric. </p>
     */
    inline void SetStrings(const Aws::Vector<Aws::String>& value) { m_stringsHasBeenSet = true; m_strings = value; }

    /**
     * <p> The string values of a metric. </p>
     */
    inline void SetStrings(Aws::Vector<Aws::String>&& value) { m_stringsHasBeenSet = true; m_strings = std::move(value); }

    /**
     * <p> The string values of a metric. </p>
     */
    inline MetricValue& WithStrings(const Aws::Vector<Aws::String>& value) { SetStrings(value); return *this;}

    /**
     * <p> The string values of a metric. </p>
     */
    inline MetricValue& WithStrings(Aws::Vector<Aws::String>&& value) { SetStrings(std::move(value)); return *this;}

    /**
     * <p> The string values of a metric. </p>
     */
    inline MetricValue& AddStrings(const Aws::String& value) { m_stringsHasBeenSet = true; m_strings.push_back(value); return *this; }

    /**
     * <p> The string values of a metric. </p>
     */
    inline MetricValue& AddStrings(Aws::String&& value) { m_stringsHasBeenSet = true; m_strings.push_back(std::move(value)); return *this; }

    /**
     * <p> The string values of a metric. </p>
     */
    inline MetricValue& AddStrings(const char* value) { m_stringsHasBeenSet = true; m_strings.push_back(value); return *this; }

  private:

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;

    Aws::Vector<int> m_ports;
    bool m_portsHasBeenSet = false;

    double m_number;
    bool m_numberHasBeenSet = false;

    Aws::Vector<double> m_numbers;
    bool m_numbersHasBeenSet = false;

    Aws::Vector<Aws::String> m_strings;
    bool m_stringsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
