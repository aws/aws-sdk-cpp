/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/AllRowsWildcard.h>
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
   * <p>A PartiQL predicate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RowFilter">AWS
   * API Reference</a></p>
   */
  class RowFilter
  {
  public:
    AWS_LAKEFORMATION_API RowFilter() = default;
    AWS_LAKEFORMATION_API RowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API RowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A filter expression.</p>
     */
    inline const Aws::String& GetFilterExpression() const { return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    template<typename FilterExpressionT = Aws::String>
    void SetFilterExpression(FilterExpressionT&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::forward<FilterExpressionT>(value); }
    template<typename FilterExpressionT = Aws::String>
    RowFilter& WithFilterExpression(FilterExpressionT&& value) { SetFilterExpression(std::forward<FilterExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A wildcard for all rows.</p>
     */
    inline const AllRowsWildcard& GetAllRowsWildcard() const { return m_allRowsWildcard; }
    inline bool AllRowsWildcardHasBeenSet() const { return m_allRowsWildcardHasBeenSet; }
    template<typename AllRowsWildcardT = AllRowsWildcard>
    void SetAllRowsWildcard(AllRowsWildcardT&& value) { m_allRowsWildcardHasBeenSet = true; m_allRowsWildcard = std::forward<AllRowsWildcardT>(value); }
    template<typename AllRowsWildcardT = AllRowsWildcard>
    RowFilter& WithAllRowsWildcard(AllRowsWildcardT&& value) { SetAllRowsWildcard(std::forward<AllRowsWildcardT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_filterExpression;
    bool m_filterExpressionHasBeenSet = false;

    AllRowsWildcard m_allRowsWildcard;
    bool m_allRowsWildcardHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
