/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DateComparisonType.h>
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
   * <p>An object to specify the hours of operation override date
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DateCondition">AWS
   * API Reference</a></p>
   */
  class DateCondition
  {
  public:
    AWS_CONNECT_API DateCondition();
    AWS_CONNECT_API DateCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API DateCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to specify the hours of operation override date field.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline DateCondition& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline DateCondition& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline DateCondition& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to specify the hours of operation override date value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline DateCondition& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline DateCondition& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline DateCondition& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object to specify the hours of operation override date condition
     * <code>comparisonType</code>.</p>
     */
    inline const DateComparisonType& GetComparisonType() const{ return m_comparisonType; }
    inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
    inline void SetComparisonType(const DateComparisonType& value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = value; }
    inline void SetComparisonType(DateComparisonType&& value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = std::move(value); }
    inline DateCondition& WithComparisonType(const DateComparisonType& value) { SetComparisonType(value); return *this;}
    inline DateCondition& WithComparisonType(DateComparisonType&& value) { SetComparisonType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    DateComparisonType m_comparisonType;
    bool m_comparisonTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
