/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/SortableFieldName.h>
#include <aws/connect/model/SortOrder.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>A structure that defineds the field name to sort by and a sort
   * order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Sort">AWS API
   * Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_CONNECT_API Sort();
    AWS_CONNECT_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline const SortableFieldName& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline void SetFieldName(const SortableFieldName& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline void SetFieldName(SortableFieldName&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline Sort& WithFieldName(const SortableFieldName& value) { SetFieldName(value); return *this;}

    /**
     * <p>The name of the field on which to sort.</p>
     */
    inline Sort& WithFieldName(SortableFieldName&& value) { SetFieldName(std::move(value)); return *this;}


    /**
     * <p>An ascending or descending sort.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>An ascending or descending sort.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>An ascending or descending sort.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>An ascending or descending sort.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>An ascending or descending sort.</p>
     */
    inline Sort& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>An ascending or descending sort.</p>
     */
    inline Sort& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    SortableFieldName m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
