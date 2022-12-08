/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/LayoutElementType.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FreeFormLayoutElementBorderStyle.h>
#include <aws/quicksight/model/FreeFormLayoutElementBackgroundStyle.h>
#include <aws/quicksight/model/LoadingAnimation.h>
#include <aws/quicksight/model/SheetElementRenderingRule.h>
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
   * <p>An element within a free-form layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormLayoutElement">AWS
   * API Reference</a></p>
   */
  class FreeFormLayoutElement
  {
  public:
    AWS_QUICKSIGHT_API FreeFormLayoutElement();
    AWS_QUICKSIGHT_API FreeFormLayoutElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormLayoutElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline const Aws::String& GetElementId() const{ return m_elementId; }

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline bool ElementIdHasBeenSet() const { return m_elementIdHasBeenSet; }

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline void SetElementId(const Aws::String& value) { m_elementIdHasBeenSet = true; m_elementId = value; }

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline void SetElementId(Aws::String&& value) { m_elementIdHasBeenSet = true; m_elementId = std::move(value); }

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline void SetElementId(const char* value) { m_elementIdHasBeenSet = true; m_elementId.assign(value); }

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithElementId(const Aws::String& value) { SetElementId(value); return *this;}

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithElementId(Aws::String&& value) { SetElementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithElementId(const char* value) { SetElementId(value); return *this;}


    /**
     * <p>The type of element.</p>
     */
    inline const LayoutElementType& GetElementType() const{ return m_elementType; }

    /**
     * <p>The type of element.</p>
     */
    inline bool ElementTypeHasBeenSet() const { return m_elementTypeHasBeenSet; }

    /**
     * <p>The type of element.</p>
     */
    inline void SetElementType(const LayoutElementType& value) { m_elementTypeHasBeenSet = true; m_elementType = value; }

    /**
     * <p>The type of element.</p>
     */
    inline void SetElementType(LayoutElementType&& value) { m_elementTypeHasBeenSet = true; m_elementType = std::move(value); }

    /**
     * <p>The type of element.</p>
     */
    inline FreeFormLayoutElement& WithElementType(const LayoutElementType& value) { SetElementType(value); return *this;}

    /**
     * <p>The type of element.</p>
     */
    inline FreeFormLayoutElement& WithElementType(LayoutElementType&& value) { SetElementType(std::move(value)); return *this;}


    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline const Aws::String& GetXAxisLocation() const{ return m_xAxisLocation; }

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline bool XAxisLocationHasBeenSet() const { return m_xAxisLocationHasBeenSet; }

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline void SetXAxisLocation(const Aws::String& value) { m_xAxisLocationHasBeenSet = true; m_xAxisLocation = value; }

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline void SetXAxisLocation(Aws::String&& value) { m_xAxisLocationHasBeenSet = true; m_xAxisLocation = std::move(value); }

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline void SetXAxisLocation(const char* value) { m_xAxisLocationHasBeenSet = true; m_xAxisLocation.assign(value); }

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline FreeFormLayoutElement& WithXAxisLocation(const Aws::String& value) { SetXAxisLocation(value); return *this;}

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline FreeFormLayoutElement& WithXAxisLocation(Aws::String&& value) { SetXAxisLocation(std::move(value)); return *this;}

    /**
     * <p>The x-axis coordinate of the element.</p>
     */
    inline FreeFormLayoutElement& WithXAxisLocation(const char* value) { SetXAxisLocation(value); return *this;}


    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline const Aws::String& GetYAxisLocation() const{ return m_yAxisLocation; }

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline bool YAxisLocationHasBeenSet() const { return m_yAxisLocationHasBeenSet; }

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline void SetYAxisLocation(const Aws::String& value) { m_yAxisLocationHasBeenSet = true; m_yAxisLocation = value; }

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline void SetYAxisLocation(Aws::String&& value) { m_yAxisLocationHasBeenSet = true; m_yAxisLocation = std::move(value); }

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline void SetYAxisLocation(const char* value) { m_yAxisLocationHasBeenSet = true; m_yAxisLocation.assign(value); }

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline FreeFormLayoutElement& WithYAxisLocation(const Aws::String& value) { SetYAxisLocation(value); return *this;}

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline FreeFormLayoutElement& WithYAxisLocation(Aws::String&& value) { SetYAxisLocation(std::move(value)); return *this;}

    /**
     * <p>The y-axis coordinate of the element.</p>
     */
    inline FreeFormLayoutElement& WithYAxisLocation(const char* value) { SetYAxisLocation(value); return *this;}


    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline const Aws::String& GetWidth() const{ return m_width; }

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline void SetWidth(const Aws::String& value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline void SetWidth(Aws::String&& value) { m_widthHasBeenSet = true; m_width = std::move(value); }

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline void SetWidth(const char* value) { m_widthHasBeenSet = true; m_width.assign(value); }

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithWidth(const Aws::String& value) { SetWidth(value); return *this;}

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithWidth(Aws::String&& value) { SetWidth(std::move(value)); return *this;}

    /**
     * <p>The width of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithWidth(const char* value) { SetWidth(value); return *this;}


    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline const Aws::String& GetHeight() const{ return m_height; }

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline void SetHeight(const Aws::String& value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline void SetHeight(Aws::String&& value) { m_heightHasBeenSet = true; m_height = std::move(value); }

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline void SetHeight(const char* value) { m_heightHasBeenSet = true; m_height.assign(value); }

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithHeight(const Aws::String& value) { SetHeight(value); return *this;}

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithHeight(Aws::String&& value) { SetHeight(std::move(value)); return *this;}

    /**
     * <p>The height of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithHeight(const char* value) { SetHeight(value); return *this;}


    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of an element within a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}


    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline const Aws::Vector<SheetElementRenderingRule>& GetRenderingRules() const{ return m_renderingRules; }

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline bool RenderingRulesHasBeenSet() const { return m_renderingRulesHasBeenSet; }

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline void SetRenderingRules(const Aws::Vector<SheetElementRenderingRule>& value) { m_renderingRulesHasBeenSet = true; m_renderingRules = value; }

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline void SetRenderingRules(Aws::Vector<SheetElementRenderingRule>&& value) { m_renderingRulesHasBeenSet = true; m_renderingRules = std::move(value); }

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithRenderingRules(const Aws::Vector<SheetElementRenderingRule>& value) { SetRenderingRules(value); return *this;}

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline FreeFormLayoutElement& WithRenderingRules(Aws::Vector<SheetElementRenderingRule>&& value) { SetRenderingRules(std::move(value)); return *this;}

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline FreeFormLayoutElement& AddRenderingRules(const SheetElementRenderingRule& value) { m_renderingRulesHasBeenSet = true; m_renderingRules.push_back(value); return *this; }

    /**
     * <p>The rendering rules that determine when an element should be displayed within
     * a free-form layout.</p>
     */
    inline FreeFormLayoutElement& AddRenderingRules(SheetElementRenderingRule&& value) { m_renderingRulesHasBeenSet = true; m_renderingRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline const FreeFormLayoutElementBorderStyle& GetBorderStyle() const{ return m_borderStyle; }

    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline bool BorderStyleHasBeenSet() const { return m_borderStyleHasBeenSet; }

    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline void SetBorderStyle(const FreeFormLayoutElementBorderStyle& value) { m_borderStyleHasBeenSet = true; m_borderStyle = value; }

    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline void SetBorderStyle(FreeFormLayoutElementBorderStyle&& value) { m_borderStyleHasBeenSet = true; m_borderStyle = std::move(value); }

    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline FreeFormLayoutElement& WithBorderStyle(const FreeFormLayoutElementBorderStyle& value) { SetBorderStyle(value); return *this;}

    /**
     * <p>The border style configuration of a free-form layout element.</p>
     */
    inline FreeFormLayoutElement& WithBorderStyle(FreeFormLayoutElementBorderStyle&& value) { SetBorderStyle(std::move(value)); return *this;}


    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline const FreeFormLayoutElementBorderStyle& GetSelectedBorderStyle() const{ return m_selectedBorderStyle; }

    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline bool SelectedBorderStyleHasBeenSet() const { return m_selectedBorderStyleHasBeenSet; }

    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline void SetSelectedBorderStyle(const FreeFormLayoutElementBorderStyle& value) { m_selectedBorderStyleHasBeenSet = true; m_selectedBorderStyle = value; }

    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline void SetSelectedBorderStyle(FreeFormLayoutElementBorderStyle&& value) { m_selectedBorderStyleHasBeenSet = true; m_selectedBorderStyle = std::move(value); }

    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline FreeFormLayoutElement& WithSelectedBorderStyle(const FreeFormLayoutElementBorderStyle& value) { SetSelectedBorderStyle(value); return *this;}

    /**
     * <p>The border style configuration of a free-form layout element. This border
     * style is used when the element is selected.</p>
     */
    inline FreeFormLayoutElement& WithSelectedBorderStyle(FreeFormLayoutElementBorderStyle&& value) { SetSelectedBorderStyle(std::move(value)); return *this;}


    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline const FreeFormLayoutElementBackgroundStyle& GetBackgroundStyle() const{ return m_backgroundStyle; }

    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline bool BackgroundStyleHasBeenSet() const { return m_backgroundStyleHasBeenSet; }

    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline void SetBackgroundStyle(const FreeFormLayoutElementBackgroundStyle& value) { m_backgroundStyleHasBeenSet = true; m_backgroundStyle = value; }

    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline void SetBackgroundStyle(FreeFormLayoutElementBackgroundStyle&& value) { m_backgroundStyleHasBeenSet = true; m_backgroundStyle = std::move(value); }

    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline FreeFormLayoutElement& WithBackgroundStyle(const FreeFormLayoutElementBackgroundStyle& value) { SetBackgroundStyle(value); return *this;}

    /**
     * <p>The background style configuration of a free-form layout element.</p>
     */
    inline FreeFormLayoutElement& WithBackgroundStyle(FreeFormLayoutElementBackgroundStyle&& value) { SetBackgroundStyle(std::move(value)); return *this;}


    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline const LoadingAnimation& GetLoadingAnimation() const{ return m_loadingAnimation; }

    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline bool LoadingAnimationHasBeenSet() const { return m_loadingAnimationHasBeenSet; }

    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline void SetLoadingAnimation(const LoadingAnimation& value) { m_loadingAnimationHasBeenSet = true; m_loadingAnimation = value; }

    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline void SetLoadingAnimation(LoadingAnimation&& value) { m_loadingAnimationHasBeenSet = true; m_loadingAnimation = std::move(value); }

    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline FreeFormLayoutElement& WithLoadingAnimation(const LoadingAnimation& value) { SetLoadingAnimation(value); return *this;}

    /**
     * <p>The loading animation configuration of a free-form layout element.</p>
     */
    inline FreeFormLayoutElement& WithLoadingAnimation(LoadingAnimation&& value) { SetLoadingAnimation(std::move(value)); return *this;}

  private:

    Aws::String m_elementId;
    bool m_elementIdHasBeenSet = false;

    LayoutElementType m_elementType;
    bool m_elementTypeHasBeenSet = false;

    Aws::String m_xAxisLocation;
    bool m_xAxisLocationHasBeenSet = false;

    Aws::String m_yAxisLocation;
    bool m_yAxisLocationHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;

    Aws::String m_height;
    bool m_heightHasBeenSet = false;

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;

    Aws::Vector<SheetElementRenderingRule> m_renderingRules;
    bool m_renderingRulesHasBeenSet = false;

    FreeFormLayoutElementBorderStyle m_borderStyle;
    bool m_borderStyleHasBeenSet = false;

    FreeFormLayoutElementBorderStyle m_selectedBorderStyle;
    bool m_selectedBorderStyleHasBeenSet = false;

    FreeFormLayoutElementBackgroundStyle m_backgroundStyle;
    bool m_backgroundStyleHasBeenSet = false;

    LoadingAnimation m_loadingAnimation;
    bool m_loadingAnimationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
