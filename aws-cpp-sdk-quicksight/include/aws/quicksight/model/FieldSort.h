/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SortDirection.h>
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
   * <p>The sort configuration for a field in a field well.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldSort">AWS
   * API Reference</a></p>
   */
  class FieldSort
  {
  public:
    AWS_QUICKSIGHT_API FieldSort();
    AWS_QUICKSIGHT_API FieldSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FieldSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration target field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>The sort configuration target field.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>The sort configuration target field.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>The sort configuration target field.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>The sort configuration target field.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>The sort configuration target field.</p>
     */
    inline FieldSort& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>The sort configuration target field.</p>
     */
    inline FieldSort& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>The sort configuration target field.</p>
     */
    inline FieldSort& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>The sort direction. Choose one of the following options:</p> <ul> <li> <p>
     * <code>ASC</code>: Ascending</p> </li> <li> <p> <code>DESC</code>: Descending</p>
     * </li> </ul>
     */
    inline const SortDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>The sort direction. Choose one of the following options:</p> <ul> <li> <p>
     * <code>ASC</code>: Ascending</p> </li> <li> <p> <code>DESC</code>: Descending</p>
     * </li> </ul>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>The sort direction. Choose one of the following options:</p> <ul> <li> <p>
     * <code>ASC</code>: Ascending</p> </li> <li> <p> <code>DESC</code>: Descending</p>
     * </li> </ul>
     */
    inline void SetDirection(const SortDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>The sort direction. Choose one of the following options:</p> <ul> <li> <p>
     * <code>ASC</code>: Ascending</p> </li> <li> <p> <code>DESC</code>: Descending</p>
     * </li> </ul>
     */
    inline void SetDirection(SortDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>The sort direction. Choose one of the following options:</p> <ul> <li> <p>
     * <code>ASC</code>: Ascending</p> </li> <li> <p> <code>DESC</code>: Descending</p>
     * </li> </ul>
     */
    inline FieldSort& WithDirection(const SortDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>The sort direction. Choose one of the following options:</p> <ul> <li> <p>
     * <code>ASC</code>: Ascending</p> </li> <li> <p> <code>DESC</code>: Descending</p>
     * </li> </ul>
     */
    inline FieldSort& WithDirection(SortDirection&& value) { SetDirection(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    SortDirection m_direction;
    bool m_directionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
