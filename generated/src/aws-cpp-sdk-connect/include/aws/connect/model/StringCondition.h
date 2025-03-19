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
   * <p>A leaf node condition which can be used to specify a string
   * condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/StringCondition">AWS
   * API Reference</a></p>
   */
  class StringCondition
  {
  public:
    AWS_CONNECT_API StringCondition() = default;
    AWS_CONNECT_API StringCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API StringCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field in the string condition.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    StringCondition& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the string.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    StringCondition& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of comparison to be made when evaluating the string condition.</p>
     */
    inline StringComparisonType GetComparisonType() const { return m_comparisonType; }
    inline bool ComparisonTypeHasBeenSet() const { return m_comparisonTypeHasBeenSet; }
    inline void SetComparisonType(StringComparisonType value) { m_comparisonTypeHasBeenSet = true; m_comparisonType = value; }
    inline StringCondition& WithComparisonType(StringComparisonType value) { SetComparisonType(value); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    StringComparisonType m_comparisonType{StringComparisonType::NOT_SET};
    bool m_comparisonTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
