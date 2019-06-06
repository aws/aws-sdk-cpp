/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  class AWS_GUARDDUTY_API Condition
  {
  public:
    Condition();
    Condition(Aws::Utils::Json::JsonView jsonValue);
    Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::Vector<Aws::String>& GetEquals() const{ return m_equals; }

    
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    
    inline void SetEquals(const Aws::Vector<Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }

    
    inline void SetEquals(Aws::Vector<Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    
    inline Condition& WithEquals(const Aws::Vector<Aws::String>& value) { SetEquals(value); return *this;}

    
    inline Condition& WithEquals(Aws::Vector<Aws::String>&& value) { SetEquals(std::move(value)); return *this;}

    
    inline Condition& AddEquals(const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }

    
    inline Condition& AddEquals(Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.push_back(std::move(value)); return *this; }

    
    inline Condition& AddEquals(const char* value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNotEquals() const{ return m_notEquals; }

    
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }

    
    inline void SetNotEquals(const Aws::Vector<Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }

    
    inline void SetNotEquals(Aws::Vector<Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }

    
    inline Condition& WithNotEquals(const Aws::Vector<Aws::String>& value) { SetNotEquals(value); return *this;}

    
    inline Condition& WithNotEquals(Aws::Vector<Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}

    
    inline Condition& AddNotEquals(const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }

    
    inline Condition& AddNotEquals(Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(std::move(value)); return *this; }

    
    inline Condition& AddNotEquals(const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }


    /**
     * <p>Represents a greater than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline long long GetGreaterThan() const{ return m_greaterThan; }

    /**
     * <p>Represents a greater than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline bool GreaterThanHasBeenSet() const { return m_greaterThanHasBeenSet; }

    /**
     * <p>Represents a greater than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline void SetGreaterThan(long long value) { m_greaterThanHasBeenSet = true; m_greaterThan = value; }

    /**
     * <p>Represents a greater than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline Condition& WithGreaterThan(long long value) { SetGreaterThan(value); return *this;}


    /**
     * <p>Represents a greater than equal condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline long long GetGreaterThanOrEqual() const{ return m_greaterThanOrEqual; }

    /**
     * <p>Represents a greater than equal condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline bool GreaterThanOrEqualHasBeenSet() const { return m_greaterThanOrEqualHasBeenSet; }

    /**
     * <p>Represents a greater than equal condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline void SetGreaterThanOrEqual(long long value) { m_greaterThanOrEqualHasBeenSet = true; m_greaterThanOrEqual = value; }

    /**
     * <p>Represents a greater than equal condition to be applied to a single field
     * when querying for findings.</p>
     */
    inline Condition& WithGreaterThanOrEqual(long long value) { SetGreaterThanOrEqual(value); return *this;}


    /**
     * <p>Represents a less than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline long long GetLessThan() const{ return m_lessThan; }

    /**
     * <p>Represents a less than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline bool LessThanHasBeenSet() const { return m_lessThanHasBeenSet; }

    /**
     * <p>Represents a less than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline void SetLessThan(long long value) { m_lessThanHasBeenSet = true; m_lessThan = value; }

    /**
     * <p>Represents a less than condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline Condition& WithLessThan(long long value) { SetLessThan(value); return *this;}


    /**
     * <p>Represents a less than equal condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline long long GetLessThanOrEqual() const{ return m_lessThanOrEqual; }

    /**
     * <p>Represents a less than equal condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline bool LessThanOrEqualHasBeenSet() const { return m_lessThanOrEqualHasBeenSet; }

    /**
     * <p>Represents a less than equal condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline void SetLessThanOrEqual(long long value) { m_lessThanOrEqualHasBeenSet = true; m_lessThanOrEqual = value; }

    /**
     * <p>Represents a less than equal condition to be applied to a single field when
     * querying for findings.</p>
     */
    inline Condition& WithLessThanOrEqual(long long value) { SetLessThanOrEqual(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet;

    long long m_greaterThan;
    bool m_greaterThanHasBeenSet;

    long long m_greaterThanOrEqual;
    bool m_greaterThanOrEqualHasBeenSet;

    long long m_lessThan;
    bool m_lessThanHasBeenSet;

    long long m_lessThanOrEqual;
    bool m_lessThanOrEqualHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
