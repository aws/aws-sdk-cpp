/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/LongFormatText.h>
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
   * <p>The subtitle label options for a visual.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualSubtitleLabelOptions">AWS
   * API Reference</a></p>
   */
  class VisualSubtitleLabelOptions
  {
  public:
    AWS_QUICKSIGHT_API VisualSubtitleLabelOptions();
    AWS_QUICKSIGHT_API VisualSubtitleLabelOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualSubtitleLabelOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility of the subtitle label.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the subtitle label.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the subtitle label.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the subtitle label.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the subtitle label.</p>
     */
    inline VisualSubtitleLabelOptions& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the subtitle label.</p>
     */
    inline VisualSubtitleLabelOptions& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The long text format of the subtitle label, such as plain text or rich
     * text.</p>
     */
    inline const LongFormatText& GetFormatText() const{ return m_formatText; }

    /**
     * <p>The long text format of the subtitle label, such as plain text or rich
     * text.</p>
     */
    inline bool FormatTextHasBeenSet() const { return m_formatTextHasBeenSet; }

    /**
     * <p>The long text format of the subtitle label, such as plain text or rich
     * text.</p>
     */
    inline void SetFormatText(const LongFormatText& value) { m_formatTextHasBeenSet = true; m_formatText = value; }

    /**
     * <p>The long text format of the subtitle label, such as plain text or rich
     * text.</p>
     */
    inline void SetFormatText(LongFormatText&& value) { m_formatTextHasBeenSet = true; m_formatText = std::move(value); }

    /**
     * <p>The long text format of the subtitle label, such as plain text or rich
     * text.</p>
     */
    inline VisualSubtitleLabelOptions& WithFormatText(const LongFormatText& value) { SetFormatText(value); return *this;}

    /**
     * <p>The long text format of the subtitle label, such as plain text or rich
     * text.</p>
     */
    inline VisualSubtitleLabelOptions& WithFormatText(LongFormatText&& value) { SetFormatText(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    LongFormatText m_formatText;
    bool m_formatTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
