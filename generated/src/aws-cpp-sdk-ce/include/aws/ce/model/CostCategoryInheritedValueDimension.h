/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostCategoryInheritedValueDimensionName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>When you create or update a cost category, you can define the
   * <code>CostCategoryRule</code> rule type as <code>INHERITED_VALUE</code>. This
   * rule type adds the flexibility to define a rule that dynamically inherits the
   * cost category value from the dimension value that's defined by
   * <code>CostCategoryInheritedValueDimension</code>. For example, suppose that you
   * want to dynamically group costs that are based on the value of a specific tag
   * key. First, choose an inherited value rule type, and then choose the tag
   * dimension and specify the tag key to use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryInheritedValueDimension">AWS
   * API Reference</a></p>
   */
  class CostCategoryInheritedValueDimension
  {
  public:
    AWS_COSTEXPLORER_API CostCategoryInheritedValueDimension();
    AWS_COSTEXPLORER_API CostCategoryInheritedValueDimension(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategoryInheritedValueDimension& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dimension that's used to group costs.</p> <p>If you specify
     * <code>LINKED_ACCOUNT_NAME</code>, the cost category value is based on account
     * name. If you specify <code>TAG</code>, the cost category value is based on the
     * value of the specified tag key.</p>
     */
    inline const CostCategoryInheritedValueDimensionName& GetDimensionName() const{ return m_dimensionName; }

    /**
     * <p>The name of the dimension that's used to group costs.</p> <p>If you specify
     * <code>LINKED_ACCOUNT_NAME</code>, the cost category value is based on account
     * name. If you specify <code>TAG</code>, the cost category value is based on the
     * value of the specified tag key.</p>
     */
    inline bool DimensionNameHasBeenSet() const { return m_dimensionNameHasBeenSet; }

    /**
     * <p>The name of the dimension that's used to group costs.</p> <p>If you specify
     * <code>LINKED_ACCOUNT_NAME</code>, the cost category value is based on account
     * name. If you specify <code>TAG</code>, the cost category value is based on the
     * value of the specified tag key.</p>
     */
    inline void SetDimensionName(const CostCategoryInheritedValueDimensionName& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = value; }

    /**
     * <p>The name of the dimension that's used to group costs.</p> <p>If you specify
     * <code>LINKED_ACCOUNT_NAME</code>, the cost category value is based on account
     * name. If you specify <code>TAG</code>, the cost category value is based on the
     * value of the specified tag key.</p>
     */
    inline void SetDimensionName(CostCategoryInheritedValueDimensionName&& value) { m_dimensionNameHasBeenSet = true; m_dimensionName = std::move(value); }

    /**
     * <p>The name of the dimension that's used to group costs.</p> <p>If you specify
     * <code>LINKED_ACCOUNT_NAME</code>, the cost category value is based on account
     * name. If you specify <code>TAG</code>, the cost category value is based on the
     * value of the specified tag key.</p>
     */
    inline CostCategoryInheritedValueDimension& WithDimensionName(const CostCategoryInheritedValueDimensionName& value) { SetDimensionName(value); return *this;}

    /**
     * <p>The name of the dimension that's used to group costs.</p> <p>If you specify
     * <code>LINKED_ACCOUNT_NAME</code>, the cost category value is based on account
     * name. If you specify <code>TAG</code>, the cost category value is based on the
     * value of the specified tag key.</p>
     */
    inline CostCategoryInheritedValueDimension& WithDimensionName(CostCategoryInheritedValueDimensionName&& value) { SetDimensionName(std::move(value)); return *this;}


    /**
     * <p>The key to extract cost category values.</p>
     */
    inline const Aws::String& GetDimensionKey() const{ return m_dimensionKey; }

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline void SetDimensionKey(const Aws::String& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = value; }

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline void SetDimensionKey(Aws::String&& value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey = std::move(value); }

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline void SetDimensionKey(const char* value) { m_dimensionKeyHasBeenSet = true; m_dimensionKey.assign(value); }

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline CostCategoryInheritedValueDimension& WithDimensionKey(const Aws::String& value) { SetDimensionKey(value); return *this;}

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline CostCategoryInheritedValueDimension& WithDimensionKey(Aws::String&& value) { SetDimensionKey(std::move(value)); return *this;}

    /**
     * <p>The key to extract cost category values.</p>
     */
    inline CostCategoryInheritedValueDimension& WithDimensionKey(const char* value) { SetDimensionKey(value); return *this;}

  private:

    CostCategoryInheritedValueDimensionName m_dimensionName;
    bool m_dimensionNameHasBeenSet = false;

    Aws::String m_dimensionKey;
    bool m_dimensionKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
