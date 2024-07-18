/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/NumberComparisonType.h>
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
   * <p>A leaf node condition which can be used to specify a numeric condition.</p>
   *  <p>The currently supported value for <code>FieldName</code> is
   * <code>limit</code>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/NumberCondition">AWS
   * API Reference</a></p>
   */
  class NumberCondition
  {
  public:
    AWS_CONNECT_API NumberCondition();
    AWS_CONNECT_API NumberCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API NumberCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in the number condition.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline NumberCondition& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline NumberCondition& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline NumberCondition& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minValue to be used while evaluating the number condition.</p>
     */
    inline int GetMinValue() const{ return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline NumberCondition& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maxValue to be used while evaluating the number condition.</p>
     */
    inline int GetMaxValue() const{ return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline NumberCondition& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of comparison to be made when evaluating the number condition.</p>
     */
    inline const NumberComparisonType& GetComparisonType() const{ return m_comparisonType; }
    inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
    inline void SetComparisonType(const NumberComparisonType& value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = value; }
    inline void SetComparisonType(NumberComparisonType&& value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = std::move(value); }
    inline NumberCondition& WithComparisonType(const NumberComparisonType& value) { SetComparisonType(value); return *this;}
    inline NumberCondition& WithComparisonType(NumberComparisonType&& value) { SetComparisonType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    int m_minValue;
    bool m_minValueHasBeenSet = false;

    int m_maxValue;
    bool m_maxValueHasBeenSet = false;

    NumberComparisonType m_comparisonType;
    bool m_comparisonTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
