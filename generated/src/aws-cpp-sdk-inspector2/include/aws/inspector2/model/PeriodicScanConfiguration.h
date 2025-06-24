/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/PeriodicScanFrequency.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Configuration settings for periodic scans that run on a scheduled
   * basis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PeriodicScanConfiguration">AWS
   * API Reference</a></p>
   */
  class PeriodicScanConfiguration
  {
  public:
    AWS_INSPECTOR2_API PeriodicScanConfiguration() = default;
    AWS_INSPECTOR2_API PeriodicScanConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API PeriodicScanConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The frequency at which periodic scans are performed (such as weekly or
     * monthly).</p> <p>If you don't provide the <code>frequencyExpression</code>
     * Amazon Inspector chooses day for the scan to run. If you provide the
     * <code>frequencyExpression</code>, the schedule must match the specified
     * <code>frequency</code>.</p>
     */
    inline PeriodicScanFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(PeriodicScanFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline PeriodicScanConfiguration& WithFrequency(PeriodicScanFrequency value) { SetFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule expression for periodic scans, in cron format.</p>
     */
    inline const Aws::String& GetFrequencyExpression() const { return m_frequencyExpression; }
    inline bool FrequencyExpressionHasBeenSet() const { return m_frequencyExpressionHasBeenSet; }
    template<typename FrequencyExpressionT = Aws::String>
    void SetFrequencyExpression(FrequencyExpressionT&& value) { m_frequencyExpressionHasBeenSet = true; m_frequencyExpression = std::forward<FrequencyExpressionT>(value); }
    template<typename FrequencyExpressionT = Aws::String>
    PeriodicScanConfiguration& WithFrequencyExpression(FrequencyExpressionT&& value) { SetFrequencyExpression(std::forward<FrequencyExpressionT>(value)); return *this;}
    ///@}
  private:

    PeriodicScanFrequency m_frequency{PeriodicScanFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;

    Aws::String m_frequencyExpression;
    bool m_frequencyExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
