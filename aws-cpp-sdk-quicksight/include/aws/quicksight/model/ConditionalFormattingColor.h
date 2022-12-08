/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingSolidColor.h>
#include <aws/quicksight/model/ConditionalFormattingGradientColor.h>
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
   * <p>The formatting configuration for the color.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingColor">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingColor
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingColor();
    AWS_QUICKSIGHT_API ConditionalFormattingColor(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingColor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline const ConditionalFormattingSolidColor& GetSolid() const{ return m_solid; }

    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline bool SolidHasBeenSet() const { return m_solidHasBeenSet; }

    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline void SetSolid(const ConditionalFormattingSolidColor& value) { m_solidHasBeenSet = true; m_solid = value; }

    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline void SetSolid(ConditionalFormattingSolidColor&& value) { m_solidHasBeenSet = true; m_solid = std::move(value); }

    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline ConditionalFormattingColor& WithSolid(const ConditionalFormattingSolidColor& value) { SetSolid(value); return *this;}

    /**
     * <p>Formatting configuration for solid color.</p>
     */
    inline ConditionalFormattingColor& WithSolid(ConditionalFormattingSolidColor&& value) { SetSolid(std::move(value)); return *this;}


    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline const ConditionalFormattingGradientColor& GetGradient() const{ return m_gradient; }

    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline bool GradientHasBeenSet() const { return m_gradientHasBeenSet; }

    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline void SetGradient(const ConditionalFormattingGradientColor& value) { m_gradientHasBeenSet = true; m_gradient = value; }

    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline void SetGradient(ConditionalFormattingGradientColor&& value) { m_gradientHasBeenSet = true; m_gradient = std::move(value); }

    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline ConditionalFormattingColor& WithGradient(const ConditionalFormattingGradientColor& value) { SetGradient(value); return *this;}

    /**
     * <p>Formatting configuration for gradient color.</p>
     */
    inline ConditionalFormattingColor& WithGradient(ConditionalFormattingGradientColor&& value) { SetGradient(std::move(value)); return *this;}

  private:

    ConditionalFormattingSolidColor m_solid;
    bool m_solidHasBeenSet = false;

    ConditionalFormattingGradientColor m_gradient;
    bool m_gradientHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
