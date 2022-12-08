/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/GaugeChartConditionalFormattingOption.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The conditional formatting of a <code>GaugeChartVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GaugeChartConditionalFormatting">AWS
   * API Reference</a></p>
   */
  class GaugeChartConditionalFormatting
  {
  public:
    AWS_QUICKSIGHT_API GaugeChartConditionalFormatting();
    AWS_QUICKSIGHT_API GaugeChartConditionalFormatting(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GaugeChartConditionalFormatting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline const Aws::Vector<GaugeChartConditionalFormattingOption>& GetConditionalFormattingOptions() const{ return m_conditionalFormattingOptions; }

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline bool ConditionalFormattingOptionsHasBeenSet() const { return m_conditionalFormattingOptionsHasBeenSet; }

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(const Aws::Vector<GaugeChartConditionalFormattingOption>& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = value; }

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline void SetConditionalFormattingOptions(Aws::Vector<GaugeChartConditionalFormattingOption>&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions = std::move(value); }

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConditionalFormatting& WithConditionalFormattingOptions(const Aws::Vector<GaugeChartConditionalFormattingOption>& value) { SetConditionalFormattingOptions(value); return *this;}

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConditionalFormatting& WithConditionalFormattingOptions(Aws::Vector<GaugeChartConditionalFormattingOption>&& value) { SetConditionalFormattingOptions(std::move(value)); return *this;}

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConditionalFormatting& AddConditionalFormattingOptions(const GaugeChartConditionalFormattingOption& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(value); return *this; }

    /**
     * <p>Conditional formatting options of a <code>GaugeChartVisual</code>.</p>
     */
    inline GaugeChartConditionalFormatting& AddConditionalFormattingOptions(GaugeChartConditionalFormattingOption&& value) { m_conditionalFormattingOptionsHasBeenSet = true; m_conditionalFormattingOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GaugeChartConditionalFormattingOption> m_conditionalFormattingOptions;
    bool m_conditionalFormattingOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
