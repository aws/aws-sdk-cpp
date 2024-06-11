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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class CreateTaskTemplateRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateTaskTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTaskTemplate"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline CreateTaskTemplateRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline CreateTaskTemplateRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline CreateTaskTemplateRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTaskTemplateRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTaskTemplateRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTaskTemplateRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the task template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateTaskTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTaskTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTaskTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId.assign(value); }
    inline CreateTaskTemplateRequest& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline CreateTaskTemplateRequest& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline CreateTaskTemplateRequest& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline const TaskTemplateConstraints& GetConstraints() const{ return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    inline void SetConstraints(const TaskTemplateConstraints& value) { m_constraintsHasBeenSet = true; m_constraints = value; }
    inline void SetConstraints(TaskTemplateConstraints&& value) { m_constraintsHasBeenSet = true; m_constraints = std::move(value); }
    inline CreateTaskTemplateRequest& WithConstraints(const TaskTemplateConstraints& value) { SetConstraints(value); return *this;}
    inline CreateTaskTemplateRequest& WithConstraints(TaskTemplateConstraints&& value) { SetConstraints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline const TaskTemplateDefaults& GetDefaults() const{ return m_defaults; }
    inline bool DefaultsHasBeenSet() const { return m_defaultsHasBeenSet; }
    inline void SetDefaults(const TaskTemplateDefaults& value) { m_defaultsHasBeenSet = true; m_defaults = value; }
    inline void SetDefaults(TaskTemplateDefaults&& value) { m_defaultsHasBeenSet = true; m_defaults = std::move(value); }
    inline CreateTaskTemplateRequest& WithDefaults(const TaskTemplateDefaults& value) { SetDefaults(value); return *this;}
    inline CreateTaskTemplateRequest& WithDefaults(TaskTemplateDefaults&& value) { SetDefaults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created. </p>
     */
    inline const TaskTemplateStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaskTemplateStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaskTemplateStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CreateTaskTemplateRequest& WithStatus(const TaskTemplateStatus& value) { SetStatus(value); return *this;}
    inline CreateTaskTemplateRequest& WithStatus(TaskTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fields that are part of the template.</p>
     */
    inline const Aws::Vector<TaskTemplateField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<TaskTemplateField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<TaskTemplateField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline CreateTaskTemplateRequest& WithFields(const Aws::Vector<TaskTemplateField>& value) { SetFields(value); return *this;}
    inline CreateTaskTemplateRequest& WithFields(Aws::Vector<TaskTemplateField>&& value) { SetFields(std::move(value)); return *this;}
    inline CreateTaskTemplateRequest& AddFields(const TaskTemplateField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline CreateTaskTemplateRequest& AddFields(TaskTemplateField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTaskTemplateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTaskTemplateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTaskTemplateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_contactFlowId;
    bool m_contactFlowIdHasBeenSet = false;

    TaskTemplateConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    TaskTemplateDefaults m_defaults;
    bool m_defaultsHasBeenSet = false;

    TaskTemplateStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<TaskTemplateField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
