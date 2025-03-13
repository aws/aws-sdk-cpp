/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/detective/Detective_EXPORTS.h>
#include <aws/detective/model/Field.h>
#include <aws/detective/model/SortOrder.h>
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
namespace Detective
{
namespace Model
{

  /**
   * <p>Details about the criteria used for sorting investigations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/detective-2018-10-26/SortCriteria">AWS
   * API Reference</a></p>
   */
  class SortCriteria
  {
  public:
    AWS_DETECTIVE_API SortCriteria() = default;
    AWS_DETECTIVE_API SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DETECTIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the <code>Field</code> attribute to sort investigations.</p>
     */
    inline Field GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(Field value) { m_fieldHasBeenSet = true; m_field = value; }
    inline SortCriteria& WithField(Field value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order by which the sorted findings are displayed.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SortCriteria& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Field m_field{Field::NOT_SET};
    bool m_fieldHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Detective
} // namespace Aws
