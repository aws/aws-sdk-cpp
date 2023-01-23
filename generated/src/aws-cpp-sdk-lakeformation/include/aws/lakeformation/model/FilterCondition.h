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
    AWS_LAKEFORMATION_API FilterCondition();
    AWS_LAKEFORMATION_API FilterCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API FilterCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline const FieldNameString& GetField() const{ return m_field; }

    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline void SetField(const FieldNameString& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline void SetField(FieldNameString&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline FilterCondition& WithField(const FieldNameString& value) { SetField(value); return *this;}

    /**
     * <p>The field to filter in the filter condition.</p>
     */
    inline FilterCondition& WithField(FieldNameString&& value) { SetField(std::move(value)); return *this;}


    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }

    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }

    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }

    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }

    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline FilterCondition& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}

    /**
     * <p>The comparison operator used in the filter condition.</p>
     */
    inline FilterCondition& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}


    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStringValueList() const{ return m_stringValueList; }

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline bool StringValueListHasBeenSet() const { return m_stringValueListHasBeenSet; }

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline void SetStringValueList(const Aws::Vector<Aws::String>& value) { m_stringValueListHasBeenSet = true; m_stringValueList = value; }

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline void SetStringValueList(Aws::Vector<Aws::String>&& value) { m_stringValueListHasBeenSet = true; m_stringValueList = std::move(value); }

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline FilterCondition& WithStringValueList(const Aws::Vector<Aws::String>& value) { SetStringValueList(value); return *this;}

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline FilterCondition& WithStringValueList(Aws::Vector<Aws::String>&& value) { SetStringValueList(std::move(value)); return *this;}

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline FilterCondition& AddStringValueList(const Aws::String& value) { m_stringValueListHasBeenSet = true; m_stringValueList.push_back(value); return *this; }

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline FilterCondition& AddStringValueList(Aws::String&& value) { m_stringValueListHasBeenSet = true; m_stringValueList.push_back(std::move(value)); return *this; }

    /**
     * <p>A string with values used in evaluating the filter condition.</p>
     */
    inline FilterCondition& AddStringValueList(const char* value) { m_stringValueListHasBeenSet = true; m_stringValueList.push_back(value); return *this; }

  private:

    FieldNameString m_field;
    bool m_fieldHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;

    Aws::Vector<Aws::String> m_stringValueList;
    bool m_stringValueListHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
