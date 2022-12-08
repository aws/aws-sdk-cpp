/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ConnectorOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/TaskType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appflow/model/OperatorPropertiesKeys.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> A class for modeling different type of tasks. Task implementation varies
   * based on the <code>TaskType</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/Task">AWS API
   * Reference</a></p>
   */
  class Task
  {
  public:
    AWS_APPFLOW_API Task();
    AWS_APPFLOW_API Task(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceFields() const{ return m_sourceFields; }

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline bool SourceFieldsHasBeenSet() const { return m_sourceFieldsHasBeenSet; }

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline void SetSourceFields(const Aws::Vector<Aws::String>& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = value; }

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline void SetSourceFields(Aws::Vector<Aws::String>&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = std::move(value); }

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline Task& WithSourceFields(const Aws::Vector<Aws::String>& value) { SetSourceFields(value); return *this;}

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline Task& WithSourceFields(Aws::Vector<Aws::String>&& value) { SetSourceFields(std::move(value)); return *this;}

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline Task& AddSourceFields(const Aws::String& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.push_back(value); return *this; }

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline Task& AddSourceFields(Aws::String&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.push_back(std::move(value)); return *this; }

    /**
     * <p> The source fields to which a particular task is applied. </p>
     */
    inline Task& AddSourceFields(const char* value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.push_back(value); return *this; }


    /**
     * <p> The operation to be performed on the provided source fields. </p>
     */
    inline const ConnectorOperator& GetConnectorOperator() const{ return m_connectorOperator; }

    /**
     * <p> The operation to be performed on the provided source fields. </p>
     */
    inline bool ConnectorOperatorHasBeenSet() const { return m_connectorOperatorHasBeenSet; }

    /**
     * <p> The operation to be performed on the provided source fields. </p>
     */
    inline void SetConnectorOperator(const ConnectorOperator& value) { m_connectorOperatorHasBeenSet = true; m_connectorOperator = value; }

    /**
     * <p> The operation to be performed on the provided source fields. </p>
     */
    inline void SetConnectorOperator(ConnectorOperator&& value) { m_connectorOperatorHasBeenSet = true; m_connectorOperator = std::move(value); }

    /**
     * <p> The operation to be performed on the provided source fields. </p>
     */
    inline Task& WithConnectorOperator(const ConnectorOperator& value) { SetConnectorOperator(value); return *this;}

    /**
     * <p> The operation to be performed on the provided source fields. </p>
     */
    inline Task& WithConnectorOperator(ConnectorOperator&& value) { SetConnectorOperator(std::move(value)); return *this;}


    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline const Aws::String& GetDestinationField() const{ return m_destinationField; }

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline bool DestinationFieldHasBeenSet() const { return m_destinationFieldHasBeenSet; }

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline void SetDestinationField(const Aws::String& value) { m_destinationFieldHasBeenSet = true; m_destinationField = value; }

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline void SetDestinationField(Aws::String&& value) { m_destinationFieldHasBeenSet = true; m_destinationField = std::move(value); }

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline void SetDestinationField(const char* value) { m_destinationFieldHasBeenSet = true; m_destinationField.assign(value); }

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline Task& WithDestinationField(const Aws::String& value) { SetDestinationField(value); return *this;}

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline Task& WithDestinationField(Aws::String&& value) { SetDestinationField(std::move(value)); return *this;}

    /**
     * <p> A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field. </p>
     */
    inline Task& WithDestinationField(const char* value) { SetDestinationField(value); return *this;}


    /**
     * <p> Specifies the particular task implementation that Amazon AppFlow performs.
     * </p>
     */
    inline const TaskType& GetTaskType() const{ return m_taskType; }

    /**
     * <p> Specifies the particular task implementation that Amazon AppFlow performs.
     * </p>
     */
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    /**
     * <p> Specifies the particular task implementation that Amazon AppFlow performs.
     * </p>
     */
    inline void SetTaskType(const TaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    /**
     * <p> Specifies the particular task implementation that Amazon AppFlow performs.
     * </p>
     */
    inline void SetTaskType(TaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    /**
     * <p> Specifies the particular task implementation that Amazon AppFlow performs.
     * </p>
     */
    inline Task& WithTaskType(const TaskType& value) { SetTaskType(value); return *this;}

    /**
     * <p> Specifies the particular task implementation that Amazon AppFlow performs.
     * </p>
     */
    inline Task& WithTaskType(TaskType&& value) { SetTaskType(std::move(value)); return *this;}


    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline const Aws::Map<OperatorPropertiesKeys, Aws::String>& GetTaskProperties() const{ return m_taskProperties; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline void SetTaskProperties(const Aws::Map<OperatorPropertiesKeys, Aws::String>& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = value; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline void SetTaskProperties(Aws::Map<OperatorPropertiesKeys, Aws::String>&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::move(value); }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& WithTaskProperties(const Aws::Map<OperatorPropertiesKeys, Aws::String>& value) { SetTaskProperties(value); return *this;}

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& WithTaskProperties(Aws::Map<OperatorPropertiesKeys, Aws::String>&& value) { SetTaskProperties(std::move(value)); return *this;}

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& AddTaskProperties(const OperatorPropertiesKeys& key, const Aws::String& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, value); return *this; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& AddTaskProperties(OperatorPropertiesKeys&& key, const Aws::String& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& AddTaskProperties(const OperatorPropertiesKeys& key, Aws::String&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& AddTaskProperties(OperatorPropertiesKeys&& key, Aws::String&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& AddTaskProperties(OperatorPropertiesKeys&& key, const char* value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p> A map used to store task-related information. The execution service looks
     * for particular information based on the <code>TaskType</code>. </p>
     */
    inline Task& AddTaskProperties(const OperatorPropertiesKeys& key, const char* value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_sourceFields;
    bool m_sourceFieldsHasBeenSet = false;

    ConnectorOperator m_connectorOperator;
    bool m_connectorOperatorHasBeenSet = false;

    Aws::String m_destinationField;
    bool m_destinationFieldHasBeenSet = false;

    TaskType m_taskType;
    bool m_taskTypeHasBeenSet = false;

    Aws::Map<OperatorPropertiesKeys, Aws::String> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
