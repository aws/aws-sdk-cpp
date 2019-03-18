/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/SqlQueryDatasetAction.h>
#include <aws/iotanalytics/model/ContainerDatasetAction.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>A "DatasetAction" object that specifies how data set contents are
   * automatically created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetAction
  {
  public:
    DatasetAction();
    DatasetAction(Aws::Utils::Json::JsonView jsonValue);
    DatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline DatasetAction& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline DatasetAction& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the data set action by which data set contents are automatically
     * created.</p>
     */
    inline DatasetAction& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>An "SqlQueryDatasetAction" object that uses an SQL query to automatically
     * create data set contents.</p>
     */
    inline const SqlQueryDatasetAction& GetQueryAction() const{ return m_queryAction; }

    /**
     * <p>An "SqlQueryDatasetAction" object that uses an SQL query to automatically
     * create data set contents.</p>
     */
    inline bool QueryActionHasBeenSet() const { return m_queryActionHasBeenSet; }

    /**
     * <p>An "SqlQueryDatasetAction" object that uses an SQL query to automatically
     * create data set contents.</p>
     */
    inline void SetQueryAction(const SqlQueryDatasetAction& value) { m_queryActionHasBeenSet = true; m_queryAction = value; }

    /**
     * <p>An "SqlQueryDatasetAction" object that uses an SQL query to automatically
     * create data set contents.</p>
     */
    inline void SetQueryAction(SqlQueryDatasetAction&& value) { m_queryActionHasBeenSet = true; m_queryAction = std::move(value); }

    /**
     * <p>An "SqlQueryDatasetAction" object that uses an SQL query to automatically
     * create data set contents.</p>
     */
    inline DatasetAction& WithQueryAction(const SqlQueryDatasetAction& value) { SetQueryAction(value); return *this;}

    /**
     * <p>An "SqlQueryDatasetAction" object that uses an SQL query to automatically
     * create data set contents.</p>
     */
    inline DatasetAction& WithQueryAction(SqlQueryDatasetAction&& value) { SetQueryAction(std::move(value)); return *this;}


    /**
     * <p>Information which allows the system to run a containerized application in
     * order to create the data set contents. The application must be in a Docker
     * container along with any needed support libraries.</p>
     */
    inline const ContainerDatasetAction& GetContainerAction() const{ return m_containerAction; }

    /**
     * <p>Information which allows the system to run a containerized application in
     * order to create the data set contents. The application must be in a Docker
     * container along with any needed support libraries.</p>
     */
    inline bool ContainerActionHasBeenSet() const { return m_containerActionHasBeenSet; }

    /**
     * <p>Information which allows the system to run a containerized application in
     * order to create the data set contents. The application must be in a Docker
     * container along with any needed support libraries.</p>
     */
    inline void SetContainerAction(const ContainerDatasetAction& value) { m_containerActionHasBeenSet = true; m_containerAction = value; }

    /**
     * <p>Information which allows the system to run a containerized application in
     * order to create the data set contents. The application must be in a Docker
     * container along with any needed support libraries.</p>
     */
    inline void SetContainerAction(ContainerDatasetAction&& value) { m_containerActionHasBeenSet = true; m_containerAction = std::move(value); }

    /**
     * <p>Information which allows the system to run a containerized application in
     * order to create the data set contents. The application must be in a Docker
     * container along with any needed support libraries.</p>
     */
    inline DatasetAction& WithContainerAction(const ContainerDatasetAction& value) { SetContainerAction(value); return *this;}

    /**
     * <p>Information which allows the system to run a containerized application in
     * order to create the data set contents. The application must be in a Docker
     * container along with any needed support libraries.</p>
     */
    inline DatasetAction& WithContainerAction(ContainerDatasetAction&& value) { SetContainerAction(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    SqlQueryDatasetAction m_queryAction;
    bool m_queryActionHasBeenSet;

    ContainerDatasetAction m_containerAction;
    bool m_containerActionHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
