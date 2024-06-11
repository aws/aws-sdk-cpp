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
    AWS_LAKEFORMATION_API RowFilter();
    AWS_LAKEFORMATION_API RowFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API RowFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A filter expression.</p>
     */
    inline const Aws::String& GetFilterExpression() const{ return m_filterExpression; }
    inline bool FilterExpressionHasBeenSet() const { return m_filterExpressionHasBeenSet; }
    inline void SetFilterExpression(const Aws::String& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = value; }
    inline void SetFilterExpression(Aws::String&& value) { m_filterExpressionHasBeenSet = true; m_filterExpression = std::move(value); }
    inline void SetFilterExpression(const char* value) { m_filterExpressionHasBeenSet = true; m_filterExpression.assign(value); }
    inline RowFilter& WithFilterExpression(const Aws::String& value) { SetFilterExpression(value); return *this;}
    inline RowFilter& WithFilterExpression(Aws::String&& value) { SetFilterExpression(std::move(value)); return *this;}
    inline RowFilter& WithFilterExpression(const char* value) { SetFilterExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A wildcard for all rows.</p>
     */
    inline const AllRowsWildcard& GetAllRowsWildcard() const{ return m_allRowsWildcard; }
    inline bool AllRowsWildcardHasBeenSet() const { return m_allRowsWildcardHasBeenSet; }
    inline void SetAllRowsWildcard(const AllRowsWildcard& value) { m_allRowsWildcardHasBeenSet = true; m_allRowsWildcard = value; }
    inline void SetAllRowsWildcard(AllRowsWildcard&& value) { m_allRowsWildcardHasBeenSet = true; m_allRowsWildcard = std::move(value); }
    inline RowFilter& WithAllRowsWildcard(const AllRowsWildcard& value) { SetAllRowsWildcard(value); return *this;}
    inline RowFilter& WithAllRowsWildcard(AllRowsWildcard&& value) { SetAllRowsWildcard(std::move(value)); return *this;}
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
