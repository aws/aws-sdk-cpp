/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GroupFilterOperator.h>
#include <aws/quicksight/model/GroupFilterAttribute.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A <code>GroupSearchFilter</code> object that you want to apply to your
   * search.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GroupSearchFilter">AWS
   * API Reference</a></p>
   */
  class GroupSearchFilter
  {
  public:
    AWS_QUICKSIGHT_API GroupSearchFilter();
    AWS_QUICKSIGHT_API GroupSearchFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GroupSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline const GroupFilterOperator& GetOperator() const{ return m_operator; }

    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline void SetOperator(const GroupFilterOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline void SetOperator(GroupFilterOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline GroupSearchFilter& WithOperator(const GroupFilterOperator& value) { SetOperator(value); return *this;}

    /**
     * <p>The comparison operator that you want to use as a filter, for example
     * <code>"Operator": "StartsWith"</code>. Currently, the only supported operator is
     * <code>StartsWith</code>.</p>
     */
    inline GroupSearchFilter& WithOperator(GroupFilterOperator&& value) { SetOperator(std::move(value)); return *this;}


    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline const GroupFilterAttribute& GetName() const{ return m_name; }

    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline void SetName(const GroupFilterAttribute& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline void SetName(GroupFilterAttribute&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline GroupSearchFilter& WithName(const GroupFilterAttribute& value) { SetName(value); return *this;}

    /**
     * <p>The name of the value that you want to use as a filter, for example
     * <code>"Name": "GROUP_NAME"</code>. Currently, the only supported name is
     * <code>GROUP_NAME</code>.</p>
     */
    inline GroupSearchFilter& WithName(GroupFilterAttribute&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline GroupSearchFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline GroupSearchFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the named item, in this case <code>GROUP_NAME</code>, that you
     * want to use as a filter.</p>
     */
    inline GroupSearchFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    GroupFilterOperator m_operator;
    bool m_operatorHasBeenSet = false;

    GroupFilterAttribute m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
