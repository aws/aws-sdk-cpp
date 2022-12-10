/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PivotTableSortBy.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The field sort options for a pivot table sort configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotFieldSortOptions">AWS
   * API Reference</a></p>
   */
  class PivotFieldSortOptions
  {
  public:
    AWS_QUICKSIGHT_API PivotFieldSortOptions();
    AWS_QUICKSIGHT_API PivotFieldSortOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotFieldSortOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline PivotFieldSortOptions& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline PivotFieldSortOptions& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The field ID for the field sort options.</p>
     */
    inline PivotFieldSortOptions& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The sort by field for the field sort options.</p>
     */
    inline const PivotTableSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>The sort by field for the field sort options.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>The sort by field for the field sort options.</p>
     */
    inline void SetSortBy(const PivotTableSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>The sort by field for the field sort options.</p>
     */
    inline void SetSortBy(PivotTableSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>The sort by field for the field sort options.</p>
     */
    inline PivotFieldSortOptions& WithSortBy(const PivotTableSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>The sort by field for the field sort options.</p>
     */
    inline PivotFieldSortOptions& WithSortBy(PivotTableSortBy&& value) { SetSortBy(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    PivotTableSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
