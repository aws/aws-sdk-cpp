/**
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
    AWS_CONNECT_API CreateTaskTemplateRequest() = default;

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
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    CreateTaskTemplateRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task template.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTaskTemplateRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the task template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateTaskTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline const Aws::String& GetContactFlowId() const { return m_contactFlowId; }
    inline bool ContactFlowIdHasBeenSet() const { return m_contactFlowIdHasBeenSet; }
    template<typename ContactFlowIdT = Aws::String>
    void SetContactFlowId(ContactFlowIdT&& value) { m_contactFlowIdHasBeenSet = true; m_contactFlowId = std::forward<ContactFlowIdT>(value); }
    template<typename ContactFlowIdT = Aws::String>
    CreateTaskTemplateRequest& WithContactFlowId(ContactFlowIdT&& value) { SetContactFlowId(std::forward<ContactFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ContactFlowId for the flow that will be run if this template is used to
     * create a self-assigned task.</p>
     */
    inline const Aws::String& GetSelfAssignFlowId() const { return m_selfAssignFlowId; }
    inline bool SelfAssignFlowIdHasBeenSet() const { return m_selfAssignFlowIdHasBeenSet; }
    template<typename SelfAssignFlowIdT = Aws::String>
    void SetSelfAssignFlowId(SelfAssignFlowIdT&& value) { m_selfAssignFlowIdHasBeenSet = true; m_selfAssignFlowId = std::forward<SelfAssignFlowIdT>(value); }
    template<typename SelfAssignFlowIdT = Aws::String>
    CreateTaskTemplateRequest& WithSelfAssignFlowId(SelfAssignFlowIdT&& value) { SetSelfAssignFlowId(std::forward<SelfAssignFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline const TaskTemplateConstraints& GetConstraints() const { return m_constraints; }
    inline bool ConstraintsHasBeenSet() const { return m_constraintsHasBeenSet; }
    template<typename ConstraintsT = TaskTemplateConstraints>
    void SetConstraints(ConstraintsT&& value) { m_constraintsHasBeenSet = true; m_constraints = std::forward<ConstraintsT>(value); }
    template<typename ConstraintsT = TaskTemplateConstraints>
    CreateTaskTemplateRequest& WithConstraints(ConstraintsT&& value) { SetConstraints(std::forward<ConstraintsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline const TaskTemplateDefaults& GetDefaults() const { return m_defaults; }
    inline bool DefaultsHasBeenSet() const { return m_defaultsHasBeenSet; }
    template<typename DefaultsT = TaskTemplateDefaults>
    void SetDefaults(DefaultsT&& value) { m_defaultsHasBeenSet = true; m_defaults = std::forward<DefaultsT>(value); }
    template<typename DefaultsT = TaskTemplateDefaults>
    CreateTaskTemplateRequest& WithDefaults(DefaultsT&& value) { SetDefaults(std::forward<DefaultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created. </p>
     */
    inline TaskTemplateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TaskTemplateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateTaskTemplateRequest& WithStatus(TaskTemplateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fields that are part of the template.</p>
     */
    inline const Aws::Vector<TaskTemplateField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<TaskTemplateField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<TaskTemplateField>>
    CreateTaskTemplateRequest& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = TaskTemplateField>
    CreateTaskTemplateRequest& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateTaskTemplateRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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

    Aws::String m_selfAssignFlowId;
    bool m_selfAssignFlowIdHasBeenSet = false;

    TaskTemplateConstraints m_constraints;
    bool m_constraintsHasBeenSet = false;

    TaskTemplateDefaults m_defaults;
    bool m_defaultsHasBeenSet = false;

    TaskTemplateStatus m_status{TaskTemplateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<TaskTemplateField> m_fields;
    bool m_fieldsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
