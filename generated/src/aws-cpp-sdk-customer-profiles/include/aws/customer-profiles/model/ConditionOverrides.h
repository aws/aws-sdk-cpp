/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/RangeOverride.h>
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
   * <p>An object to override the original condition block of a calculated
   * attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ConditionOverrides">AWS
   * API Reference</a></p>
   */
  class ConditionOverrides
  {
  public:
    AWS_CUSTOMERPROFILES_API ConditionOverrides();
    AWS_CUSTOMERPROFILES_API ConditionOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ConditionOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The relative time period over which data is included in the aggregation for
     * this override.</p>
     */
    inline const RangeOverride& GetRange() const{ return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(const RangeOverride& value) { m_rangeHasBeenSet = true; m_range = value; }
    inline void SetRange(RangeOverride&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }
    inline ConditionOverrides& WithRange(const RangeOverride& value) { SetRange(value); return *this;}
    inline ConditionOverrides& WithRange(RangeOverride&& value) { SetRange(std::move(value)); return *this;}
    ///@}
  private:

    RangeOverride m_range;
    bool m_rangeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
