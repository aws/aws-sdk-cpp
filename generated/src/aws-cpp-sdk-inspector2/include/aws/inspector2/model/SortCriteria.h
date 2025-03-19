/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/SortField.h>
#include <aws/inspector2/model/SortOrder.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Details about the criteria used to sort finding results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/SortCriteria">AWS
   * API Reference</a></p>
   */
  class SortCriteria
  {
  public:
    AWS_INSPECTOR2_API SortCriteria() = default;
    AWS_INSPECTOR2_API SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline SortField GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(SortField value) { m_fieldHasBeenSet = true; m_field = value; }
    inline SortCriteria& WithField(SortField value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SortCriteria& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    SortField m_field{SortField::NOT_SET};
    bool m_fieldHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
