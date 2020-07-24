/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>The value of a custom document attribute. You can only provide one value for
   * a custom attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/DocumentAttributeValue">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API DocumentAttributeValue
  {
  public:
    DocumentAttributeValue();
    DocumentAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    DocumentAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string, such as "department".</p>
     */
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }

    /**
     * <p>A string, such as "department".</p>
     */
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }

    /**
     * <p>A string, such as "department".</p>
     */
    inline void SetStringValue(const Aws::String& value) { m_stringValueHasBeenSet = true; m_stringValue = value; }

    /**
     * <p>A string, such as "department".</p>
     */
    inline void SetStringValue(Aws::String&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::move(value); }

    /**
     * <p>A string, such as "department".</p>
     */
    inline void SetStringValue(const char* value) { m_stringValueHasBeenSet = true; m_stringValue.assign(value); }

    /**
     * <p>A string, such as "department".</p>
     */
    inline DocumentAttributeValue& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}

    /**
     * <p>A string, such as "department".</p>
     */
    inline DocumentAttributeValue& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}

    /**
     * <p>A string, such as "department".</p>
     */
    inline DocumentAttributeValue& WithStringValue(const char* value) { SetStringValue(value); return *this;}


    /**
     * <p>A list of strings. </p>
     */
    inline const Aws::Vector<Aws::String>& GetStringListValue() const{ return m_stringListValue; }

    /**
     * <p>A list of strings. </p>
     */
    inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }

    /**
     * <p>A list of strings. </p>
     */
    inline void SetStringListValue(const Aws::Vector<Aws::String>& value) { m_stringListValueHasBeenSet = true; m_stringListValue = value; }

    /**
     * <p>A list of strings. </p>
     */
    inline void SetStringListValue(Aws::Vector<Aws::String>&& value) { m_stringListValueHasBeenSet = true; m_stringListValue = std::move(value); }

    /**
     * <p>A list of strings. </p>
     */
    inline DocumentAttributeValue& WithStringListValue(const Aws::Vector<Aws::String>& value) { SetStringListValue(value); return *this;}

    /**
     * <p>A list of strings. </p>
     */
    inline DocumentAttributeValue& WithStringListValue(Aws::Vector<Aws::String>&& value) { SetStringListValue(std::move(value)); return *this;}

    /**
     * <p>A list of strings. </p>
     */
    inline DocumentAttributeValue& AddStringListValue(const Aws::String& value) { m_stringListValueHasBeenSet = true; m_stringListValue.push_back(value); return *this; }

    /**
     * <p>A list of strings. </p>
     */
    inline DocumentAttributeValue& AddStringListValue(Aws::String&& value) { m_stringListValueHasBeenSet = true; m_stringListValue.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings. </p>
     */
    inline DocumentAttributeValue& AddStringListValue(const char* value) { m_stringListValueHasBeenSet = true; m_stringListValue.push_back(value); return *this; }


    /**
     * <p>A long integer value.</p>
     */
    inline long long GetLongValue() const{ return m_longValue; }

    /**
     * <p>A long integer value.</p>
     */
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }

    /**
     * <p>A long integer value.</p>
     */
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }

    /**
     * <p>A long integer value.</p>
     */
    inline DocumentAttributeValue& WithLongValue(long long value) { SetLongValue(value); return *this;}


    /**
     * <p>A date expressed as an ISO 8601 string.</p>
     */
    inline const Aws::Utils::DateTime& GetDateValue() const{ return m_dateValue; }

    /**
     * <p>A date expressed as an ISO 8601 string.</p>
     */
    inline bool DateValueHasBeenSet() const { return m_dateValueHasBeenSet; }

    /**
     * <p>A date expressed as an ISO 8601 string.</p>
     */
    inline void SetDateValue(const Aws::Utils::DateTime& value) { m_dateValueHasBeenSet = true; m_dateValue = value; }

    /**
     * <p>A date expressed as an ISO 8601 string.</p>
     */
    inline void SetDateValue(Aws::Utils::DateTime&& value) { m_dateValueHasBeenSet = true; m_dateValue = std::move(value); }

    /**
     * <p>A date expressed as an ISO 8601 string.</p>
     */
    inline DocumentAttributeValue& WithDateValue(const Aws::Utils::DateTime& value) { SetDateValue(value); return *this;}

    /**
     * <p>A date expressed as an ISO 8601 string.</p>
     */
    inline DocumentAttributeValue& WithDateValue(Aws::Utils::DateTime&& value) { SetDateValue(std::move(value)); return *this;}

  private:

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet;

    Aws::Vector<Aws::String> m_stringListValue;
    bool m_stringListValueHasBeenSet;

    long long m_longValue;
    bool m_longValueHasBeenSet;

    Aws::Utils::DateTime m_dateValue;
    bool m_dateValueHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
