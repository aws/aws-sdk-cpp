/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/TaskFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/Operator.h>
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
namespace DataSync
{
namespace Model
{

  /**
   * <p>You can use API filters to narrow down the list of resources returned by
   * <code>ListTasks</code>. For example, to retrieve all tasks on a source location,
   * you can use <code>ListTasks</code> with filter name <code>LocationId</code> and
   * <code>Operator Equals</code> with the ARN for the location.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/query-resources.html">filtering
   * DataSync resources</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/TaskFilter">AWS
   * API Reference</a></p>
   */
  class TaskFilter
  {
  public:
    AWS_DATASYNC_API TaskFilter();
    AWS_DATASYNC_API TaskFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API TaskFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it. For example, <code>LocationId</code> for
     * <code>ListTasks</code>.</p>
     */
    inline const TaskFilterName& GetName() const{ return m_name; }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it. For example, <code>LocationId</code> for
     * <code>ListTasks</code>.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it. For example, <code>LocationId</code> for
     * <code>ListTasks</code>.</p>
     */
    inline void SetName(const TaskFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it. For example, <code>LocationId</code> for
     * <code>ListTasks</code>.</p>
     */
    inline void SetName(TaskFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it. For example, <code>LocationId</code> for
     * <code>ListTasks</code>.</p>
     */
    inline TaskFilter& WithName(const TaskFilterName& value) { SetName(value); return *this;}

    /**
     * <p>The name of the filter being used. Each API call supports a list of filters
     * that are available for it. For example, <code>LocationId</code> for
     * <code>ListTasks</code>.</p>
     */
    inline TaskFilter& WithName(TaskFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline TaskFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline TaskFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline TaskFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline TaskFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The values that you want to filter for. For example, you might want to
     * display only tasks for a specific destination location.</p>
     */
    inline TaskFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>).</p>
     */
    inline const Operator& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>).</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>).</p>
     */
    inline void SetOperator(const Operator& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>).</p>
     */
    inline void SetOperator(Operator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>).</p>
     */
    inline TaskFilter& WithOperator(const Operator& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator that is used to compare filter values (for example,
     * <code>Equals</code> or <code>Contains</code>).</p>
     */
    inline TaskFilter& WithOperator(Operator&& value) { SetOperator(std::move(value)); return *this;}

  private:

    TaskFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Operator m_operator;
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
