﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FormStyleConfig.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the configuration for the form's style.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormStyle">AWS
   * API Reference</a></p>
   */
  class FormStyle
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormStyle();
    AWS_AMPLIFYUIBUILDER_API FormStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The spacing for the horizontal gap.</p>
     */
    inline const FormStyleConfig& GetHorizontalGap() const{ return m_horizontalGap; }
    inline bool HorizontalGapHasBeenSet() const { return m_horizontalGapHasBeenSet; }
    inline void SetHorizontalGap(const FormStyleConfig& value) { m_horizontalGapHasBeenSet = true; m_horizontalGap = value; }
    inline void SetHorizontalGap(FormStyleConfig&& value) { m_horizontalGapHasBeenSet = true; m_horizontalGap = std::move(value); }
    inline FormStyle& WithHorizontalGap(const FormStyleConfig& value) { SetHorizontalGap(value); return *this;}
    inline FormStyle& WithHorizontalGap(FormStyleConfig&& value) { SetHorizontalGap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spacing for the vertical gap.</p>
     */
    inline const FormStyleConfig& GetVerticalGap() const{ return m_verticalGap; }
    inline bool VerticalGapHasBeenSet() const { return m_verticalGapHasBeenSet; }
    inline void SetVerticalGap(const FormStyleConfig& value) { m_verticalGapHasBeenSet = true; m_verticalGap = value; }
    inline void SetVerticalGap(FormStyleConfig&& value) { m_verticalGapHasBeenSet = true; m_verticalGap = std::move(value); }
    inline FormStyle& WithVerticalGap(const FormStyleConfig& value) { SetVerticalGap(value); return *this;}
    inline FormStyle& WithVerticalGap(FormStyleConfig&& value) { SetVerticalGap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the outer padding for the form.</p>
     */
    inline const FormStyleConfig& GetOuterPadding() const{ return m_outerPadding; }
    inline bool OuterPaddingHasBeenSet() const { return m_outerPaddingHasBeenSet; }
    inline void SetOuterPadding(const FormStyleConfig& value) { m_outerPaddingHasBeenSet = true; m_outerPadding = value; }
    inline void SetOuterPadding(FormStyleConfig&& value) { m_outerPaddingHasBeenSet = true; m_outerPadding = std::move(value); }
    inline FormStyle& WithOuterPadding(const FormStyleConfig& value) { SetOuterPadding(value); return *this;}
    inline FormStyle& WithOuterPadding(FormStyleConfig&& value) { SetOuterPadding(std::move(value)); return *this;}
    ///@}
  private:

    FormStyleConfig m_horizontalGap;
    bool m_horizontalGapHasBeenSet = false;

    FormStyleConfig m_verticalGap;
    bool m_verticalGapHasBeenSet = false;

    FormStyleConfig m_outerPadding;
    bool m_outerPaddingHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
