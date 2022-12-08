/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/StringComparisonType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A leaf node condition which can be used to specify a string condition. </p>
   *  <p>The currently supported value for <code>FieldName</code>:
   * <code>name</code> </p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StringCondition">AWS
   * API Reference</a></p>
   */
  class StringCondition
  {
  public:
    AWS_CONNECT_API StringCondition();
    AWS_CONNECT_API StringCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API StringCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline StringCondition& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline StringCondition& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline StringCondition& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The value of the string.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the string.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the string.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the string.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the string.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the string.</p>
     */
    inline StringCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the string.</p>
     */
    inline StringCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the string.</p>
     */
    inline StringCondition& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline const StringComparisonType& GetComparisonType() const{ return m_comparisonType; }

    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }

    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline void SetComparisonType(const StringComparisonType& value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = value; }

    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline void SetComparisonType(StringComparisonType&& value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = std::move(value); }

    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline StringCondition& WithComparisonType(const StringComparisonType& value) { SetComparisonType(value); return *this;}

    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline StringCondition& WithComparisonType(StringComparisonType&& value) { SetComparisonType(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    StringComparisonType m_comparisonType;
    bool m_comparisonTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
