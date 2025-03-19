/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FilterCondition">AWS
   * API Reference</a></p>
   */
  class FilterCondition
  {
  public:
    AWS_GUARDDUTY_API FilterCondition() = default;
    AWS_GUARDDUTY_API FilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for scan entries.</p>
     */
    inline const Aws::String& GetEqualsValue() const { return m_equalsValue; }
    inline bool EqualsValueHasBeenSet() const { return m_equalsValueHasBeenSet; }
    template<typename EqualsValueT = Aws::String>
    void SetEqualsValue(EqualsValueT&& value) { m_equalsValueHasBeenSet = true; m_equalsValue = std::forward<EqualsValueT>(value); }
    template<typename EqualsValueT = Aws::String>
    FilterCondition& WithEqualsValue(EqualsValueT&& value) { SetEqualsValue(std::forward<EqualsValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a <i>greater than</i> condition to be applied to a single field
     * when querying for scan entries.</p>
     */
    inline long long GetGreaterThan() const { return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    inline void SetGreaterThan(long long value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }
    inline FilterCondition& WithGreaterThan(long long value) { SetGreaterThan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a <i>less than</i> condition to be applied to a single field when
     * querying for scan entries.</p>
     */
    inline long long GetLessThan() const { return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    inline void SetLessThan(long long value) { m_lessThanHasBeenSet = true; m_lessThan = value; }
    inline FilterCondition& WithLessThan(long long value) { SetLessThan(value); return *this;}
    ///@}
  private:

    Aws::String m_equalsValue;
    bool m_equalsValueHasBeenSet = false;

    long long m_greaterThan{0};
    bool m_greaterThanHasBeenSet = false;

    long long m_lessThan{0};
    bool m_lessThanHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
