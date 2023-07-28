/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/model/BorderColor.h>
#include <aws/chime-sdk-media-pipelines/model/HighlightColor.h>
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
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   * <p>Defines the settings for a video tile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-media-pipelines-2021-07-15/VideoAttribute">AWS
   * API Reference</a></p>
   */
  class VideoAttribute
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API VideoAttribute();
    AWS_CHIMESDKMEDIAPIPELINES_API VideoAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API VideoAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMEDIAPIPELINES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets the corner radius of all video tiles.</p>
     */
    inline int GetCornerRadius() const{ return m_cornerRadius; }

    /**
     * <p>Sets the corner radius of all video tiles.</p>
     */
    inline bool CornerRadiusHasBeenSet() const { return m_cornerRadiusHasBeenSet; }

    /**
     * <p>Sets the corner radius of all video tiles.</p>
     */
    inline void SetCornerRadius(int value) { m_cornerRadiusHasBeenSet = true; m_cornerRadius = value; }

    /**
     * <p>Sets the corner radius of all video tiles.</p>
     */
    inline VideoAttribute& WithCornerRadius(int value) { SetCornerRadius(value); return *this;}


    /**
     * <p>Defines the border color of all video tiles.</p>
     */
    inline const BorderColor& GetBorderColor() const{ return m_borderColor; }

    /**
     * <p>Defines the border color of all video tiles.</p>
     */
    inline bool BorderColorHasBeenSet() const { return m_borderColorHasBeenSet; }

    /**
     * <p>Defines the border color of all video tiles.</p>
     */
    inline void SetBorderColor(const BorderColor& value) { m_borderColorHasBeenSet = true; m_borderColor = value; }

    /**
     * <p>Defines the border color of all video tiles.</p>
     */
    inline void SetBorderColor(BorderColor&& value) { m_borderColorHasBeenSet = true; m_borderColor = std::move(value); }

    /**
     * <p>Defines the border color of all video tiles.</p>
     */
    inline VideoAttribute& WithBorderColor(const BorderColor& value) { SetBorderColor(value); return *this;}

    /**
     * <p>Defines the border color of all video tiles.</p>
     */
    inline VideoAttribute& WithBorderColor(BorderColor&& value) { SetBorderColor(std::move(value)); return *this;}


    /**
     * <p>Defines the highlight color for the active video tile.</p>
     */
    inline const HighlightColor& GetHighlightColor() const{ return m_highlightColor; }

    /**
     * <p>Defines the highlight color for the active video tile.</p>
     */
    inline bool HighlightColorHasBeenSet() const { return m_highlightColorHasBeenSet; }

    /**
     * <p>Defines the highlight color for the active video tile.</p>
     */
    inline void SetHighlightColor(const HighlightColor& value) { m_highlightColorHasBeenSet = true; m_highlightColor = value; }

    /**
     * <p>Defines the highlight color for the active video tile.</p>
     */
    inline void SetHighlightColor(HighlightColor&& value) { m_highlightColorHasBeenSet = true; m_highlightColor = std::move(value); }

    /**
     * <p>Defines the highlight color for the active video tile.</p>
     */
    inline VideoAttribute& WithHighlightColor(const HighlightColor& value) { SetHighlightColor(value); return *this;}

    /**
     * <p>Defines the highlight color for the active video tile.</p>
     */
    inline VideoAttribute& WithHighlightColor(HighlightColor&& value) { SetHighlightColor(std::move(value)); return *this;}


    /**
     * <p>Defines the border thickness for all video tiles.</p>
     */
    inline int GetBorderThickness() const{ return m_borderThickness; }

    /**
     * <p>Defines the border thickness for all video tiles.</p>
     */
    inline bool BorderThicknessHasBeenSet() const { return m_borderThicknessHasBeenSet; }

    /**
     * <p>Defines the border thickness for all video tiles.</p>
     */
    inline void SetBorderThickness(int value) { m_borderThicknessHasBeenSet = true; m_borderThickness = value; }

    /**
     * <p>Defines the border thickness for all video tiles.</p>
     */
    inline VideoAttribute& WithBorderThickness(int value) { SetBorderThickness(value); return *this;}

  private:

    int m_cornerRadius;
    bool m_cornerRadiusHasBeenSet = false;

    BorderColor m_borderColor;
    bool m_borderColorHasBeenSet = false;

    HighlightColor m_highlightColor;
    bool m_highlightColorHasBeenSet = false;

    int m_borderThickness;
    bool m_borderThicknessHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
