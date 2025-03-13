/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/ConnectorOperator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/customer-profiles/model/TaskType.h>
#include <aws/customer-profiles/model/OperatorPropertiesKeys.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A class for modeling different type of tasks. Task implementation varies
   * based on the TaskType.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/Task">AWS
   * API Reference</a></p>
   */
  class Task
  {
  public:
    AWS_CUSTOMERPROFILES_API Task() = default;
    AWS_CUSTOMERPROFILES_API Task(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operation to be performed on the provided source fields.</p>
     */
    inline const ConnectorOperator& GetConnectorOperator() const { return m_connectorOperator; }
    inline bool ConnectorOperatorHasBeenSet() const { return m_connectorOperatorHasBeenSet; }
    template<typename ConnectorOperatorT = ConnectorOperator>
    void SetConnectorOperator(ConnectorOperatorT&& value) { m_connectorOperatorHasBeenSet = true; m_connectorOperator = std::forward<ConnectorOperatorT>(value); }
    template<typename ConnectorOperatorT = ConnectorOperator>
    Task& WithConnectorOperator(ConnectorOperatorT&& value) { SetConnectorOperator(std::forward<ConnectorOperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A field in a destination connector, or a field value against which Amazon
     * AppFlow validates a source field.</p>
     */
    inline const Aws::String& GetDestinationField() const { return m_destinationField; }
    inline bool DestinationFieldHasBeenSet() const { return m_destinationFieldHasBeenSet; }
    template<typename DestinationFieldT = Aws::String>
    void SetDestinationField(DestinationFieldT&& value) { m_destinationFieldHasBeenSet = true; m_destinationField = std::forward<DestinationFieldT>(value); }
    template<typename DestinationFieldT = Aws::String>
    Task& WithDestinationField(DestinationFieldT&& value) { SetDestinationField(std::forward<DestinationFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source fields to which a particular task is applied.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceFields() const { return m_sourceFields; }
    inline bool SourceFieldsHasBeenSet() const { return m_sourceFieldsHasBeenSet; }
    template<typename SourceFieldsT = Aws::Vector<Aws::String>>
    void SetSourceFields(SourceFieldsT&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = std::forward<SourceFieldsT>(value); }
    template<typename SourceFieldsT = Aws::Vector<Aws::String>>
    Task& WithSourceFields(SourceFieldsT&& value) { SetSourceFields(std::forward<SourceFieldsT>(value)); return *this;}
    template<typename SourceFieldsT = Aws::String>
    Task& AddSourceFields(SourceFieldsT&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.emplace_back(std::forward<SourceFieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map used to store task-related information. The service looks for
     * particular information based on the TaskType.</p>
     */
    inline const Aws::Map<OperatorPropertiesKeys, Aws::String>& GetTaskProperties() const { return m_taskProperties; }
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }
    template<typename TaskPropertiesT = Aws::Map<OperatorPropertiesKeys, Aws::String>>
    void SetTaskProperties(TaskPropertiesT&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::forward<TaskPropertiesT>(value); }
    template<typename TaskPropertiesT = Aws::Map<OperatorPropertiesKeys, Aws::String>>
    Task& WithTaskProperties(TaskPropertiesT&& value) { SetTaskProperties(std::forward<TaskPropertiesT>(value)); return *this;}
    inline Task& AddTaskProperties(OperatorPropertiesKeys key, Aws::String value) {
      m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies the particular task implementation that Amazon AppFlow
     * performs.</p>
     */
    inline TaskType GetTaskType() const { return m_taskType; }
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }
    inline void SetTaskType(TaskType value) { m_taskTypeHasBeenSet = true; m_taskType = value; }
    inline Task& WithTaskType(TaskType value) { SetTaskType(value); return *this;}
    ///@}
  private:

    ConnectorOperator m_connectorOperator;
    bool m_connectorOperatorHasBeenSet = false;

    Aws::String m_destinationField;
    bool m_destinationFieldHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceFields;
    bool m_sourceFieldsHasBeenSet = false;

    Aws::Map<OperatorPropertiesKeys, Aws::String> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;

    TaskType m_taskType{TaskType::NOT_SET};
    bool m_taskTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
