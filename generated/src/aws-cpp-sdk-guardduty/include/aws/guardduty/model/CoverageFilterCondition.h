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
   * <p>Represents a condition that when matched will be added to the response of the
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageFilterCondition">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCondition
  {
  public:
    AWS_GUARDDUTY_API CoverageFilterCondition();
    AWS_GUARDDUTY_API CoverageFilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageFilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEquals() const{ return m_equals; }

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline void SetEquals(const Aws::Vector<Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline void SetEquals(Aws::Vector<Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& WithEquals(const Aws::Vector<Aws::String>& value) { SetEquals(value); return *this;}

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& WithEquals(Aws::Vector<Aws::String>&& value) { SetEquals(std::move(value)); return *this;}

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& AddEquals(const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& AddEquals(Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents an equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& AddEquals(const char* value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }


    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotEquals() const{ return m_notEquals; }

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline void SetNotEquals(const Aws::Vector<Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline void SetNotEquals(Aws::Vector<Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& WithNotEquals(const Aws::Vector<Aws::String>& value) { SetNotEquals(value); return *this;}

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& WithNotEquals(Aws::Vector<Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& AddNotEquals(const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& AddNotEquals(Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(std::move(value)); return *this; }

    /**
     * <p>Represents a not equal condition that is applied to a single field while
     * retrieving the coverage details.</p>
     */
    inline CoverageFilterCondition& AddNotEquals(const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
