/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Condition">AWS
   * API Reference</a></p>
   */
  class Condition
  {
  public:
    AWS_GUARDDUTY_API Condition() = default;
    AWS_GUARDDUTY_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const { return m_equals; }
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    void SetEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals = std::forward<EqualsT>(value); }
    template<typename EqualsT = Aws::Vector<Aws::String>>
    Condition& WithEquals(EqualsT&& value) { SetEquals(std::forward<EqualsT>(value)); return *this;}
    template<typename EqualsT = Aws::String>
    Condition& AddEquals(EqualsT&& value) { m_equalsHasBeenSet = true; m_equals.emplace_back(std::forward<EqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const { return m_notEquals; }
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }
    template<typename NotEqualsT = Aws::Vector<Aws::String>>
    void SetNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::forward<NotEqualsT>(value); }
    template<typename NotEqualsT = Aws::Vector<Aws::String>>
    Condition& WithNotEquals(NotEqualsT&& value) { SetNotEquals(std::forward<NotEqualsT>(value)); return *this;}
    template<typename NotEqualsT = Aws::String>
    Condition& AddNotEquals(NotEqualsT&& value) { m_notEqualsHasBeenSet = true; m_notEquals.emplace_back(std::forward<NotEqualsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a <i>greater than</i> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline long long GetGreaterThan() const { return m_greaterThan; }
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }
    inline void SetGreaterThan(long long value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }
    inline Condition& WithGreaterThan(long long value) { SetGreaterThan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a <i>greater than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline long long GetGreaterThanOrEqual() const { return m_greaterThanOrEqual; }
    inline bool GreaterThanOrEqualHasBeenSet() const { return m_greaterThanOrEqualHasBeenSet; }
    inline void SetGreaterThanOrEqual(long long value) { m_greaterThanOrEqualHasBeenSet = true; m_greaterThanOrEqual = value; }
    inline Condition& WithGreaterThanOrEqual(long long value) { SetGreaterThanOrEqual(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a <i>less than</i> condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline long long GetLessThan() const { return m_lessThan; }
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }
    inline void SetLessThan(long long value) { m_lessThanHasBeenSet = true; m_lessThan = value; }
    inline Condition& WithLessThan(long long value) { SetLessThan(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a <i>less than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline long long GetLessThanOrEqual() const { return m_lessThanOrEqual; }
    inline bool LessThanOrEqualHasBeenSet() const { return m_lessThanOrEqualHasBeenSet; }
    inline void SetLessThanOrEqual(long long value) { m_lessThanOrEqualHasBeenSet = true; m_lessThanOrEqual = value; }
    inline Condition& WithLessThanOrEqual(long long value) { SetLessThanOrEqual(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    long long m_greaterThan{0};
    bool m_greaterThanHasBeenSet = false;

    long long m_greaterThanOrEqual{0};
    bool m_greaterThanOrEqualHasBeenSet = false;

    long long m_lessThan{0};
    bool m_lessThanHasBeenSet = false;

    long long m_lessThanOrEqual{0};
    bool m_lessThanOrEqualHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
