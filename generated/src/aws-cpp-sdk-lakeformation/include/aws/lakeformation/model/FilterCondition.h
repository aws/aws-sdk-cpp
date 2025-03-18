/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/FieldNameString.h>
#include <aws/lakeformation/model/ComparisonOperator.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>This structure describes the filtering of columns in a table based on a
   * filter condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/FilterCondition">AWS
   * API Reference</a></p>
   */
  class FilterCondition
  {
  public:
    AWS_LAKEFORMATION_API FilterCondition() = default;
    AWS_LAKEFORMATION_API FilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline FieldNameString GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(FieldNameString value) { m_fieldHasBeenSet = true; m_field = value; }
    inline FilterCondition& WithField(FieldNameString value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline ComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(ComparisonOperator value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline FilterCondition& WithComparisonOperator(ComparisonOperator value) { SetComparisonOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValueList() const { return m_stringValueList; }
    inline bool StringValueListHasBeenSet() const { return m_stringValueListHasBeenSet; }
    template<typename StringValueListT = Aws::Vector<Aws::String>>
    void SetStringValueList(StringValueListT&& value) { m_stringValueListHasBeenSet = true; m_stringValueList = std::forward<StringValueListT>(value); }
    template<typename StringValueListT = Aws::Vector<Aws::String>>
    FilterCondition& WithStringValueList(StringValueListT&& value) { SetStringValueList(std::forward<StringValueListT>(value)); return *this;}
    template<typename StringValueListT = Aws::String>
    FilterCondition& AddStringValueList(StringValueListT&& value) { m_stringValueListHasBeenSet = true; m_stringValueList.emplace_back(std::forward<StringValueListT>(value)); return *this; }
    ///@}
  private:

    FieldNameString m_field{FieldNameString::NOT_SET};
    bool m_fieldHasBeenSet = false;

    ComparisonOperator m_comparisonOperator{ComparisonOperator::NOT_SET};
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValueList;
    bool m_stringValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
