﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TaskTemplateConstraints.h>
#include <aws/connect/model/TaskTemplateDefaults.h>
#include <aws/connect/model/TaskTemplateStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TaskTemplateField.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API UpdateTaskTemplateRequest : public ConnectRequest
  {
  public:
    UpdateTaskTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline const Aws::String& GetTaskTemplateId() const{ return m_taskTemplateId; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline bool TaskTemplateIdHasBeenSet() const { return m_taskTemplateIdHasBeenSet; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetTaskTemplateId(const Aws::String& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = value; }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetTaskTemplateId(Aws::String&& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = std::move(value); }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline void SetTaskTemplateId(const char* value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId.assign(value); }

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithTaskTemplateId(const Aws::String& value) { SetTaskTemplateId(value); return *this;}

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithTaskTemplateId(Aws::String&& value) { SetTaskTemplateId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithTaskTemplateId(const char* value) { SetTaskTemplateId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateTaskTemplateRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateTaskTemplateRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateTaskTemplateRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The name of the task template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the task template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the task template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the task template.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the task template.</p>
     */
    inline UpdateTaskTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline UpdateTaskTemplateRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline UpdateTaskTemplateRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline UpdateTaskTemplateRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline const TaskTemplateConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline void SetConstraints(const TaskTemplateConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline void SetConstraints(TaskTemplateConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline UpdateTaskTemplateRequest& WithConstraints(const TaskTemplateConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline UpdateTaskTemplateRequest& WithConstraints(TaskTemplateConstraints&& value) { SetConstraints(std::move(value)); return *this;}


    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline const TaskTemplateDefaults& GetDefaults() const{ return m_defaults; }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline bool DefaultsHasBeenSet() const { return m_defaultsHasBeenSet; }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline void SetDefaults(const TaskTemplateDefaults& value) { m_defaultsHasBeenSet = true; m_defaults = value; }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline void SetDefaults(TaskTemplateDefaults&& value) { m_defaultsHasBeenSet = true; m_defaults = std::move(value); }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline UpdateTaskTemplateRequest& WithDefaults(const TaskTemplateDefaults& value) { SetDefaults(value); return *this;}

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline UpdateTaskTemplateRequest& WithDefaults(TaskTemplateDefaults&& value) { SetDefaults(std::move(value)); return *this;}


    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline const TaskTemplateStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline void SetStatus(const TaskTemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline void SetStatus(TaskTemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline UpdateTaskTemplateRequest& WithStatus(const TaskTemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline UpdateTaskTemplateRequest& WithStatus(TaskTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Fields that are part of the template.</p>
     */
    inline const Aws::Vector<TaskTemplateField>& GetFields() const{ return m_fields; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline void SetFields(const Aws::Vector<TaskTemplateField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline void SetFields(Aws::Vector<TaskTemplateField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateRequest& WithFields(const Aws::Vector<TaskTemplateField>& value) { SetFields(value); return *this;}

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateRequest& WithFields(Aws::Vector<TaskTemplateField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateRequest& AddFields(const TaskTemplateField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateRequest& AddFields(TaskTemplateField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_taskTemplateId;
    bool m_taskTemplateIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet;

    TaskTemplateConstraints m_constraints;
    bool m_constraintsHasBeenSet;

    TaskTemplateDefaults m_defaults;
    bool m_defaultsHasBeenSet;

    TaskTemplateStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<TaskTemplateField> m_fields;
    bool m_fieldsHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
