/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/FontConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The share label options for the labels.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LabelOptions">AWS
   * API Reference</a></p>
   */
  class LabelOptions
  {
  public:
    AWS_QUICKSIGHT_API LabelOptions();
    AWS_QUICKSIGHT_API LabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline LabelOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Determines whether or not the label is visible.</p>
     */
    inline LabelOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The font configuration of the label.</p>
     */
    inline const FontConfiguration& GetFontConfiguration() const{ return m_fontConfiguration; }

    /**
     * <p>The font configuration of the label.</p>
     */
    inline bool FontConfigurationHasBeenSet() const { return m_fontConfigurationHasBeenSet; }

    /**
     * <p>The font configuration of the label.</p>
     */
    inline void SetFontConfiguration(const FontConfiguration& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = value; }

    /**
     * <p>The font configuration of the label.</p>
     */
    inline void SetFontConfiguration(FontConfiguration&& value) { m_fontConfigurationHasBeenSet = true; m_fontConfiguration = std::move(value); }

    /**
     * <p>The font configuration of the label.</p>
     */
    inline LabelOptions& WithFontConfiguration(const FontConfiguration& value) { SetFontConfiguration(value); return *this;}

    /**
     * <p>The font configuration of the label.</p>
     */
    inline LabelOptions& WithFontConfiguration(FontConfiguration&& value) { SetFontConfiguration(std::move(value)); return *this;}


    /**
     * <p>The text for the label.</p>
     */
    inline const Aws::String& GetCustomLabel() const{ return m_customLabel; }

    /**
     * <p>The text for the label.</p>
     */
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }

    /**
     * <p>The text for the label.</p>
     */
    inline void SetCustomLabel(const Aws::String& value) { m_customLabelHasBeenSet = true; m_customLabel = value; }

    /**
     * <p>The text for the label.</p>
     */
    inline void SetCustomLabel(Aws::String&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::move(value); }

    /**
     * <p>The text for the label.</p>
     */
    inline void SetCustomLabel(const char* value) { m_customLabelHasBeenSet = true; m_customLabel.assign(value); }

    /**
     * <p>The text for the label.</p>
     */
    inline LabelOptions& WithCustomLabel(const Aws::String& value) { SetCustomLabel(value); return *this;}

    /**
     * <p>The text for the label.</p>
     */
    inline LabelOptions& WithCustomLabel(Aws::String&& value) { SetCustomLabel(std::move(value)); return *this;}

    /**
     * <p>The text for the label.</p>
     */
    inline LabelOptions& WithCustomLabel(const char* value) { SetCustomLabel(value); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    FontConfiguration m_fontConfiguration;
    bool m_fontConfigurationHasBeenSet = false;

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
