/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SortOrder.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The details for how to sort the data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SortDefinition">AWS
   * API Reference</a></p>
   */
  class SortDefinition
  {
  public:
    AWS_COSTEXPLORER_API SortDefinition();
    AWS_COSTEXPLORER_API SortDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SortDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline SortDefinition& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline SortDefinition& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key that's used to sort the data.</p>
     */
    inline SortDefinition& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline SortDefinition& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The order that's used to sort the data.</p>
     */
    inline SortDefinition& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
