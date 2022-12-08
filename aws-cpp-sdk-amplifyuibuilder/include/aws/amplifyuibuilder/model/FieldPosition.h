/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FixedPosition.h>
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
    AWS_AMPLIFYUIBUILDER_API FieldPosition();
    AWS_AMPLIFYUIBUILDER_API FieldPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline const Aws::String& GetBelow() const{ return m_below; }

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline bool BelowHasBeenSet() const { return m_belowHasBeenSet; }

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline void SetBelow(const Aws::String& value) { m_belowHasBeenSet = true; m_below = value; }

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline void SetBelow(Aws::String&& value) { m_belowHasBeenSet = true; m_below = std::move(value); }

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline void SetBelow(const char* value) { m_belowHasBeenSet = true; m_below.assign(value); }

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline FieldPosition& WithBelow(const Aws::String& value) { SetBelow(value); return *this;}

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline FieldPosition& WithBelow(Aws::String&& value) { SetBelow(std::move(value)); return *this;}

    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline FieldPosition& WithBelow(const char* value) { SetBelow(value); return *this;}


    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline const FixedPosition& GetFixed() const{ return m_fixed; }

    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline bool FixedHasBeenSet() const { return m_fixedHasBeenSet; }

    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline void SetFixed(const FixedPosition& value) { m_fixedHasBeenSet = true; m_fixed = value; }

    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline void SetFixed(FixedPosition&& value) { m_fixedHasBeenSet = true; m_fixed = std::move(value); }

    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline FieldPosition& WithFixed(const FixedPosition& value) { SetFixed(value); return *this;}

    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline FieldPosition& WithFixed(FixedPosition&& value) { SetFixed(std::move(value)); return *this;}


    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline const Aws::String& GetRightOf() const{ return m_rightOf; }

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline bool RightOfHasBeenSet() const { return m_rightOfHasBeenSet; }

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline void SetRightOf(const Aws::String& value) { m_rightOfHasBeenSet = true; m_rightOf = value; }

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline void SetRightOf(Aws::String&& value) { m_rightOfHasBeenSet = true; m_rightOf = std::move(value); }

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline void SetRightOf(const char* value) { m_rightOfHasBeenSet = true; m_rightOf.assign(value); }

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline FieldPosition& WithRightOf(const Aws::String& value) { SetRightOf(value); return *this;}

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline FieldPosition& WithRightOf(Aws::String&& value) { SetRightOf(std::move(value)); return *this;}

    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline FieldPosition& WithRightOf(const char* value) { SetRightOf(value); return *this;}

  private:

    Aws::String m_below;
    bool m_belowHasBeenSet = false;

    FixedPosition m_fixed;
    bool m_fixedHasBeenSet = false;

    Aws::String m_rightOf;
    bool m_rightOfHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
