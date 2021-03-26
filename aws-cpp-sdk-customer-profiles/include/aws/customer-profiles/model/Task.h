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

  class AWS_CUSTOMERPROFILES_API Task
  {
  public:
    Task();
    Task(Aws::Utils::Json::JsonView jsonValue);
    Task& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ConnectorOperator& GetConnectorOperator() const{ return m_connectorOperator; }

    
    inline bool ConnectorOperatorHasBeenSet() const { return m_connectorOperatorHasBeenSet; }

    
    inline void SetConnectorOperator(const ConnectorOperator& value) { m_connectorOperatorHasBeenSet = true; m_connectorOperator = value; }

    
    inline void SetConnectorOperator(ConnectorOperator&& value) { m_connectorOperatorHasBeenSet = true; m_connectorOperator = std::move(value); }

    
    inline Task& WithConnectorOperator(const ConnectorOperator& value) { SetConnectorOperator(value); return *this;}

    
    inline Task& WithConnectorOperator(ConnectorOperator&& value) { SetConnectorOperator(std::move(value)); return *this;}


    
    inline const Aws::String& GetDestinationField() const{ return m_destinationField; }

    
    inline bool DestinationFieldHasBeenSet() const { return m_destinationFieldHasBeenSet; }

    
    inline void SetDestinationField(const Aws::String& value) { m_destinationFieldHasBeenSet = true; m_destinationField = value; }

    
    inline void SetDestinationField(Aws::String&& value) { m_destinationFieldHasBeenSet = true; m_destinationField = std::move(value); }

    
    inline void SetDestinationField(const char* value) { m_destinationFieldHasBeenSet = true; m_destinationField.assign(value); }

    
    inline Task& WithDestinationField(const Aws::String& value) { SetDestinationField(value); return *this;}

    
    inline Task& WithDestinationField(Aws::String&& value) { SetDestinationField(std::move(value)); return *this;}

    
    inline Task& WithDestinationField(const char* value) { SetDestinationField(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetSourceFields() const{ return m_sourceFields; }

    
    inline bool SourceFieldsHasBeenSet() const { return m_sourceFieldsHasBeenSet; }

    
    inline void SetSourceFields(const Aws::Vector<Aws::String>& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = value; }

    
    inline void SetSourceFields(Aws::Vector<Aws::String>&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields = std::move(value); }

    
    inline Task& WithSourceFields(const Aws::Vector<Aws::String>& value) { SetSourceFields(value); return *this;}

    
    inline Task& WithSourceFields(Aws::Vector<Aws::String>&& value) { SetSourceFields(std::move(value)); return *this;}

    
    inline Task& AddSourceFields(const Aws::String& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.push_back(value); return *this; }

    
    inline Task& AddSourceFields(Aws::String&& value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.push_back(std::move(value)); return *this; }

    
    inline Task& AddSourceFields(const char* value) { m_sourceFieldsHasBeenSet = true; m_sourceFields.push_back(value); return *this; }


    
    inline const Aws::Map<OperatorPropertiesKeys, Aws::String>& GetTaskProperties() const{ return m_taskProperties; }

    
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }

    
    inline void SetTaskProperties(const Aws::Map<OperatorPropertiesKeys, Aws::String>& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = value; }

    
    inline void SetTaskProperties(Aws::Map<OperatorPropertiesKeys, Aws::String>&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::move(value); }

    
    inline Task& WithTaskProperties(const Aws::Map<OperatorPropertiesKeys, Aws::String>& value) { SetTaskProperties(value); return *this;}

    
    inline Task& WithTaskProperties(Aws::Map<OperatorPropertiesKeys, Aws::String>&& value) { SetTaskProperties(std::move(value)); return *this;}

    
    inline Task& AddTaskProperties(const OperatorPropertiesKeys& key, const Aws::String& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, value); return *this; }

    
    inline Task& AddTaskProperties(OperatorPropertiesKeys&& key, const Aws::String& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(std::move(key), value); return *this; }

    
    inline Task& AddTaskProperties(const OperatorPropertiesKeys& key, Aws::String&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, std::move(value)); return *this; }

    
    inline Task& AddTaskProperties(OperatorPropertiesKeys&& key, Aws::String&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(std::move(key), std::move(value)); return *this; }

    
    inline Task& AddTaskProperties(OperatorPropertiesKeys&& key, const char* value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(std::move(key), value); return *this; }

    
    inline Task& AddTaskProperties(const OperatorPropertiesKeys& key, const char* value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.emplace(key, value); return *this; }


    
    inline const TaskType& GetTaskType() const{ return m_taskType; }

    
    inline bool TaskTypeHasBeenSet() const { return m_taskTypeHasBeenSet; }

    
    inline void SetTaskType(const TaskType& value) { m_taskTypeHasBeenSet = true; m_taskType = value; }

    
    inline void SetTaskType(TaskType&& value) { m_taskTypeHasBeenSet = true; m_taskType = std::move(value); }

    
    inline Task& WithTaskType(const TaskType& value) { SetTaskType(value); return *this;}

    
    inline Task& WithTaskType(TaskType&& value) { SetTaskType(std::move(value)); return *this;}

  private:

    ConnectorOperator m_connectorOperator;
    bool m_connectorOperatorHasBeenSet;

    Aws::String m_destinationField;
    bool m_destinationFieldHasBeenSet;

    Aws::Vector<Aws::String> m_sourceFields;
    bool m_sourceFieldsHasBeenSet;

    Aws::Map<OperatorPropertiesKeys, Aws::String> m_taskProperties;
    bool m_taskPropertiesHasBeenSet;

    TaskType m_taskType;
    bool m_taskTypeHasBeenSet;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
