/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FontConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/AxisLabelReferenceOptions.h>
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
   * <p>The label options for a chart axis. You must specify the field that the label
   * is targeted to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AxisLabelOptions">AWS
   * API Reference</a></p>
   */
  class AxisLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API AxisLabelOptions();
    AWS_QUICKSIGHT_API AxisLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AxisLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const{ return m_fontConfiguration; }

    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }

    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline void SetFontConfiguration(const FontConfiguration& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = value; }

    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline void SetFontConfiguration(FontConfiguration&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::move(value); }

    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline AxisLabelOptions& WithFontConfiguration(const FontConfiguration& value) { SetFontConfiguration(value); return *this;}

    /**
     * <p>The font configuration of the axis label.</p>
     */
    inline AxisLabelOptions& WithFontConfiguration(FontConfiguration&& value) { SetFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The text for the axis label.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }

    /**
     * <p>The text for the axis label.</p>
     */
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }

    /**
     * <p>The text for the axis label.</p>
     */
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }

    /**
     * <p>The text for the axis label.</p>
     */
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }

    /**
     * <p>The text for the axis label.</p>
     */
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }

    /**
     * <p>The text for the axis label.</p>
     */
    inline AxisLabelOptions& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}

    /**
     * <p>The text for the axis label.</p>
     */
    inline AxisLabelOptions& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}

    /**
     * <p>The text for the axis label.</p>
     */
    inline AxisLabelOptions& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}


    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline const AxisLabelReferenceOptions& GetApplyTo() const{ return m_applyTo; }

    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline bool ApplyToHasBeenSet() const { return m_applyToHasBeenSet; }

    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline void SetApplyTo(const AxisLabelReferenceOptions& value) { m_applyToHasBeenSet = true; m_applyTo = value; }

    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline void SetApplyTo(AxisLabelReferenceOptions&& value) { m_applyToHasBeenSet = true; m_applyTo = std::move(value); }

    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline AxisLabelOptions& WithApplyTo(const AxisLabelReferenceOptions& value) { SetApplyTo(value); return *this;}

    /**
     * <p>The options that indicate which field the label belongs to.</p>
     */
    inline AxisLabelOptions& WithApplyTo(AxisLabelReferenceOptions&& value) { SetApplyTo(std::move(value)); return *this;}

  private:

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;

    AxisLabelReferenceOptions m_applyTo;
    bool m_applyToHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
