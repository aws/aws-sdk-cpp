/**
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
    AWS_AMPLIFYUIBUILDER_API FormStyle() = default;
    AWS_AMPLIFYUIBUILDER_API FormStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The spacing for the horizontal gap.</p>
     */
    inline const FormStyleConfig& GetHorizontalGap() const { return m_horizontalGap; }
    inline bool HorizontalGapHasBeenSet() const { return m_horizontalGapHasBeenSet; }
    template<typename HorizontalGapT = FormStyleConfig>
    void SetHorizontalGap(HorizontalGapT&& value) { m_horizontalGapHasBeenSet = true; m_horizontalGap = std::forward<HorizontalGapT>(value); }
    template<typename HorizontalGapT = FormStyleConfig>
    FormStyle& WithHorizontalGap(HorizontalGapT&& value) { SetHorizontalGap(std::forward<HorizontalGapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spacing for the vertical gap.</p>
     */
    inline const FormStyleConfig& GetVerticalGap() const { return m_verticalGap; }
    inline bool VerticalGapHasBeenSet() const { return m_verticalGapHasBeenSet; }
    template<typename VerticalGapT = FormStyleConfig>
    void SetVerticalGap(VerticalGapT&& value) { m_verticalGapHasBeenSet = true; m_verticalGap = std::forward<VerticalGapT>(value); }
    template<typename VerticalGapT = FormStyleConfig>
    FormStyle& WithVerticalGap(VerticalGapT&& value) { SetVerticalGap(std::forward<VerticalGapT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the outer padding for the form.</p>
     */
    inline const FormStyleConfig& GetOuterPadding() const { return m_outerPadding; }
    inline bool OuterPaddingHasBeenSet() const { return m_outerPaddingHasBeenSet; }
    template<typename OuterPaddingT = FormStyleConfig>
    void SetOuterPadding(OuterPaddingT&& value) { m_outerPaddingHasBeenSet = true; m_outerPadding = std::forward<OuterPaddingT>(value); }
    template<typename OuterPaddingT = FormStyleConfig>
    FormStyle& WithOuterPadding(OuterPaddingT&& value) { SetOuterPadding(std::forward<OuterPaddingT>(value)); return *this;}
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
