/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CloudTrail
{
namespace Model
{

  class AWS_CLOUDTRAIL_API AdvancedFieldSelector
  {
  public:
    AdvancedFieldSelector();
    AdvancedFieldSelector(Aws::Utils::Json::JsonView jsonValue);
    AdvancedFieldSelector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetField() const{ return m_field; }

    
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    
    inline AdvancedFieldSelector& WithField(const Aws::String& value) { SetField(value); return *this;}

    
    inline AdvancedFieldSelector& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& WithField(const char* value) { SetField(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetEquals() const{ return m_equals; }

    
    inline bool EqualsHasBeenSet() const { return m_equalsHasBeenSet; }

    
    inline void SetEquals(const Aws::Vector<Aws::String>& value) { m_equalsHasBeenSet = true; m_equals = value; }

    
    inline void SetEquals(Aws::Vector<Aws::String>&& value) { m_equalsHasBeenSet = true; m_equals = std::move(value); }

    
    inline AdvancedFieldSelector& WithEquals(const Aws::Vector<Aws::String>& value) { SetEquals(value); return *this;}

    
    inline AdvancedFieldSelector& WithEquals(Aws::Vector<Aws::String>&& value) { SetEquals(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& AddEquals(const Aws::String& value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }

    
    inline AdvancedFieldSelector& AddEquals(Aws::String&& value) { m_equalsHasBeenSet = true; m_equals.push_back(std::move(value)); return *this; }

    
    inline AdvancedFieldSelector& AddEquals(const char* value) { m_equalsHasBeenSet = true; m_equals.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetStartsWith() const{ return m_startsWith; }

    
    inline bool StartsWithHasBeenSet() const { return m_startsWithHasBeenSet; }

    
    inline void SetStartsWith(const Aws::Vector<Aws::String>& value) { m_startsWithHasBeenSet = true; m_startsWith = value; }

    
    inline void SetStartsWith(Aws::Vector<Aws::String>&& value) { m_startsWithHasBeenSet = true; m_startsWith = std::move(value); }

    
    inline AdvancedFieldSelector& WithStartsWith(const Aws::Vector<Aws::String>& value) { SetStartsWith(value); return *this;}

    
    inline AdvancedFieldSelector& WithStartsWith(Aws::Vector<Aws::String>&& value) { SetStartsWith(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& AddStartsWith(const Aws::String& value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(value); return *this; }

    
    inline AdvancedFieldSelector& AddStartsWith(Aws::String&& value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(std::move(value)); return *this; }

    
    inline AdvancedFieldSelector& AddStartsWith(const char* value) { m_startsWithHasBeenSet = true; m_startsWith.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetEndsWith() const{ return m_endsWith; }

    
    inline bool EndsWithHasBeenSet() const { return m_endsWithHasBeenSet; }

    
    inline void SetEndsWith(const Aws::Vector<Aws::String>& value) { m_endsWithHasBeenSet = true; m_endsWith = value; }

    
    inline void SetEndsWith(Aws::Vector<Aws::String>&& value) { m_endsWithHasBeenSet = true; m_endsWith = std::move(value); }

    
    inline AdvancedFieldSelector& WithEndsWith(const Aws::Vector<Aws::String>& value) { SetEndsWith(value); return *this;}

    
    inline AdvancedFieldSelector& WithEndsWith(Aws::Vector<Aws::String>&& value) { SetEndsWith(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& AddEndsWith(const Aws::String& value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(value); return *this; }

    
    inline AdvancedFieldSelector& AddEndsWith(Aws::String&& value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(std::move(value)); return *this; }

    
    inline AdvancedFieldSelector& AddEndsWith(const char* value) { m_endsWithHasBeenSet = true; m_endsWith.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNotEquals() const{ return m_notEquals; }

    
    inline bool NotEqualsHasBeenSet() const { return m_notEqualsHasBeenSet; }

    
    inline void SetNotEquals(const Aws::Vector<Aws::String>& value) { m_notEqualsHasBeenSet = true; m_notEquals = value; }

    
    inline void SetNotEquals(Aws::Vector<Aws::String>&& value) { m_notEqualsHasBeenSet = true; m_notEquals = std::move(value); }

    
    inline AdvancedFieldSelector& WithNotEquals(const Aws::Vector<Aws::String>& value) { SetNotEquals(value); return *this;}

    
    inline AdvancedFieldSelector& WithNotEquals(Aws::Vector<Aws::String>&& value) { SetNotEquals(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& AddNotEquals(const Aws::String& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }

    
    inline AdvancedFieldSelector& AddNotEquals(Aws::String&& value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(std::move(value)); return *this; }

    
    inline AdvancedFieldSelector& AddNotEquals(const char* value) { m_notEqualsHasBeenSet = true; m_notEquals.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNotStartsWith() const{ return m_notStartsWith; }

    
    inline bool NotStartsWithHasBeenSet() const { return m_notStartsWithHasBeenSet; }

    
    inline void SetNotStartsWith(const Aws::Vector<Aws::String>& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = value; }

    
    inline void SetNotStartsWith(Aws::Vector<Aws::String>&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith = std::move(value); }

    
    inline AdvancedFieldSelector& WithNotStartsWith(const Aws::Vector<Aws::String>& value) { SetNotStartsWith(value); return *this;}

    
    inline AdvancedFieldSelector& WithNotStartsWith(Aws::Vector<Aws::String>&& value) { SetNotStartsWith(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& AddNotStartsWith(const Aws::String& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(value); return *this; }

    
    inline AdvancedFieldSelector& AddNotStartsWith(Aws::String&& value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(std::move(value)); return *this; }

    
    inline AdvancedFieldSelector& AddNotStartsWith(const char* value) { m_notStartsWithHasBeenSet = true; m_notStartsWith.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNotEndsWith() const{ return m_notEndsWith; }

    
    inline bool NotEndsWithHasBeenSet() const { return m_notEndsWithHasBeenSet; }

    
    inline void SetNotEndsWith(const Aws::Vector<Aws::String>& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = value; }

    
    inline void SetNotEndsWith(Aws::Vector<Aws::String>&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith = std::move(value); }

    
    inline AdvancedFieldSelector& WithNotEndsWith(const Aws::Vector<Aws::String>& value) { SetNotEndsWith(value); return *this;}

    
    inline AdvancedFieldSelector& WithNotEndsWith(Aws::Vector<Aws::String>&& value) { SetNotEndsWith(std::move(value)); return *this;}

    
    inline AdvancedFieldSelector& AddNotEndsWith(const Aws::String& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(value); return *this; }

    
    inline AdvancedFieldSelector& AddNotEndsWith(Aws::String&& value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(std::move(value)); return *this; }

    
    inline AdvancedFieldSelector& AddNotEndsWith(const char* value) { m_notEndsWithHasBeenSet = true; m_notEndsWith.push_back(value); return *this; }

  private:

    Aws::String m_field;
    bool m_fieldHasBeenSet;

    Aws::Vector<Aws::String> m_equals;
    bool m_equalsHasBeenSet;

    Aws::Vector<Aws::String> m_startsWith;
    bool m_startsWithHasBeenSet;

    Aws::Vector<Aws::String> m_endsWith;
    bool m_endsWithHasBeenSet;

    Aws::Vector<Aws::String> m_notEquals;
    bool m_notEqualsHasBeenSet;

    Aws::Vector<Aws::String> m_notStartsWith;
    bool m_notStartsWithHasBeenSet;

    Aws::Vector<Aws::String> m_notEndsWith;
    bool m_notEndsWithHasBeenSet;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
