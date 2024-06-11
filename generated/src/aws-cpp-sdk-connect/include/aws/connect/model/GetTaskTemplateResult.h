﻿/**
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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetTaskTemplateResult
  {
  public:
    AWS_CONNECT_API GetTaskTemplateResult();
    AWS_CONNECT_API GetTaskTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetTaskTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceId.assign(value); }
    inline GetTaskTemplateResult& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetTaskTemplateResult& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetTaskTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetTaskTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetTaskTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetTaskTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the task template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTaskTemplateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTaskTemplateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the task template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetTaskTemplateResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetTaskTemplateResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the flow that runs by default when a task is created by
     * referencing this template.</p>
     */
    inline const Aws::String& GetContactFlowId() const{ return m_contactFlowId; }
    inline void SetContactFlowId(const Aws::String& value) { m_contactFlowId = value; }
    inline void SetContactFlowId(Aws::String&& value) { m_contactFlowId = std::move(value); }
    inline void SetContactFlowId(const char* value) { m_contactFlowId.assign(value); }
    inline GetTaskTemplateResult& WithContactFlowId(const Aws::String& value) { SetContactFlowId(value); return *this;}
    inline GetTaskTemplateResult& WithContactFlowId(Aws::String&& value) { SetContactFlowId(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithContactFlowId(const char* value) { SetContactFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Constraints that are applicable to the fields listed.</p>
     */
    inline const TaskTemplateConstraints& GetConstraints() const{ return m_constraints; }
    inline void SetConstraints(const TaskTemplateConstraints& value) { m_constraints = value; }
    inline void SetConstraints(TaskTemplateConstraints&& value) { m_constraints = std::move(value); }
    inline GetTaskTemplateResult& WithConstraints(const TaskTemplateConstraints& value) { SetConstraints(value); return *this;}
    inline GetTaskTemplateResult& WithConstraints(TaskTemplateConstraints&& value) { SetConstraints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default values for fields when a task is created by referencing this
     * template.</p>
     */
    inline const TaskTemplateDefaults& GetDefaults() const{ return m_defaults; }
    inline void SetDefaults(const TaskTemplateDefaults& value) { m_defaults = value; }
    inline void SetDefaults(TaskTemplateDefaults&& value) { m_defaults = std::move(value); }
    inline GetTaskTemplateResult& WithDefaults(const TaskTemplateDefaults& value) { SetDefaults(value); return *this;}
    inline GetTaskTemplateResult& WithDefaults(TaskTemplateDefaults&& value) { SetDefaults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fields that are part of the template.</p>
     */
    inline const Aws::Vector<TaskTemplateField>& GetFields() const{ return m_fields; }
    inline void SetFields(const Aws::Vector<TaskTemplateField>& value) { m_fields = value; }
    inline void SetFields(Aws::Vector<TaskTemplateField>&& value) { m_fields = std::move(value); }
    inline GetTaskTemplateResult& WithFields(const Aws::Vector<TaskTemplateField>& value) { SetFields(value); return *this;}
    inline GetTaskTemplateResult& WithFields(Aws::Vector<TaskTemplateField>&& value) { SetFields(std::move(value)); return *this;}
    inline GetTaskTemplateResult& AddFields(const TaskTemplateField& value) { m_fields.push_back(value); return *this; }
    inline GetTaskTemplateResult& AddFields(TaskTemplateField&& value) { m_fields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Marks a template as <code>ACTIVE</code> or <code>INACTIVE</code> for a task
     * to refer to it. Tasks can only be created from <code>ACTIVE</code> templates. If
     * a template is marked as <code>INACTIVE</code>, then a task that refers to this
     * template cannot be created.</p>
     */
    inline const TaskTemplateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TaskTemplateStatus& value) { m_status = value; }
    inline void SetStatus(TaskTemplateStatus&& value) { m_status = std::move(value); }
    inline GetTaskTemplateResult& WithStatus(const TaskTemplateStatus& value) { SetStatus(value); return *this;}
    inline GetTaskTemplateResult& WithStatus(TaskTemplateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the task template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetTaskTemplateResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetTaskTemplateResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the task template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline GetTaskTemplateResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline GetTaskTemplateResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetTaskTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetTaskTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetTaskTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetTaskTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTaskTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTaskTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetTaskTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetTaskTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetTaskTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTaskTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTaskTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTaskTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
