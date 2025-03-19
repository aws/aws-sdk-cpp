/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RangeUnit.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Overrides the original range on a calculated attribute
   * definition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/RangeOverride">AWS
   * API Reference</a></p>
   */
  class RangeOverride
  {
  public:
    AWS_CUSTOMERPROFILES_API RangeOverride() = default;
    AWS_CUSTOMERPROFILES_API RangeOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API RangeOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of when to include objects.</p>
     */
    inline int GetStart() const { return m_start; }
    inline bool StartHasBeenSet() const { return m_startHasBeenSet; }
    inline void SetStart(int value) { m_startHasBeenSet = true; m_start = value; }
    inline RangeOverride& WithStart(int value) { SetStart(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of when to include objects.</p>
     */
    inline int GetEnd() const { return m_end; }
    inline bool EndHasBeenSet() const { return m_endHasBeenSet; }
    inline void SetEnd(int value) { m_endHasBeenSet = true; m_end = value; }
    inline RangeOverride& WithEnd(int value) { SetEnd(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for start and end.</p>
     */
    inline RangeUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(RangeUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline RangeOverride& WithUnit(RangeUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    int m_start{0};
    bool m_startHasBeenSet = false;

    int m_end{0};
    bool m_endHasBeenSet = false;

    RangeUnit m_unit{RangeUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
