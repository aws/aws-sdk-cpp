/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FixedPosition.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the field position.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FieldPosition">AWS
   * API Reference</a></p>
   */
  class FieldPosition
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FieldPosition() = default;
    AWS_AMPLIFYUIBUILDER_API FieldPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline FixedPosition GetFixed() const { return m_fixed; }
    inline bool FixedHasBeenSet() const { return m_fixedHasBeenSet; }
    inline void SetFixed(FixedPosition value) { m_fixedHasBeenSet = true; m_fixed = value; }
    inline FieldPosition& WithFixed(FixedPosition value) { SetFixed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline const Aws::String& GetRightOf() const { return m_rightOf; }
    inline bool RightOfHasBeenSet() const { return m_rightOfHasBeenSet; }
    template<typename RightOfT = Aws::String>
    void SetRightOf(RightOfT&& value) { m_rightOfHasBeenSet = true; m_rightOf = std::forward<RightOfT>(value); }
    template<typename RightOfT = Aws::String>
    FieldPosition& WithRightOf(RightOfT&& value) { SetRightOf(std::forward<RightOfT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline const Aws::String& GetBelow() const { return m_below; }
    inline bool BelowHasBeenSet() const { return m_belowHasBeenSet; }
    template<typename BelowT = Aws::String>
    void SetBelow(BelowT&& value) { m_belowHasBeenSet = true; m_below = std::forward<BelowT>(value); }
    template<typename BelowT = Aws::String>
    FieldPosition& WithBelow(BelowT&& value) { SetBelow(std::forward<BelowT>(value)); return *this;}
    ///@}
  private:

    FixedPosition m_fixed{FixedPosition::NOT_SET};
    bool m_fixedHasBeenSet = false;

    Aws::String m_rightOf;
    bool m_rightOfHasBeenSet = false;

    Aws::String m_below;
    bool m_belowHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
