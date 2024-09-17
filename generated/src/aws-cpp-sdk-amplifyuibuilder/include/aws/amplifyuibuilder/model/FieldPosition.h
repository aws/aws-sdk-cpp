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
    AWS_AMPLIFYUIBUILDER_API FieldPosition();
    AWS_AMPLIFYUIBUILDER_API FieldPosition(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FieldPosition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field position is fixed and doesn't change in relation to other
     * fields.</p>
     */
    inline const FixedPosition& GetFixed() const{ return m_fixed; }
    inline bool FixedHasBeenSet() const { return m_fixedHasBeenSet; }
    inline void SetFixed(const FixedPosition& value) { m_fixedHasBeenSet = true; m_fixed = value; }
    inline void SetFixed(FixedPosition&& value) { m_fixedHasBeenSet = true; m_fixed = std::move(value); }
    inline FieldPosition& WithFixed(const FixedPosition& value) { SetFixed(value); return *this;}
    inline FieldPosition& WithFixed(FixedPosition&& value) { SetFixed(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field position is to the right of the field specified by the string.</p>
     */
    inline const Aws::String& GetRightOf() const{ return m_rightOf; }
    inline bool RightOfHasBeenSet() const { return m_rightOfHasBeenSet; }
    inline void SetRightOf(const Aws::String& value) { m_rightOfHasBeenSet = true; m_rightOf = value; }
    inline void SetRightOf(Aws::String&& value) { m_rightOfHasBeenSet = true; m_rightOf = std::move(value); }
    inline void SetRightOf(const char* value) { m_rightOfHasBeenSet = true; m_rightOf.assign(value); }
    inline FieldPosition& WithRightOf(const Aws::String& value) { SetRightOf(value); return *this;}
    inline FieldPosition& WithRightOf(Aws::String&& value) { SetRightOf(std::move(value)); return *this;}
    inline FieldPosition& WithRightOf(const char* value) { SetRightOf(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field position is below the field specified by the string.</p>
     */
    inline const Aws::String& GetBelow() const{ return m_below; }
    inline bool BelowHasBeenSet() const { return m_belowHasBeenSet; }
    inline void SetBelow(const Aws::String& value) { m_belowHasBeenSet = true; m_below = value; }
    inline void SetBelow(Aws::String&& value) { m_belowHasBeenSet = true; m_below = std::move(value); }
    inline void SetBelow(const char* value) { m_belowHasBeenSet = true; m_below.assign(value); }
    inline FieldPosition& WithBelow(const Aws::String& value) { SetBelow(value); return *this;}
    inline FieldPosition& WithBelow(Aws::String&& value) { SetBelow(std::move(value)); return *this;}
    inline FieldPosition& WithBelow(const char* value) { SetBelow(value); return *this;}
    ///@}
  private:

    FixedPosition m_fixed;
    bool m_fixedHasBeenSet = false;

    Aws::String m_rightOf;
    bool m_rightOfHasBeenSet = false;

    Aws::String m_below;
    bool m_belowHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
