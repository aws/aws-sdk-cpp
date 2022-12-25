/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryTaskFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>(Optional) An array of filter objects you can use to filter the response of
   * data repository tasks you will see in the the response. You can filter the tasks
   * returned in the response by one or more file system IDs, task lifecycles, and by
   * task type. A filter object consists of a filter <code>Name</code>, and one or
   * more <code>Values</code> for the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DataRepositoryTaskFilter">AWS
   * API Reference</a></p>
   */
  class DataRepositoryTaskFilter
  {
  public:
    AWS_FSX_API DataRepositoryTaskFilter();
    AWS_FSX_API DataRepositoryTaskFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DataRepositoryTaskFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the task property to use in filtering the tasks returned in the
     * response.</p> <ul> <li> <p>Use <code>file-system-id</code> to retrieve data
     * repository tasks for specific file systems.</p> </li> <li> <p>Use
     * <code>task-lifecycle</code> to retrieve data repository tasks with one or more
     * specific lifecycle states, as follows: CANCELED, EXECUTING, FAILED, PENDING, and
     * SUCCEEDED.</p> </li> </ul>
     */
    inline const DataRepositoryTaskFilterName& GetName() const{ return m_name; }

    /**
     * <p>Name of the task property to use in filtering the tasks returned in the
     * response.</p> <ul> <li> <p>Use <code>file-system-id</code> to retrieve data
     * repository tasks for specific file systems.</p> </li> <li> <p>Use
     * <code>task-lifecycle</code> to retrieve data repository tasks with one or more
     * specific lifecycle states, as follows: CANCELED, EXECUTING, FAILED, PENDING, and
     * SUCCEEDED.</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the task property to use in filtering the tasks returned in the
     * response.</p> <ul> <li> <p>Use <code>file-system-id</code> to retrieve data
     * repository tasks for specific file systems.</p> </li> <li> <p>Use
     * <code>task-lifecycle</code> to retrieve data repository tasks with one or more
     * specific lifecycle states, as follows: CANCELED, EXECUTING, FAILED, PENDING, and
     * SUCCEEDED.</p> </li> </ul>
     */
    inline void SetName(const DataRepositoryTaskFilterName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the task property to use in filtering the tasks returned in the
     * response.</p> <ul> <li> <p>Use <code>file-system-id</code> to retrieve data
     * repository tasks for specific file systems.</p> </li> <li> <p>Use
     * <code>task-lifecycle</code> to retrieve data repository tasks with one or more
     * specific lifecycle states, as follows: CANCELED, EXECUTING, FAILED, PENDING, and
     * SUCCEEDED.</p> </li> </ul>
     */
    inline void SetName(DataRepositoryTaskFilterName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the task property to use in filtering the tasks returned in the
     * response.</p> <ul> <li> <p>Use <code>file-system-id</code> to retrieve data
     * repository tasks for specific file systems.</p> </li> <li> <p>Use
     * <code>task-lifecycle</code> to retrieve data repository tasks with one or more
     * specific lifecycle states, as follows: CANCELED, EXECUTING, FAILED, PENDING, and
     * SUCCEEDED.</p> </li> </ul>
     */
    inline DataRepositoryTaskFilter& WithName(const DataRepositoryTaskFilterName& value) { SetName(value); return *this;}

    /**
     * <p>Name of the task property to use in filtering the tasks returned in the
     * response.</p> <ul> <li> <p>Use <code>file-system-id</code> to retrieve data
     * repository tasks for specific file systems.</p> </li> <li> <p>Use
     * <code>task-lifecycle</code> to retrieve data repository tasks with one or more
     * specific lifecycle states, as follows: CANCELED, EXECUTING, FAILED, PENDING, and
     * SUCCEEDED.</p> </li> </ul>
     */
    inline DataRepositoryTaskFilter& WithName(DataRepositoryTaskFilterName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline DataRepositoryTaskFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline DataRepositoryTaskFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline DataRepositoryTaskFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline DataRepositoryTaskFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>Use Values to include the specific file system IDs and task lifecycle states
     * for the filters you are using.</p>
     */
    inline DataRepositoryTaskFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    DataRepositoryTaskFilterName m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
