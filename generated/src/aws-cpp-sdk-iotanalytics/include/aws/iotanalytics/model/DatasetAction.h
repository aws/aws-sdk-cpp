/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A <code>DatasetAction</code> object that specifies how dataset contents are
   * automatically created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetAction">AWS
   * API Reference</a></p>
   */
  class DatasetAction
  {
  public:
    AWS_IOTANALYTICS_API DatasetAction();
    AWS_IOTANALYTICS_API DatasetAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline DatasetAction& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline DatasetAction& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset action by which dataset contents are automatically
     * created.</p>
     */
    inline DatasetAction& WithActionName(const char* value) { SetActionName(value); return *this;}


    /**
     * <p>An <code>SqlQueryDatasetAction</code> object that uses an SQL query to
     * automatically create dataset contents.</p>
     */
    inline const SqlQueryDatasetAction& GetQueryAction() const{ return m_queryAction; }

    /**
     * <p>An <code>SqlQueryDatasetAction</code> object that uses an SQL query to
     * automatically create dataset contents.</p>
     */
    inline bool QueryActionHasBeenSet() const { return m_queryActionHasBeenSet; }

    /**
     * <p>An <code>SqlQueryDatasetAction</code> object that uses an SQL query to
     * automatically create dataset contents.</p>
     */
    inline void SetQueryAction(const SqlQueryDatasetAction& value) { m_queryActionHasBeenSet = true; m_queryAction = value; }

    /**
     * <p>An <code>SqlQueryDatasetAction</code> object that uses an SQL query to
     * automatically create dataset contents.</p>
     */
    inline void SetQueryAction(SqlQueryDatasetAction&& value) { m_queryActionHasBeenSet = true; m_queryAction = std::move(value); }

    /**
     * <p>An <code>SqlQueryDatasetAction</code> object that uses an SQL query to
     * automatically create dataset contents.</p>
     */
    inline DatasetAction& WithQueryAction(const SqlQueryDatasetAction& value) { SetQueryAction(value); return *this;}

    /**
     * <p>An <code>SqlQueryDatasetAction</code> object that uses an SQL query to
     * automatically create dataset contents.</p>
     */
    inline DatasetAction& WithQueryAction(SqlQueryDatasetAction&& value) { SetQueryAction(std::move(value)); return *this;}


    /**
     * <p>Information that allows the system to run a containerized application to
     * create the dataset contents. The application must be in a Docker container along
     * with any required support libraries.</p>
     */
    inline const ContainerDatasetAction& GetContainerAction() const{ return m_containerAction; }

    /**
     * <p>Information that allows the system to run a containerized application to
     * create the dataset contents. The application must be in a Docker container along
     * with any required support libraries.</p>
     */
    inline bool ContainerActionHasBeenSet() const { return m_containerActionHasBeenSet; }

    /**
     * <p>Information that allows the system to run a containerized application to
     * create the dataset contents. The application must be in a Docker container along
     * with any required support libraries.</p>
     */
    inline void SetContainerAction(const ContainerDatasetAction& value) { m_containerActionHasBeenSet = true; m_containerAction = value; }

    /**
     * <p>Information that allows the system to run a containerized application to
     * create the dataset contents. The application must be in a Docker container along
     * with any required support libraries.</p>
     */
    inline void SetContainerAction(ContainerDatasetAction&& value) { m_containerActionHasBeenSet = true; m_containerAction = std::move(value); }

    /**
     * <p>Information that allows the system to run a containerized application to
     * create the dataset contents. The application must be in a Docker container along
     * with any required support libraries.</p>
     */
    inline DatasetAction& WithContainerAction(const ContainerDatasetAction& value) { SetContainerAction(value); return *this;}

    /**
     * <p>Information that allows the system to run a containerized application to
     * create the dataset contents. The application must be in a Docker container along
     * with any required support libraries.</p>
     */
    inline DatasetAction& WithContainerAction(ContainerDatasetAction&& value) { SetContainerAction(std::move(value)); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    SqlQueryDatasetAction m_queryAction;
    bool m_queryActionHasBeenSet = false;

    ContainerDatasetAction m_containerAction;
    bool m_containerActionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
