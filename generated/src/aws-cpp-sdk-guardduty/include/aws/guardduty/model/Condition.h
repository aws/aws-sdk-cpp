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
    AWS_GUARDDUTY_API Condition();
    AWS_GUARDDUTY_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const{ return m_equals; }

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline void SetEquals(const Aws::Vector<Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline void SetEquals(Aws::Vector<Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& WithEquals(const Aws::Vector<Aws::String>& value) { SetEquals(value); return *this;}

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& WithEquals(Aws::Vector<Aws::String>&& value) { SetEquals(std::move(value)); return *this;}

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& AddEquals(const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& AddEquals(Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents an <i>equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& AddEquals(const char* value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }


    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const{ return m_notEquals; }

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline void SetNotEquals(const Aws::Vector<Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline void SetNotEquals(Aws::Vector<Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& WithNotEquals(const Aws::Vector<Aws::String>& value) { SetNotEquals(value); return *this;}

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& WithNotEquals(Aws::Vector<Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& AddNotEquals(const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& AddNotEquals(Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents a <i>not equal</i> <b/> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& AddNotEquals(const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }


    /**
     * <p>Represents a <i>greater than</i> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline long long GetGreaterThan() const{ return m_greaterThan; }

    /**
     * <p>Represents a <i>greater than</i> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }

    /**
     * <p>Represents a <i>greater than</i> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline void SetGreaterThan(long long value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }

    /**
     * <p>Represents a <i>greater than</i> condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& WithGreaterThan(long long value) { SetGreaterThan(value); return *this;}


    /**
     * <p>Represents a <i>greater than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline long long GetGreaterThanOrEqual() const{ return m_greaterThanOrEqual; }

    /**
     * <p>Represents a <i>greater than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline bool GreaterThanOrEqualHasBeenSet() const { return m_greaterThanOrEqualHasBeenSet; }

    /**
     * <p>Represents a <i>greater than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline void SetGreaterThanOrEqual(long long value) { m_greaterThanOrEqualHasBeenSet = true; m_greaterThanOrEqual = value; }

    /**
     * <p>Represents a <i>greater than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline Condition& WithGreaterThanOrEqual(long long value) { SetGreaterThanOrEqual(value); return *this;}


    /**
     * <p>Represents a <i>less than</i> condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline long long GetLessThan() const{ return m_lessThan; }

    /**
     * <p>Represents a <i>less than</i> condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }

    /**
     * <p>Represents a <i>less than</i> condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline void SetLessThan(long long value) { m_lessThanHasBeenSet = true; m_lessThan = value; }

    /**
     * <p>Represents a <i>less than</i> condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline Condition& WithLessThan(long long value) { SetLessThan(value); return *this;}


    /**
     * <p>Represents a <i>less than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline long long GetLessThanOrEqual() const{ return m_lessThanOrEqual; }

    /**
     * <p>Represents a <i>less than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline bool LessThanOrEqualHasBeenSet() const { return m_lessThanOrEqualHasBeenSet; }

    /**
     * <p>Represents a <i>less than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline void SetLessThanOrEqual(long long value) { m_lessThanOrEqualHasBeenSet = true; m_lessThanOrEqual = value; }

    /**
     * <p>Represents a <i>less than or equal</i> condition to be applied to a single
     * field when querying for findings.</p>
     */
    inline Condition& WithLessThanOrEqual(long long value) { SetLessThanOrEqual(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;

    long long m_greaterThan;
    bool m_greaterThanHasBeenSet = false;

    long long m_greaterThanOrEqual;
    bool m_greaterThanOrEqualHasBeenSet = false;

    long long m_lessThan;
    bool m_lessThanHasBeenSet = false;

    long long m_lessThanOrEqual;
    bool m_lessThanOrEqualHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
