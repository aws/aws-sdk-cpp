/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/Order.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>A structured set of sort terms.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/Sort">AWS
   * API Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_CONNECTCASES_API Sort();
    AWS_CONNECTCASES_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Unique identifier of a field.</p>
     */
    inline const Aws::String& GetFieldId() const{ return m_fieldId; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetFieldId(const Aws::String& value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetFieldId(Aws::String&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::move(value); }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline void SetFieldId(const char* value) { m_fieldIdHasBeenSet = true; m_fieldId.assign(value); }

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline Sort& WithFieldId(const Aws::String& value) { SetFieldId(value); return *this;}

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline Sort& WithFieldId(Aws::String&& value) { SetFieldId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier of a field.</p>
     */
    inline Sort& WithFieldId(const char* value) { SetFieldId(value); return *this;}


    /**
     * <p>A structured set of sort terms</p>
     */
    inline const Order& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>A structured set of sort terms</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>A structured set of sort terms</p>
     */
    inline void SetSortOrder(const Order& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>A structured set of sort terms</p>
     */
    inline void SetSortOrder(Order&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>A structured set of sort terms</p>
     */
    inline Sort& WithSortOrder(const Order& value) { SetSortOrder(value); return *this;}

    /**
     * <p>A structured set of sort terms</p>
     */
    inline Sort& WithSortOrder(Order&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Order m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
