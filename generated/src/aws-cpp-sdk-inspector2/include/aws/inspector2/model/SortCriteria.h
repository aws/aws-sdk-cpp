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
    AWS_INSPECTOR2_API SortCriteria();
    AWS_INSPECTOR2_API SortCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API SortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline const SortField& GetField() const{ return m_field; }

    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline void SetField(const SortField& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline void SetField(SortField&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline SortCriteria& WithField(const SortField& value) { SetField(value); return *this;}

    /**
     * <p>The finding detail field by which results are sorted.</p>
     */
    inline SortCriteria& WithField(SortField&& value) { SetField(std::move(value)); return *this;}


    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline SortCriteria& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order by which findings are sorted.</p>
     */
    inline SortCriteria& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    SortField m_field;
    bool m_fieldHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
