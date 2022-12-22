/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TaskTemplateConstraints.h>
#include <aws/connect/model/TaskTemplateDefaults.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TaskTemplateStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/connect/model/TaskTemplateField.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Connect
{
namespace Model
{
  class UpdateTaskTemplateResult
  {
  public:
    AWS_CONNECT_API UpdateTaskTemplateResult();
    AWS_CONNECT_API UpdateTaskTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API UpdateTaskTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateTaskTemplateResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateTaskTemplateResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateTaskTemplateResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline UpdateTaskTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline UpdateTaskTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the task template resource.</p>
     */
    inline UpdateTaskTemplateResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline UpdateTaskTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline UpdateTaskTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the task template resource.</p>
     */
    inline UpdateTaskTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the task template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the task template.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the task template.</p>
     */
    inline UpdateTaskTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the task template.</p>
     */
    inline UpdateTaskTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the task template.</p>
     */
    inline UpdateTaskTemplateResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the task template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the task template.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the task template.</p>
     */
    inline UpdateTaskTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the task template.</p>
     */
    inline UpdateTaskTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the task template.</p>
     */
    inline UpdateTaskTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowId = value; }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowId = std::move(value); }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline void SetContactFlowId(const char* value) { m_contactFlowId.assign(value); }

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline UpdateTaskTemplateResult& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline UpdateTaskTemplateResult& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline UpdateTaskTemplateResult& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}


    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline const TaskTemplateConstraints& GetConstraints() const{ return m_constraints; }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline void SetConstraints(const TaskTemplateConstraints& value) { m_constraints = value; }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline void SetConstraints(TaskTemplateConstraints&& value) { m_constraints = std::move(value); }

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline UpdateTaskTemplateResult& WithConstraints(const TaskTemplateConstraints& value) { SetConstraints(value); return *this;}

    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline UpdateTaskTemplateResult& WithConstraints(TaskTemplateConstraints&& value) { SetConstraints(std::move(value)); return *this;}


    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline const TaskTemplateDefaults& GetDefaults() const{ return m_defaults; }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline void SetDefaults(const TaskTemplateDefaults& value) { m_defaults = value; }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline void SetDefaults(TaskTemplateDefaults&& value) { m_defaults = std::move(value); }

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline UpdateTaskTemplateResult& WithDefaults(const TaskTemplateDefaults& value) { SetDefaults(value); return *this;}

    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline UpdateTaskTemplateResult& WithDefaults(TaskTemplateDefaults&& value) { SetDefaults(std::move(value)); return *this;}


    /**
     * <p>Fields that are part of the template.</p>
     */
    inline const Aws::Vector<TaskTemplateField>& GetFields() const{ return m_fields; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline void SetFields(const Aws::Vector<TaskTemplateField>& value) { m_fields = value; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline void SetFields(Aws::Vector<TaskTemplateField>&& value) { m_fields = std::move(value); }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateResult& WithFields(const Aws::Vector<TaskTemplateField>& value) { SetFields(value); return *this;}

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateResult& WithFields(Aws::Vector<TaskTemplateField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateResult& AddFields(const TaskTemplateField& value) { m_fields.push_back(value); return *this; }

    /**
     * <p>Fields that are part of the template.</p>
     */
    inline UpdateTaskTemplateResult& AddFields(TaskTemplateField&& value) { m_fields.push_back(std::move(value)); return *this; }


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
    inline void SetStatus(const TaskTemplateStatus& value) { m_status = value; }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline void SetStatus(TaskTemplateStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline UpdateTaskTemplateResult& WithStatus(const TaskTemplateStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline UpdateTaskTemplateResult& WithStatus(TaskTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline UpdateTaskTemplateResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline UpdateTaskTemplateResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline UpdateTaskTemplateResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline UpdateTaskTemplateResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_contactFlowId;

    TaskTemplateConstraints m_constraints;

    TaskTemplateDefaults m_defaults;

    Aws::Vector<TaskTemplateField> m_fields;

    TaskTemplateStatus m_status;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_createdTime;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
